#include "decision_bt_zero/decision_bt_zero.hpp"

DecisionBTZero::DecisionBTZero(const rclcpp::NodeOptions& options)
    : RMDecision::DecisionBT(7, "decision_bt_zero", options) {
    this->awaken();
}

void DecisionBTZero::world() {
    test_display("Hello, world!\n");
}

void DecisionBTZero::register_nodes(RMDecision::RMBT::BehaviorTreeFactory& factory) {
    factory.registerNodeType<World, DecisionBTZero>("World", this);
}

std::string DecisionBTZero::bt_file_path() {
    std::string share_dir = ament_index_cpp::get_package_share_directory("decision_bt_zero");
    return share_dir + "/config/bt_zero.xml";
}

#include "rm_decision_macros/decision_node_regist_macro.hpp"
REGIST_DECISION_NODE(DecisionBTZero)