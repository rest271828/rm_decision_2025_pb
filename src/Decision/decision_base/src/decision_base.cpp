#include "decision_base/decision_base.hpp"

using namespace RMDecision;

DecisionBase::DecisionBase(uint selfId, std::string nodeName, const rclcpp::NodeOptions& options)
    : Node(nodeName, options), chessboard_(Faction::UNKNOWN) {
    callback_group_ = this->create_callback_group(rclcpp::CallbackGroupType::Reentrant);
    auto subOpt = rclcpp::SubscriptionOptions();
    auto pubOpt = rclcpp::PublisherOptions();
    subOpt.callback_group = callback_group_;
    pubOpt.callback_group = callback_group_;

    chessboard_sub_ = this->create_subscription<iw_interfaces::msg::Chessboard>(
        "rm_decision/chessboard", 10,
        std::bind(&DecisionBase::chessboard_sub_callback, this, std::placeholders::_1), subOpt);
    prism_sub_ = this->create_subscription<iw_interfaces::msg::Prism>(
        ("rm_decision/prism" + std::to_string(selfId)).c_str(), 10,
        std::bind(&DecisionBase::prism_sub_callback, this, std::placeholders::_1), subOpt);
    test_args_sub_ = this->create_subscription<test_taker_interfaces::msg::TestArgs>(
        "test_command", 10,
        std::bind(&DecisionBase::test_callback, this, std::placeholders::_1), subOpt);

    nav_pub_ = this->create_publisher<navigator_interfaces::msg::Navigate>("to_navigator", 10, pubOpt);
    nav_vel_pub_ = this->create_publisher<std_msgs::msg::Float32MultiArray>("nav_vel", 10, pubOpt);
    angle_pub_ = this->create_publisher<std_msgs::msg::Float32>("to_rotator", 10, pubOpt);
    test_feedback_pub_ = this->create_publisher<std_msgs::msg::String>("test_feedback", 10, pubOpt);
}

void DecisionBase::chessboard_sub_callback(const iw_interfaces::msg::Chessboard::SharedPtr msg) {
    if (msg->initialed && rclcpp::Time(msg->timestamp) > chessboard_.timestamp) {
        chessboard_.update_from_message(*msg);
    }
}

void DecisionBase::prism_sub_callback(const iw_interfaces::msg::Prism::SharedPtr msg) {
    prism_.update_from_message(*msg);
}

void DecisionBase::test_callback(const test_taker_interfaces::msg::TestArgs::SharedPtr msg) {
    test_response(msg->instruction, msg->args);
}

void DecisionBase::nav_to_point(const double& x, const double& y, bool instant) const {
    nav_to_point(PlaneCoordinate(x, y), instant);
}

void DecisionBase::nav_to_point(const PlaneCoordinate& targetPoint, bool instant) const {
    navigator_interfaces::msg::Navigate msg;
    msg.pose.header.stamp = this->now();
    msg.pose.header.frame_id = "map";
    msg.pose.pose.position.x = targetPoint.x;
    msg.pose.pose.position.y = targetPoint.y;
    msg.pose.pose.position.z = 0.0;
    msg.pose.pose.orientation.x = 0.0;
    msg.pose.pose.orientation.y = 0.0;
    msg.pose.pose.orientation.z = 0.0;
    msg.pose.pose.orientation.w = 1.0;
    nav_pub_->publish(msg);
}

void DecisionBase::nav_to_pose(const PoseStamped& stampedPose, bool instant) const {
    navigator_interfaces::msg::Navigate msg;
    msg.pose = stampedPose;
    msg.instant = instant;
    nav_pub_->publish(msg);
}

PlaneCoordinate DecisionBase::get_current_coordinate() const {
    return PlaneCoordinate(prism_.self->pose);
}

void DecisionBase::set_linear_velocity(const PlaneCoordinate& vec) const {
    std_msgs::msg::Float32MultiArray msg;
    msg.data.push_back(vec.x);
    msg.data.push_back(vec.y);
    nav_vel_pub_->publish(msg);
}

void DecisionBase::set_angular_velocity(const double& angularV) const {
    std_msgs::msg::Float32 msg;
    msg.data = angularV;
    angle_pub_->publish(msg);
}

double DecisionBase::get_current_angle() const {
    double w = prism_.self->pose.pose.orientation.w;
    double x = prism_.self->pose.pose.orientation.x;
    double y = prism_.self->pose.pose.orientation.y;
    double z = prism_.self->pose.pose.orientation.z;

    double yaw = std::atan2(2 * (w * z + x * y), 1 - 2 * (x * x + z * z));
    return yaw;
}

void DecisionBase::test_display(const char* format, ...) const {
    const int BUFFER_SIZE = 512;
    char buffer[BUFFER_SIZE];

    va_list args;
    va_start(args, format);
    std::vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);

    RCLCPP_INFO(this->get_logger(), "%s", buffer);

    auto message = std_msgs::msg::String();
    message.data = std::string(buffer);
    test_feedback_pub_->publish(message);
}