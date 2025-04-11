#include "rotator/rotator.hpp"

Rotator::Rotator(const rclcpp::NodeOptions& options) : Node("navigator", options) {
    angular_cmd_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
    angular_velocity_sub_ = this->create_subscription<std_msgs::msg::Float32>(
        "to_rotator", 10, std::bind(&Rotator::angular_velocity_callback, this, std::placeholders::_1));
}

void Rotator::angular_velocity_callback(const std_msgs::msg::Float32::SharedPtr msg) {
    RCLCPP_INFO(this->get_logger(), "Received angular velocity requirement: %.3f", msg->data);
    geometry_msgs::msg::Twist cmd;
    cmd.linear.x = 0;
    cmd.linear.y = 0;
    cmd.linear.z = 0;
    cmd.angular.x = 0;
    cmd.angular.y = 0;
    cmd.angular.z = msg->data;
    angular_cmd_pub_->publish(cmd);
}

#include "rclcpp_components/register_node_macro.hpp"
RCLCPP_COMPONENTS_REGISTER_NODE(Rotator)