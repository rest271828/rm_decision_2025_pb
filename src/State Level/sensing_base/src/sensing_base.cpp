#include "sensing_base/sensing_base.hpp"

SensingBase::SensingBase(const rclcpp::NodeOptions& options) : Node("observe_unit", options), chessboard_(RMDecision::Faction::UNKNOWN) {
    std::string faction_str;
    this->declare_parameter<std::string>("faction");

    if (!this->get_parameter("faction", faction_str)) {
        RCLCPP_FATAL(this->get_logger(), "Faction is not defined. SensingBase will shut down.");
        rclcpp::shutdown();
        return;
    }

    RMDecision::Faction faction;
    if (faction_str == "RED" || faction_str == "Red" || faction_str == "R" || faction_str == "red" || faction_str == "1") {
        faction = RMDecision::Faction::RED;
    } else if (faction_str == "BLUE" || faction_str == "Blue" || faction_str == "B" || faction_str == "blue" || faction_str == "2") {
        faction = RMDecision::Faction::BLUE;
    } else {
        faction = RMDecision::Faction::UNKNOWN;
    }
    init_chessboard(faction);

    callback_group_ = this->create_callback_group(rclcpp::CallbackGroupType::Reentrant);
    auto subOpt = rclcpp::SubscriptionOptions();
    auto pubOpt = rclcpp::PublisherOptions();
    subOpt.callback_group = callback_group_;
    pubOpt.callback_group = callback_group_;

    current_pose_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>(
        "/navigator/current_pose", 10, std::bind(&SensingBase::current_pose_callback, this, std::placeholders::_1), subOpt);

    chessboard_pub_ = this->create_publisher<iw_interfaces::msg::Chessboard>("rm_decision/chessboard", 10, pubOpt);
    std::string prismPubTopicName = "rm_decision/prism/" + std::to_string(prism_.self.id);
    prism_pub_ = this->create_publisher<iw_interfaces::msg::Prism>(prismPubTopicName.c_str(), 10, pubOpt);

    timer_ = this->create_wall_timer(std::chrono::milliseconds(100), std::bind(&SensingBase::timer_callback, this), callback_group_);
}

void SensingBase::init_chessboard(const RMDecision::Faction& faction) {
    chessboard_.faction = faction;
    for (const auto& elem : RMDecision::DefaultInfo::robots) {
        (*chessboard_.robots)[elem.first] = std::make_shared<RMDecision::Robot>(elem.second);
    }
    init_map_declare<std::vector<double>, RMDecision::Terrain>(
        RMDecision::DefaultInfo::terrains, *chessboard_.terrains, RMDecision::Terrain::array_to_terrain);
    init_map_declare<std::vector<double>, RMDecision::Architecture>(
        RMDecision::DefaultInfo::architecture, *chessboard_.architectures, RMDecision::Architecture::array_to_architecture);

    name_objects<RMDecision::Robot>(*chessboard_.robots);
    name_objects<RMDecision::Terrain>(*chessboard_.terrains);
    name_objects<RMDecision::Architecture>(*chessboard_.architectures);
    if (chessboard_.faction != RMDecision::Faction::UNKNOWN) {
        chessboard_.initialed = true;
    }
}

void SensingBase::timer_callback() {
    chessboard_pub_->publish(chessboard_.to_message());
    prism_pub_->publish(prism_.to_message());
}

void SensingBase::current_pose_callback(const geometry_msgs::msg::PoseStamped::SharedPtr msg) {
    prism_.self.pose = *msg;
    chessboard_.friend_robot(prism_.self.id)->pose = *msg;
    chessboard_.timestamp = this->now();
}
