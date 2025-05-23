#include "decision_test_gamma/decision_test_gamma.hpp"

DecisionTestGamma::DecisionTestGamma(const rclcpp::NodeOptions& options)
    : RMDecision::DecisionBeta(7, "decision_test_gamma", options) {
    pose_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>(
        "navigator/current_pose", 10, std::bind(&DecisionTestGamma::pose_sub_callback, this, std::placeholders::_1));
}

void DecisionTestGamma::pose_sub_callback(const geometry_msgs::msg::PoseStamped::SharedPtr msg) {
    prism_.self->pose = *msg;
}

void DecisionTestGamma::route_a() const {
    nav_to_point_serially(5.2, -2);
    rotate_to_angle(0);
    move_to_point(RMDecision::PlaneCoordinate(1.8, -2.7));
    move_to_point(RMDecision::PlaneCoordinate(1.0, -3.5));
    nav_to_point_serially(9.553, 2.817);
    int t = 80;

    //添加调试日志，确认循环是否进入
    test_display("Entering while loop with t = %d\n", t);

    while (t--) {
        // 强制刷新 std::cout 缓冲区
        std::cout << "1" << std::endl;
        set_angular_velocity(4);
        std::cout << "2" << std::endl;

        // 使用 rclcpp::Rate 控制频率
        rclcpp::Rate(20).sleep();

        // 强制刷新 std::cout 缓冲区
        std::cout << "3" << std::endl;

        // 添加调试日志，确认循环迭代次数
        test_display("Iteration: %d\n", t);
    }

    // 添加调试日志，确认循环结束
    test_display("While loop finished.\n");
}

void DecisionTestGamma::full_game()  {

    route_a();
    
    if(chessboard_.enemy_outpost()->hp == 0 && chessboard_.friend_outpost()->hp != 0)
    {
        test_display("敌方前哨先被攻破\n");
        start_random_point_switch(enemy_patrol);
        
    }//敌方前哨先被攻破
    else if(chessboard_.enemy_outpost()->hp!= 0 && chessboard_.friend_outpost()->hp == 0)
    {
        test_display("我方前哨先被攻破\n");
        start_random_point_switch(friend_patrol);
        
    }//我方前哨先被攻破
    else if(chessboard_.enemy_outpost()->hp == 0 && chessboard_.friend_outpost()->hp == 0)
    {
        if(chessboard_.enemy_base()->hp - chessboard_.friend_base()->hp < 1500)
        {
            start_random_point_switch(enemy_patrol);
            
        }
        else if(chessboard_.enemy_base()->hp - chessboard_.friend_base()->hp > 1500)
        {
            fortress_defend(); // 哨兵上堡垒小陀螺守家
        }

    }//双方前哨都被攻破
}

void DecisionTestGamma::fortress_defend() const {
    auto currentPoint = get_current_coordinate();
    if(currentPoint.x > 0)
    {
        nav_to_point_serially(5.2, -2);//右侧上坡点
        rotate_to_angle(0);
    }
    else if(currentPoint.x < 0)
    {
        nav_to_point_serially(-5.2, -2);//左侧上坡点
        rotate_to_angle(PI);
    }

    //nav_to_point_serially(RMDecision::PlaneCoordinate(1.862, 0.073));//给出的堡垒点
    move_to_point(RMDecision::PlaneCoordinate(1.862, 0.073));
    test_display("arrived fortress!\n");
    set_angular_velocity(4);
}

void DecisionTestGamma::FriendlyPatrol::execute() const {
    
}

void DecisionTestGamma::EnemyPatrol::execute() const {
    
}

void DecisionTestGamma::random_point_switch(const std::vector<RMDecision::PlaneCoordinate>& points) const{
    // 确保 points.size() 不为 0
    if (points.size() == 0) {
        test_display("Points vector is empty, cannot switch to a new point.\n");
        return;
    }

    std::uniform_int_distribution<int> dist(0, points.size() - 1);

    std::random_device rd;
    std::mt19937 rng(rd()); // Define and initialize the random number generator

    RMDecision::PlaneCoordinate new_point;
    do {
        new_point = points[dist(rng)]; // Pass rng to dist
    } while (new_point == last_point);

    last_point = new_point;
    nav_to_point_serially(new_point);
    test_display("Moving to new point: (%.3f, %.3f)\n", new_point.x, new_point.y);
}

void DecisionTestGamma::start_random_point_switch(const std::vector<RMDecision::PlaneCoordinate>& points) {
    auto timer_callback = [this, points]() -> void {
        random_point_switch(points);
    };

    auto timer = this->create_wall_timer(
        std::chrono::seconds(20),
        timer_callback);

}

void DecisionTestGamma::responese_without_const(const std::string& instruction, const std::vector<float>& args)
{
    enum Inst {
        PT,// patrol target
        FU,//full game
         };
    const std::unordered_map<std::string, Inst> convert = {
        {"PT", PT},
        {"FU", FU},
         };
    auto it = convert.find(instruction);
    if (it == convert.end()) {
        return;
    }
    
    switch (it->second)
    {
        case PT:
            start_random_point_switch(enemy_patrol);
            test_display("1\n");
            break;
        case FU:
            full_game();
            test_display("Govern the game.\n");
            break;
        default:
            break;
    }

}

void DecisionTestGamma::test_response(const std::string& instruction, const std::vector<float>& args) {
    enum Inst { NAV,
                ROT,
                SAV,
                SLV,
                MOV,
                GCP,
                GCA,
                PT,// patrol target
                FU,//full game
                FD,// fortress defend
                RA };

    const std::unordered_map<std::string, Inst> convert = {
        {"NAV", NAV},
        {"ROT", ROT},
        {"SAV", SAV},
        {"SLV", SLV},
        {"MOV", MOV},
        {"GCP", GCP},
        {"GCA", GCA},
        {"PT", PT},
        {"FU", FU},
        {"FD", FD},
        {"RA", RA}};

    auto it = convert.find(instruction);
    if (it == convert.end()) {
        return;
    }

    switch (it->second) {
    case NAV:
        if (args.size() == 2) {
            test_display("Navigating to point: (%.3f, %.3f)\n", args[0], args[1]);
            nav_to_point(args[0], args[1]);
        }
        break;

    case ROT:
        if (args.size() == 1) {
            test_display("Rotating to angle: %.3f\n", args[0]);
            rotate_to_angle(args[0]);
        }
        break;

    case SAV:
        if (args.size() == 1) {
            test_display("Set angular velocity: %.3f\n", args[0]);
            set_angular_velocity(args[0]);
        }
        break;

    case SLV:
        if (args.size() == 2) {
            test_display("Set linear velocity: (%.3f, %.3f)\n", args[0], args[1]);
            set_linear_velocity(RMDecision::PlaneCoordinate(args[0], args[1]));
        }
        break;

    case MOV:
        if (args.size() == 2) {
            test_display("Moving to point: (%.3f, %.3f)\n", args[0], args[1]);
            move_to_point(RMDecision::PlaneCoordinate(args[0], args[1]));
        }
        break;

    case GCP: {
        auto currentPoint = get_current_coordinate();
        test_display("Current point: (%.3f, %.3f)\n", currentPoint.x, currentPoint.y);
        break;
    }

    case GCA: {
        test_display("Current angle: %.3f\n", get_current_angle());
        break;
    }

    case RA: {
        route_a();
        test_display("Executing route a.\n");
        break;
    }
    case FU: {
        //full_game();
        test_display("Govern the game.\n");
        break;
    }
    case FD: {
        fortress_defend();
        test_display("Fortress defend.\n");
        break;
    }

    default:
        test_display("Instruction undefined.\n");
        break;
    }
}

#include "rm_decision_macros/decision_node_regist_macro.hpp"
REGIST_DECISION_NODE(DecisionTestGamma)