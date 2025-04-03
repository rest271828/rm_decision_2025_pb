#pragma once

#include <cassert>
#include <rclcpp/rclcpp.hpp>
#include <type_traits>

#include "information_widgets/chessboard_def.hpp"
#include "information_widgets/prism_def.hpp"

class SensingBase : public rclcpp::Node {
public:
    SensingBase(const rclcpp::NodeOptions& options);

private:
    RMDecision::ChessboardHandle chessboard_;
    RMDecision::Prism prism_;

    template <typename T1, typename T2>
    void init_map_declare(const std::unordered_map<std::string, T1>& src, std::unordered_map<std::string, std::shared_ptr<T2>>& dist, void (*conversion)(const T1&, T2&) = nullptr) {
        for (const auto& elem : src) {
            const std::string& label = elem.first;
            const T1& defaultData = elem.second;
            this->declare_parameter<T1>(label, defaultData);

            T1 tmpSrcData;
            T2 tmpDistData;
            this->get_parameter<T1>(label, tmpSrcData);

            if (conversion != nullptr) {
                conversion(tmpSrcData, tmpDistData);
            }

            dist[label] = std::make_shared<T2>(tmpDistData);
        }
    }

    template <typename T>
    void name_objects(std::unordered_map<std::string, std::shared_ptr<T>>& map) {
        static_assert(std::is_base_of<RMDecision::Object, T>::value, "T must be a descendant of Object.");
        for (auto& elem : map) {
            elem.second->label = elem.first;
        }
    }

    void init_chessboard(const RMDecision::Faction& faction);

    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr current_pose_sub_;

    rclcpp::Publisher<iw_interfaces::msg::Chessboard>::SharedPtr chessboard_pub_;
    rclcpp::Publisher<iw_interfaces::msg::Prism>::SharedPtr prism_pub_;

    rclcpp::CallbackGroup::SharedPtr callback_group_;

    rclcpp::TimerBase::SharedPtr timer_;

    void timer_callback();

    void current_pose_callback(const geometry_msgs::msg::PoseStamped::SharedPtr msg);
};