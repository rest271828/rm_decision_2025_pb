#include "decision_beta/decision_beta.hpp"

class DecisionTestRandomPoints : public RMDecision::DecisionBeta
{
public:
    explicit DecisionTestRandomPoints(const rclcpp::NodeOptions& options);

private:
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_sub_;
    
    void random_points() const ;

    void pose_sub_callback(const geometry_msgs::msg::PoseStamped::SharedPtr msg);

    void test_response(const std::string& instruction, const std::vector<float>& args) const override;
};