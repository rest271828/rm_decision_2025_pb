#include <filesystem>
#include <fstream>
#include <future>
#include <iomanip>
#include <iostream>
#include <string>
#include <thread>

#include "geometry_msgs/msg/pose_stamped.hpp"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "scan_record/scan_record.hpp"


class CoordinateMarker : public rclcpp::Node {
public:
    CoordinateMarker() : Node("coordinate_marker") {
        pose_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>(
            "navigator/current_pose", 10, std::bind(&CoordinateMarker::pose_callback, this, std::placeholders::_1));
        scan_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
            "scan", 10, std::bind(&CoordinateMarker::scan_callback, this, std::placeholders::_1));

        log_folder_path_ = "./coordinate_marks";
        if (!std::filesystem::exists(log_folder_path_)) {
            std::filesystem::create_directory(log_folder_path_);
        }

        scan_folder_path_ = log_folder_path_ + "/scans";
        if (!std::filesystem::exists(scan_folder_path_)) {
            std::filesystem::create_directory(scan_folder_path_);
        }
        log_file_path_ = log_folder_path_ + "/marks.txt";

        auto now = std::chrono::system_clock::now();
        auto now_c = std::chrono::system_clock::to_time_t(now);
        char buffer[80];
        std::strftime(buffer, sizeof(buffer), "%Y-%m-%d-%H:%M:%S", std::localtime(&now_c));
        log_time_ = buffer;

        log_file_.open(log_file_path_, std::ios::app);
        if (log_file_.is_open()) {
            log_file_ << "[" << log_time_ << "]" << std::endl;
            log_file_.close();
        } else {
            RCLCPP_ERROR(this->get_logger(), "Failed to open file: %s", log_file_path_.c_str());
        }
    }

    void log(const std::string& label) {
        std::ostringstream coordinate_ss;
        coordinate_ss << "(" << std::fixed << std::setprecision(3)
               << current_coordinate_.x << ", " << current_coordinate_.y << ") "
               << "<" << current_coordinate_.yaw << ">" << std::endl;

        log_file_.open(log_file_path_, std::ios::app);
        if (log_file_.is_open()) {
            log_file_ << label << ": " << coordinate_ss.str();
            log_file_.close();
            RCLCPP_INFO(this->get_logger(), "Coordinate marked: (%.3f, %.3f)", current_coordinate_.x, current_coordinate_.y);
        } else {
            RCLCPP_ERROR(this->get_logger(), "Failed to open file: %s", log_file_path_.c_str());
        }

        std::ostringstream filepath;
        filepath << scan_folder_path_ << "/scan-" << label << "_" << coordinate_ss.str() << ".rcs";
        std::ofstream file(filepath.str(), std::ios::binary);
        if (!file) {
            RCLCPP_ERROR(get_logger(), "Failed to open file: %s", filepath.str().c_str());
            return;
        }

        ScanRecord record;
        record.coordinate.x = current_coordinate_.x;
        record.coordinate.y = current_coordinate_.y;
        record.coordinate.yaw = current_coordinate_.yaw;
        record.ranges = scan_ranges_;
        record.save_to(filepath.str());
    }

private:
    void pose_callback(const geometry_msgs::msg::PoseStamped::SharedPtr msg) {
        current_coordinate_.x = msg->pose.position.x;
        current_coordinate_.y = msg->pose.position.y;

        double w = msg->pose.orientation.w;
        double x = msg->pose.orientation.x;
        double y = msg->pose.orientation.y;
        double z = msg->pose.orientation.z;

        current_coordinate_.yaw = std::atan2(2 * (w * z + x * y), 1 - 2 * (x * x + z * z));
    }

    void scan_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg) {
        scan_ranges_ = msg->ranges;
    }

    std::string double_to_string(double value, int precision) {
        std::ostringstream stream;
        stream << std::fixed << std::setprecision(precision) << value;
        return stream.str();
    }

    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_sub_;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scan_sub_;

    std::string log_folder_path_;
    std::string log_file_path_;
    std::string scan_folder_path_;
    std::ofstream log_file_;
    std::string log_time_;
    struct Coordinate {
        double x;
        double y;
        double yaw;
    } current_coordinate_;
    std::vector<float> scan_ranges_;
};

void read_input(rclcpp::Node::SharedPtr node) {
    auto coordinate_marker = std::dynamic_pointer_cast<CoordinateMarker>(node);
    std::string input;
    while (rclcpp::ok()) {
        std::getline(std::cin, input);
        if (input == "quit") {
            RCLCPP_INFO(coordinate_marker->get_logger(), "Coordinate marking stopped, enter <Ctrl+C> to shutdown.");
            break;
        }
        if (!input.empty() && coordinate_marker) {
            coordinate_marker->log(input);
        }
    }
}

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<CoordinateMarker>();
    auto input_future = std::async(std::launch::async, read_input, node);
    rclcpp::spin(node);
    input_future.wait();
    rclcpp::shutdown();
    return 0;
}