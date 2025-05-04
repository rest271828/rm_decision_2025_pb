#include "decision_bt/decision_bt.hpp"
#include "pb_rm_interfaces/msg/game_robot_hp.hpp"

class DecisionBTOne : public RMDecision::DecisionBT {
public:
    explicit DecisionBTOne(const rclcpp::NodeOptions& options);

private:
    void register_nodes(RMDecision::RMBT::BehaviorTreeFactory& factory) override;

    std::string bt_file_path() override;

    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_sub_;
    rclcpp::Subscription<pb_rm_interfaces::msg::GameRobotHP>::SharedPtr hp_sub_;
};