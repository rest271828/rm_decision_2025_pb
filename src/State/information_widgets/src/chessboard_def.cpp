#include "information_widgets/chessboard_def.hpp"

using namespace RMDecision;

Chessboard::Chessboard(const iw_interfaces::msg::Chessboard& msg) : initialed(msg.initialed) {
    faction = static_cast<RMDecision::Faction>(msg.faction);
    timestamp = rclcpp::Time(msg.timestamp.sec, msg.timestamp.nanosec);
    robots = std::make_shared<std::unordered_map<std::string, std::shared_ptr<Robot>>>();
    terrains = std::make_shared<std::unordered_map<std::string, std::shared_ptr<Terrain>>>();
    architectures = std::make_shared<std::unordered_map<std::string, std::shared_ptr<Architecture>>>();

    for (const auto& robotMsg : msg.robots) {
        (*robots)[robotMsg.label] = std::make_shared<Robot>(robotMsg);
    }

    for (const auto& terrainMsg : msg.terrains) {
        (*terrains)[terrainMsg.label] = std::make_shared<Terrain>(terrainMsg);
    }

    for (const auto& architectureMsg : msg.architectures) {
        (*architectures)[architectureMsg.label] = std::make_shared<Architecture>(architectureMsg);
    }
    initialed = true;
}

std::shared_ptr<Robot> Chessboard::friend_robot(const uint& id) {
    assert(initialed && "Chessboard uninitialized ERROR");
    std::string label = (faction == RED ? "R" + std::to_string(id) : "B" + std::to_string(id));
    return (*robots)[label];
}

std::shared_ptr<Robot> Chessboard::enemy_robot(const uint& id) {
    assert(initialed && "Chessboard uninitialized ERROR");
    std::string label = (faction == RED ? "B" + std::to_string(id) : "R" + std::to_string(id));
    return (*robots)[label];
}

std::shared_ptr<Architecture> Chessboard::friend_outpost() {
    assert(initialed && "Chessboard uninitialized ERROR");
    if (faction == RED) {
        return (*architectures)["Red_Outpost"];
    } else {
        return (*architectures)["Blue_Outpost"];
    }
}

std::shared_ptr<Architecture> Chessboard::enemy_outpost() {
    assert(initialed && "Chessboard uninitialized ERROR");
    if (faction == BLUE) {
        return (*architectures)["Red_Outpost"];
    } else {
        return (*architectures)["Blue_Outpost"];
    }
}

std::shared_ptr<Architecture> Chessboard::friend_base() {
    assert(initialed && "Chessboard uninitialized ERROR");
    if (faction == RED) {
        return (*architectures)["Red_Base"];
    } else {
        return (*architectures)["Blue_Base"];
    }
}

std::shared_ptr<Architecture> Chessboard::enemy_base() {
    assert(initialed && "Chessboard uninitialized ERROR");
    if (faction == BLUE) {
        return (*architectures)["Red_Base"];
    } else {
        return (*architectures)["Blue_Base"];
    }
}

void Chessboard::update_from_message(const iw_interfaces::msg::Chessboard& msg) {
    assert(initialed && "Chessboard uninitialized ERROR");
    timestamp = rclcpp::Time(msg.timestamp.sec, msg.timestamp.nanosec);
    for (const auto& robotMsg : msg.robots) {
        auto& robot = (*robots)[robotMsg.label];
        robot->update_from_message(robotMsg);
    }

    for (const auto& architectureMsg : msg.architectures) {
        auto& architecture = (*architectures)[architectureMsg.label];
        architecture->update_from_message(architectureMsg);
    }
}

iw_interfaces::msg::Chessboard Chessboard::to_message() {
    auto msg = iw_interfaces::msg::Chessboard();
    msg.faction = faction;
    msg.initialed = initialed;
    msg.timestamp = timestamp;

    for (const auto& elem : *robots) {
        Robot& robot = *elem.second;
        auto robotMsg = robot.to_message();
        msg.robots.push_back(robotMsg);
    }

    for (const auto& elem : *terrains) {
        auto& terrain = *elem.second;
        auto terrainMsg = terrain.to_message();
        msg.terrains.push_back(terrainMsg);
    }

    for (const auto& elem : *architectures) {
        auto& architecture = *elem.second;
        auto architectureMsg = architecture.to_message();
        msg.architectures.push_back(architectureMsg);
    }
    return msg;
}
