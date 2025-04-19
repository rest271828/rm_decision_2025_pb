#pragma once
#include "rclcpp/rclcpp.hpp"

template <typename T>
class PIDController {
public:
    PIDController(const double& KP, const double& KI, const double& KD)
    : KP_(KP), KI_(KI), KD_(KD), previous_error_{}, integral_{} {}

    void iterate(const T& error, const rclcpp::Time& currentTime) {
        double deltaTime = (currentTime - last_time_).seconds();
        last_time_ = currentTime;

        integral_ += error * deltaTime;
        T derivative = (error - previous_error_) / deltaTime;
        previous_error_ = error;

        return -(KP_ * error + KI_ * integral_ + KD_ * derivative);
    }

    void set_target(const T& target) {
        target_ = target;
    }

    void set_start_time(const rclcpp::Time& startTime) {
        start_time_ = startTime;
        last_time_ = startTime;
    }

private : 
    double KP_, KI_, KD_;
    rclcpp::Time start_time_;
    rclcpp::Time last_time_;
    T target_;
    T previous_error_;
    T integral_;
};