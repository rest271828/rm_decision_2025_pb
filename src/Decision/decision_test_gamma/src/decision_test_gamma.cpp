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

    while (t--) {
        std::cout << "1" << std::endl;
        set_angular_velocity(4);
        std::cout << "2" << std::endl;
        rclcpp::Rate(20).sleep();
        std::cout << "3" << std::endl;
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
                RA };

    const std::unordered_map<std::string, Inst> convert = {
        {"NAV", NAV},
        {"ROT", ROT},
        {"SAV", SAV},
        {"SLV", SLV},
        {"MOV", MOV},
        {"GCP", GCP},
        {"GCA", GCA},
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

    default:
        test_display("Instruction undefined.\n");
        break;
    }
}

#include "rm_decision_macros/decision_node_regist_macro.hpp"
REGIST_DECISION_NODE(DecisionTestGamma)