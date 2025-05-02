#pragma once
#include "rclcpp/rclcpp.hpp"
#include "scan_record/scan_record.hpp"
#include "std_msgs/msg/bool.hpp"

class Calibrator {
public:
    explicit Calibrator(const rclcpp::NodeOptions& options);

private:
    void calibrate() const;

    void scan_record_init();

    void cal_start_callback(const std_msgs::msg::Bool::SharedPtr msg) const;

    rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr cal_start_sub_;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr cal_finish_pub_;
    // std::vector<ScanRecord>
};