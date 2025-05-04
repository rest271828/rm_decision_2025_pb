#include "ament_index_cpp/get_package_share_directory.hpp"
#include "decision_bt/decision_bt.hpp"

class DecisionBTZero : public RMDecision::DecisionBT {
public:
    explicit DecisionBTZero(const rclcpp::NodeOptions& options);

    void world();

private:
    void register_nodes(RMDecision::RMBT::BehaviorTreeFactory& factory) override;

    std::string bt_file_path() override;
};

class World : public RMDecision::RMBT::SyncActionNode<DecisionBTZero> {
public:
    World(const std::string& name,
          DecisionBTZero* host)
        : RMDecision::RMBT::SyncActionNode<DecisionBTZero>(name, host, {}) {}

    BT::NodeStatus tick() override {
        host_->world();
        return BT::NodeStatus::SUCCESS;
    }
};