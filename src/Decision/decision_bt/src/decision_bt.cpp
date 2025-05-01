#include "decision_bt/decision_bt.hpp"
using namespace RMDecision;

DecisionBT::DecisionBT(uint selfId, std::string nodeName, const rclcpp::NodeOptions& options)
    : DecisionBeta(selfId, nodeName, options) {
    RMBT::BehaviorTreeFactory factory;
    this->register_nodes(factory);

    bt_exec_timer_ = this->create_wall_timer(
        std::chrono::milliseconds(200), std::bind(&DecisionBT::bt_exec, this));
}