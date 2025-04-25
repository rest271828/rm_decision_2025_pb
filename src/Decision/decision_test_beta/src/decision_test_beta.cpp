#include "decision_test_beta/decision_test_beta.hpp"

DecisionTestBeta::DecisionTestBeta(const rclcpp::NodeOptions& options)
    : RMDecision::DecisionBeta(7, "decision_test_beta", options) {
    pose_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>(
        "navigator/current_pose", 10, std::bind(&DecisionTestBeta::pose_sub_callback, this, std::placeholders::_1));

    // 初始化定时器，每20秒调用一次 update_random_point 函数
    random_point_timer_ = this->create_wall_timer(
        std::chrono::seconds(20), std::bind(&DecisionTestBeta::update_random_point, this));
}

void DecisionTestBeta::nav_to_outpost(const geometry_msgs::msg::PoseStamped::SharedPtr msg) {
    if(prism_.game->game_start)
    {
       nav_to_point(9,9);  // 这里可以根据实际设置前哨站的坐标
    }

}

RMDecision::PlaneCoordinate DecisionTestBeta::generate_random_point() {
    // 生成随机点坐标
    std::random_device rd;
    std::mt19937 gen(rd());
    
    double min = 5.0; // 最小值
    double max = 10.0;  // 最大值
    std::uniform_real_distribution<double> dis(min, max);

    double x = dis(gen);
    double y = dis(gen);

    return RMDecision::PlaneCoordinate(x, y);
}

void DecisionTestBeta::update_random_point() {
    // 生成随机点
    auto random_point = generate_random_point();

    // 判断逻辑：根据条件决定执行地方巡逻或友方巡逻
    if (/* 判断条件：执行敌方巡逻 */) {
        patrol_enemy(random_point);
    } else if (/* 判断条件：执行友方巡逻 */) {
        patrol_friend(random_point);
    } else {
        // 默认巡逻到随机点
        nav_to_point(random_point);
    }
}


void DecisionTestBeta::patrol_enemy(const RMDecision::PlaneCoordinate& targetPoint) {

    if (chessboard_.enemy_outpost()->hp == 0 && chessboard_.friend_outpost()->hp != 0) {
        nav_to_point(targetPoint);
        rotate_to_angle(6.28);
    }
}

void DecisionTestBeta::patrol_friend(const RMDecision::PlaneCoordinate& targetPoint) {

    if (chessboard_.friend_outpost()->hp == 0 && chessboard_.enemy_outpost()->hp != 0) {
        nav_to_point(targetPoint);
        rotate_to_angle(3.14);
    }
}

void DecisionTestBeta::test_response(const std::string& instruction, const std::vector<float>& args) const {
    enum Inst { NAV,
        ROT,
        SAV,
    };
    const std::unordered_map<std::string, Inst> convert = {
        {"NAV", NAV},
        {"ROT", ROT},
        {"SAV", SAV},
    };
    auto it = convert.find(instruction);
    if (it == convert.end()) {
        return;
    }

    switch (it->second) {
    case NAV:
        if (args.size() == 2) {
            test_display("Navigating to point: (%.3f, %.3f)", args[0], args[1]);
            nav_to_point(args[0], args[1]);
        }
        break;
    case ROT:
        if (args.size() == 1) {
            test_display("Rotating to angle: %.3f", args[0]);
            rotate_to_angle(args[0]);
        }
        break;  
    case SAV:
        if (args.size() == 1) {
            test_display("Set angular velocity: %.3f", args[0]);
            set_angular_velocity(args[0]);
        }
        break;
    }
}