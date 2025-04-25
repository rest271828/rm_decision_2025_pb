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

    void responese_without_const(const std::string& instruction, const std::vector<float>& args) ;

    void full_game() ;

    void fortress_defend() const;

    void random_point_switch(const std::vector<RMDecision::PlaneCoordinate>& points) const;

    void start_random_point_switch(const std::vector<RMDecision::PlaneCoordinate>& points) ;

    std::vector<RMDecision::PlaneCoordinate> enemy_patrol = {
        RMDecision::PlaneCoordinate(1.8, -2.7),
        RMDecision::PlaneCoordinate(1.0, -3.5),
        RMDecision::PlaneCoordinate(9.553, 2.817),
        RMDecision::PlaneCoordinate(5.2, -2),
        RMDecision::PlaneCoordinate(2, 2)
    };//if this is enemy patrol targets
    
    std::vector<RMDecision::PlaneCoordinate> friend_patrol = {
        RMDecision::PlaneCoordinate(3.0, 4.0),
        RMDecision::PlaneCoordinate(4.0, 5.0),
        RMDecision::PlaneCoordinate(5.0, 6.0),
        RMDecision::PlaneCoordinate(6.0, 7.0),
        RMDecision::PlaneCoordinate(7.0, 8.0)
    };//if this is friend patrol targets
    
    mutable RMDecision::PlaneCoordinate last_point; // 使用 mutable 关键字，允许在consr的函数中修改last_point的值

};
