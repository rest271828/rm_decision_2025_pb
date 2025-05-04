#include "decision_test_alpha/decision_test_alpha.hpp"

DecisionTestAlpha::DecisionTestAlpha(const rclcpp::NodeOptions& options)
    : RMDecision::DecisionBeta(7, "decision_test_alpha", options) {
    pose_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>(
        "navigator/current_pose", 10, std::bind(&DecisionTestAlpha::pose_sub_callback, this, std::placeholders::_1));
}

void DecisionTestAlpha::pose_sub_callback(const geometry_msgs::msg::PoseStamped::SharedPtr msg) {
    prism_.self->pose = *msg;
}

void DecisionTestAlpha::hp_sub_callback(const pb_rm_interfaces::msg::GameRobotHP::SharedPtr msg) {
    prism_.self->hp = msg->blue_7_robot_hp;
}

void DecisionTestAlpha::set_angular_velocity_debounce(const double& angularV) const {
    int delay = 50;
    while (delay--) {
        set_angular_velocity(angularV);
        test_display("setting angular velocity: %.3f\n", angularV);
        rclcpp::Rate(10).sleep();
    }
}

void DecisionTestAlpha::pass_through_hill(
    const RMDecision::PlaneCoordinate& start,
    const RMDecision::PlaneCoordinate& end,
    const double& angle) const {
    nav_to_point_serially(start);
    rotate_to_angle(angle);
    move_to_point(end);
}

void DecisionTestAlpha::route_a() const {
    nav_to_point_serially(5.2, -2);
    rotate_to_angle(0);
    move_to_point(RMDecision::PlaneCoordinate(1.8, -2.7));
    move_to_point(RMDecision::PlaneCoordinate(1.8, -3.5));
    nav_to_point_serially(9.553, 2.817);
    if (get_current_coordinate().coincide_with(RMDecision::PlaneCoordinate(9.553, 2.817), 0.05) || true) {
        set_angular_velocity_debounce(4);
    }
    int t = 0;
    while (prism_.self->hp > 100) {
        rclcpp::Rate(5).sleep();
        if (t++ > 10) {
            nav_to_point(RMDecision::PlaneCoordinate::random_point(0.3) + get_current_coordinate());
            set_angular_velocity_debounce(4);
        }
    }
    nav_to_point(0, 0);
}

void DecisionTestAlpha::test_response(const std::string& instruction, const std::vector<float>& args) {
    enum Inst { NAV,  // nav_to_point
                ROT,  // rotate_to_angle
                SAV,  // set_angular_vel
                SLV,  // set_linear_vel
                MOV,  // move_to_point
                GCP,  // get_current_point
                GCA,  // get_current_angle
                RA,   // route_a
                PTH,  // pass_through_hill
                SLO,  // set_linear_offset
                SAO,  // set_angular_offset
                GLO,  // get_linear_offset
                GAO,  // get_angular_offset
                OML,  // mark_origin_linear
                OMA   // marl_origin_angular
    };

    const std::unordered_map<std::string, Inst> convert = {
        {"NAV", NAV},
        {"ROT", ROT},
        {"SAV", SAV},
        {"SLV", SLV},
        {"MOV", MOV},
        {"GCP", GCP},
        {"GCA", GCA},
        {"RA", RA},
        {"PTH", PTH},
        {"SLO", SLO},
        {"SAO", SAO},
        {"GLO", GLO},
        {"GAO", GAO},
        {"OML", OML},
        {"OMA", OMA}};

    auto it = convert.find(instruction);
    if (it == convert.end()) {
        test_display("Instruction undefined.\n");
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
        break;
    }

    case PTH:
        if (args.size() == 5) {
            test_display("Passing through the hill: (%.3f, %.3f) -> (%.3f, %.3f)\n", args[0], args[1], args[2], args[3]);
            pass_through_hill(
                RMDecision::PlaneCoordinate(args[0], args[1]),
                RMDecision::PlaneCoordinate(args[2], args[3]), args[4]);
            break;
        }

    case SLO:
        if (args.size() == 2) {
            test_display("Set linear offset: (%.3f, %.3f)\n", args[0], args[1]);
            set_linear_offset(RMDecision::PlaneCoordinate(args[0], args[1]));
            break;
        }

    case SAO:
        if (args.size() == 1) {
            test_display("Set angular offset: %.3f\n", args[0]);
            set_angular_offset(args[0]);
            break;
        }

    case GLO: {
        RMDecision::PlaneCoordinate offset = get_linear_offset();
        test_display("Linear offset: (%.3f, %.3f)\n", offset.x, offset.y);
        break;
    }

    case GAO: {
        double offset = get_angular_offset();
        test_display("Angular offset: %.3f\n", offset);
        break;
    }

    case OML:
        if (args.size() == 0) {
            mark_origin_linear();
            RMDecision::PlaneCoordinate offset = get_linear_offset();
            test_display("Marked linear offset: (%.3f, %.3f)\n", offset.x, offset.y);
            break;
        }

    case OMA:
        if (args.size() == 0) {
            mark_origin_angular();
            double offset = get_angular_offset();
            test_display("Marked angular offset: %.3f\n", offset);
            break;
        }

    default:
        test_display("Instruction undefined.\n");
        break;
    }
}

#include "rm_decision_macros/decision_node_regist_macro.hpp"
REGIST_DECISION_NODE(DecisionTestAlpha)