#include "decision_beta/decision_beta.hpp"
#include <random>

class DecisionTestBeta : public RMDecision::DecisionBeta {
public:
    explicit DecisionTestBeta(const rclcpp::NodeOptions& options);

protected:
    void patrol_enemy(const RMDecision::PlaneCoordinate& targetPoint);

    void patrol_friend(const RMDecision::PlaneCoordinate& targetPoint);

    void main_patrol();

private:
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_sub_;
    rclcpp::TimerBase::SharedPtr random_point_timer_;
    geometry_msgs::msg::PoseStamped current_pose_;

    RMDecision::PlaneCoordinate generate_random_point();

    void pose_sub_callback(const geometry_msgs::msg::PoseStamped::SharedPtr msg);

    void nav_to_outpost(const geometry_msgs::msg::PoseStamped::SharedPtr msg);

    // 新增更新随机点的函数
    void update_random_point();

    void test_response(const std::string& instruction, const std::vector<float>& args) const override;
};