#include "ament_index_cpp/get_package_share_directory.hpp"
#include "decision_bt/decision_bt.hpp"
#include "pb_rm_interfaces/msg/game_robot_hp.hpp"

class DecisionBTOne : public RMDecision::DecisionBT {
public:
    explicit DecisionBTOne(const rclcpp::NodeOptions& options);

private:
    void pose_sub_callback(const geometry_msgs::msg::PoseStamped::SharedPtr msg);

    void hp_sub_callback(const pb_rm_interfaces::msg::GameRobotHP::SharedPtr msg);

    std::string bt_file_path() override;

    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_sub_;
    rclcpp::Subscription<pb_rm_interfaces::msg::GameRobotHP>::SharedPtr hp_sub_;
};