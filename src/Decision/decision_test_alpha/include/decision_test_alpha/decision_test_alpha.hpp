#include "decision_beta/decision_beta.hpp"

class DecisionTestAlpha : public RMDecision::DecisionBeta {
public:
    explicit DecisionTestAlpha(const rclcpp::NodeOptions& options);

private:
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_sub_;

    void pose_sub_callback(const geometry_msgs::msg::PoseStamped::SharedPtr msg);
    
    void test_response(const std::string& instruction, const std::vector<float>& args) const override;
};