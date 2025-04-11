#include "state_updater/state_updater.hpp"

class StateUpdater : public StateBase {
public:
    StateUpdater(const rclcpp::NodeOptions& options) : StateBase(options) {
        hp_update_handler_ = this->create_updater<HpUpdateHandler>();
        game_status_update_handler_ = this->create_updater<GameStatusUpdateHandler>();
        robot_status_update_handler_ = this->create_updater<RobotStatusUpdateHandler>();

        this->register_updater<pb_rm_interfaces::msg::GameRobotHP>(hp_update_handler_);
        this->register_updater<pb_rm_interfaces::msg::GameStatus>(game_status_update_handler_);
        this->register_updater<pb_rm_interfaces::msg::RobotStatus>(robot_status_update_handler_);
    };

private:
    std::shared_ptr<HpUpdateHandler> hp_update_handler_;
    std::shared_ptr<GameStatusUpdateHandler> game_status_update_handler_;
    std::shared_ptr<RobotStatusUpdateHandler> robot_status_update_handler_;
};

#include "rclcpp_components/register_node_macro.hpp"
RCLCPP_COMPONENTS_REGISTER_NODE(StateUpdater);