#pragma once

#include <chrono>
#include <future>
#include <string>
#include <unordered_map>
#include <vector>

#include "geometry_msgs/msg/point_stamped.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "iw_interfaces/msg/prism.hpp"
#include "rm_decision_defs.hpp"

namespace RMDecision {
class Self {
public:
    uint id;
    uint hp;
    uint ammo;
    uint shooter_heat;
    PoseStamped pose;
    bool energy_buff;
};

class Track {
public:
    bool tracking;
    uint id;
    uint hp;
    PoseStamped pose;
};

class Game {
public:
    bool game_start;
    bool buy_ammo_ordered;
    // uint patrol; 不确定受到的是裁判系统传入的还是可以存在自定义
    uint coins;
    uint projectile_allowance;
};

class Call {
public:
    PlaneCoordinate target;
    bool is_called;
};

class Prism {
public:
    Prism();
    Prism(const iw_interfaces::msg::Prism& msg);

    std::unordered_map<std::string, double> parameters;
    
    std::shared_ptr<Self> self;
    std::shared_ptr<Track> track;
    std::shared_ptr<Game> game;
    std::shared_ptr<Call> call;

    void update_from_message(const iw_interfaces::msg::Prism& msg);

    iw_interfaces::msg::Prism to_message();
};
}  // namespace RMDecision
