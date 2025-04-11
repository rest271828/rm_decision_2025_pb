#include "decision_test_alpha/decision_test_alpha.hpp"

DecisionTestAlpha::DecisionTestAlpha(const rclcpp::NodeOptions& options)
    : DecisionBase(7, "decision_test_alpha", options) {
    pose_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>(
        "navigator/current_pose", 10, std::bind(&DecisionTestAlpha::pose_sub_callback, this, std::placeholders::_1));
}

void DecisionTestAlpha::pose_sub_callback(const geometry_msgs::msg::PoseStamped::SharedPtr msg) {
    prism_.self->pose = *msg;
}
 
void DecisionTestAlpha::test_response(const std::string& instruction, const std::vector<float>& args) const {
    enum Inst { NAV,
                ROT,
                SET_ANGULAR_V };

    const std::unordered_map<std::string, Inst> convert = {
        {"NAV", NAV},
        {"ROT", ROT},
        {"SET_ANGULAR_V", SET_ANGULAR_V}};

    auto it = convert.find(instruction);
    if (it == convert.end()) {
        return;
    }

    switch (it->second) {

    case NAV:
        if(args.size() == 2) {
            RCLCPP_INFO(this->get_logger(), "nav_to_point (%f, %f)", args[0], args[1]);
            nav_to_point(args[0], args[1]);
        }
        break;

    case ROT:
        if(args.size() == 1) {
            RCLCPP_INFO(this->get_logger(), "rotate_to_angle %f", args[0]);
            rotate_to_angle(args[0]);
        }
        break;

    case SET_ANGULAR_V:
        if(args.size() == 1) {
            RCLCPP_INFO(this->get_logger(), "set_angular_v %f", args[0]);
            set_angular_velocity(args[0]);
        }
        break;
        
    default:
        break;
    }
}

#include "rm_decision_macros/decision_node_regist_macro.hpp"
REGIST_DECISION_NODE(DecisionTestAlpha)