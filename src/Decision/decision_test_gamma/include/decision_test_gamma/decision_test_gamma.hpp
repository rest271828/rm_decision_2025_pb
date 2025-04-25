#include "decision_beta/decision_beta.hpp"

class DecisionTestGamma : public RMDecision::DecisionBeta {
public:
    explicit DecisionTestGamma(const rclcpp::NodeOptions& options);

    class PatrolStrategy : public RMDecision::DecisionBeta {
        public:
            virtual void execute() const = 0;
            virtual ~PatrolStrategy() = default;
    };
    
    // 敌方巡逻策略
    class EnemyPatrol : public PatrolStrategy {
    public:
        void execute() const override ;
    };
        
    // 友方巡逻策略
    class FriendlyPatrol : public PatrolStrategy {
    public:
        void execute() const override ;
    };

private:
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_sub_;

    std::shared_ptr<EnemyPatrol> enemyPatrol;

    std::shared_ptr<FriendlyPatrol> friendlyPatrol;

    void pose_sub_callback(const geometry_msgs::msg::PoseStamped::SharedPtr msg);

    void route_a() const;

    void test_response(const std::string& instruction, const std::vector<float>& args) const override;

    void full_game();

    void fortress_defend() const;

};