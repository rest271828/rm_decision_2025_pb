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
    angle_pub_ = this->create_publisher<std_msgs::msg::Float32>("to_rotator", 10, pubOpt);
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

void DecisionBase::rotate_to_vec(const PlaneCoordinate& vec) const {
    double angle = std::atan2(vec.y, vec.x);
    rotate_to_angle(angle);
}

void DecisionBase::rotate_to_angle(const double& targetAngle) const {
    const double KP = 1.0;
    const double KI = 0.01;
    const double KD = 0.1;

    const double TOLARANCE = 0.01;
    const double RATE = 20;

    double previousError = 0.0;  // 上一次的误差
    double integral = 0.0;       // 误差的积分项
    rclcpp::Time lastTime = this->now();

    while (rclcpp::ok()) {
        auto currentTime = this->now();
        double deltaTime = (currentTime - lastTime).seconds();  // 动态计算时间间隔
        lastTime = currentTime;

        double currentAngle = get_current_angle();
        double error = targetAngle - currentAngle;

        if (error > 180.0) {
            error -= 360.0;
        } else if (error < -180.0) {
            error += 360.0;
        }

        integral += error * deltaTime;
        double derivative = (error - previousError) / deltaTime;

        double angularV = KP * error + KI * integral + KD * derivative;
        set_angular_velocity(angularV);

        previousError = error;

        if (std::abs(error) < TOLARANCE) {
            set_angular_velocity(0.0);
            break;
        }

        rclcpp::Rate(RATE).sleep();
    }
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