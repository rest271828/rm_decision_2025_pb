#include "decision_beta/decision_beta.hpp"

class DecisionTestAlpha : public RMDecision::DecisionBeta {
public:
    explicit DecisionTestAlpha(const rclcpp::NodeOptions& options);

private:
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_sub_;

    void pose_sub_callback(const geometry_msgs::msg::PoseStamped::SharedPtr msg);

    void set_angular_velocity_debounce(const double& angularV) const;

    void pass_through_hill(
        const RMDecision::PlaneCoordinate& start, 
        const RMDecision::PlaneCoordinate& end,
        const double& angle) const;

    void route_a() const;

    void test_response(const std::string& instruction, const std::vector<float>& args) const override;
};