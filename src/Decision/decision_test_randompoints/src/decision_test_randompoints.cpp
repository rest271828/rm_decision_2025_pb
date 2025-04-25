#include "decision_test_randompoints/decision_test_randompoints.hpp"

DecisionTestRandomPoints::DecisionTestRandomPoints(const rclcpp::NodeOptions& options)
    : RMDecision::DecisionBeta(7, "decision_test_randompoints", options) {
    pose_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>(
        "navigator/current_pose", 10, std::bind(&DecisionTestRandomPoints::pose_sub_callback, this, std::placeholders::_1));
}

void DecisionTestRandomPoints::pose_sub_callback(const geometry_msgs::msg::PoseStamped::SharedPtr msg) {
    prism_.self->pose = *msg;
}

void DecisionTestRandomPoints::random_points() const{
    // 调用 random_point() 方法生成随机点，传入半径参数
    double radius = 10.0; // 示例半径值，您可以根据需要调整
    RMDecision::PlaneCoordinate random_point = RMDecision::PlaneCoordinate::random_point(radius);

    // 打印生成的随机点的坐标
    test_display("Generated random point: (x = %.2f, y = %.2f)\n", random_point.x, random_point.y);
}

void DecisionTestRandomPoints::test_response(const std::string& instruction, const std::vector<float>& args) const {
    enum Inst { NAV,
        ROT,
        SAV,
        SLV,
        MOV,
        GCP,
        GCA,
        PT,// patrol target
        FU,//full game
        RP,
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
    {"RP", RP},
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

    case RP: {
        random_points();
        test_display("Current angle: %.3f\n", get_current_angle());
        break;
        }

    default:
    test_display("Instruction undefined.\n");
    break;
    }
}

#include "rm_decision_macros/decision_node_regist_macro.hpp"
REGIST_DECISION_NODE(DecisionTestRandomPoints)