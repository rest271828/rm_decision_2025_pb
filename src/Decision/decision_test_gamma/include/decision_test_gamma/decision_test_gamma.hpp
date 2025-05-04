#include "decision_beta/decision_beta.hpp"

class DecisionTestGamma : public RMDecision::DecisionBeta {
public:
    explicit DecisionTestGamma(const rclcpp::NodeOptions& options);

private:
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_sub_;

    void pose_sub_callback(const geometry_msgs::msg::PoseStamped::SharedPtr msg);

    void route_a() const;

    void test_response(const std::string& instruction, const std::vector<float>& args) override;
};