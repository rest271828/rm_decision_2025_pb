#include "decision_bt/decision_bt.hpp"
using namespace RMDecision;

DecisionBT::DecisionBT(uint selfId, std::string nodeName, const rclcpp::NodeOptions& options)
    : DecisionBeta(selfId, nodeName, options) {
    RMBT::BehaviorTreeFactory factory;
    this->register_basic_nodes(factory);
    this->register_nodes(factory);

    bt_exec_timer_ = this->create_wall_timer(
        std::chrono::milliseconds(200), std::bind(&DecisionBT::bt_exec, this));
}

void DecisionBT::bt_exec() {
}

void DecisionBT::register_basic_nodes(const RMBT::BehaviorTreeFactory& factory) const {
    factory.registerNodeType<NavToPoint, DecisionBT>("NavToPoint", this);
}

void DecisionBT::nav_to_point(const PlaneCoordinate& targetPoint) const {
    DecisionBeta::nav_to_point(targetPoint);
}

void DecisionBT::nav_to_point_serially(const PlaneCoordinate& targetPoint) const {
    DecisionBeta::nav_to_point_serially(targetPoint);
}

void DecisionBT::move_to_point(const PlaneCoordinate& targetPoint) const {
    DecisionBeta::move_to_point(targetPoint);
}

void DecisionBT::rotate_to_angle(const double& targetAngle) const {
    DecisionBeta::rotate_to_angle(targetAngle);
}

void DecisionBT::rotate_to_vec(const PlaneCoordinate& vec) const {
    DecisionBeta::rotate_to_vec(vec);
}

PlaneCoordinate DecisionBT::get_current_coordinate() const {
    return DecisionBeta::get_current_coordinate();
}

double DecisionBT::get_current_angle() const {
    return DecisionBeta::get_current_angle();
}