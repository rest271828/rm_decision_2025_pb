#include "pb_rm_interfaces/msg/game_robot_hp.hpp"
#include "pb_rm_interfaces/msg/game_status.hpp"
#include "state_base.hpp"

class HpUpdateHandler
    : public UpdateHandler<pb_rm_interfaces::msg::GameRobotHP> {
public:
    using UpdateHandler::UpdateHandler;

    std::string topic() {
        return "referee/all_robot_hp";
    }

    void update_chessboard(const pb_rm_interfaces::msg::GameRobotHP::SharedPtr msg) {
        (*chessboard_ptr_->robots)["R1"]->hp = msg->red_1_robot_hp;
        (*chessboard_ptr_->robots)["R2"]->hp = msg->red_2_robot_hp;
        (*chessboard_ptr_->robots)["R3"]->hp = msg->red_3_robot_hp;
        (*chessboard_ptr_->robots)["R4"]->hp = msg->red_4_robot_hp;
        (*chessboard_ptr_->robots)["R7"]->hp = msg->red_7_robot_hp;

        (*chessboard_ptr_->robots)["B1"]->hp = msg->blue_1_robot_hp;
        (*chessboard_ptr_->robots)["B2"]->hp = msg->blue_2_robot_hp;
        (*chessboard_ptr_->robots)["B3"]->hp = msg->blue_3_robot_hp;
        (*chessboard_ptr_->robots)["B4"]->hp = msg->blue_4_robot_hp;
        (*chessboard_ptr_->robots)["B7"]->hp = msg->blue_7_robot_hp;

        (*chessboard_ptr_->architectures)["Red_Outpost"]->hp = msg->red_outpost_hp;
        (*chessboard_ptr_->architectures)["Blue_Outpost"]->hp = msg->blue_outpost_hp;

        (*chessboard_ptr_->architectures)["Red_Base"]->hp = msg->red_base_hp;
        (*chessboard_ptr_->architectures)["Blue_Base"]->hp = msg->blue_base_hp;
    }

    void update_prism(const pb_rm_interfaces::msg::GameRobotHP::SharedPtr msg) {
        prism_ptr_->self->hp = chessboard_ptr_->friend_robot(prism_ptr_->self->id)->hp;
        prism_ptr_->track->hp = chessboard_ptr_->enemy_robot(prism_ptr_->track->id)->hp;
    }
};

class GameStatuUpdateHandler
    : public UpdateHandler<pb_rm_interfaces::msg::GameStatus> {
public:
    using UpdateHandler::UpdateHandler;

    std::string topic() {
        return "referee/game_status";
    }

    void update_chessboard(const pb_rm_interfaces::msg::GameStatus::SharedPtr msg) {
        return;
    }

    void update_prism(const pb_rm_interfaces::msg::GameStatus::SharedPtr msg) {
        prism_ptr_->game->game_start = (msg->game_progress == msg->RUNNING);
    }
};