#include <future>
#include <iostream>
#include <sstream>
#include <string>
#include <thread>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "test_taker_interfaces/msg/test_args.hpp"

class TestTaker : public rclcpp::Node {
public:
    TestTaker() : Node("test_taker") {
        test_pub_ = this->create_publisher<test_taker_interfaces::msg::TestArgs>("test_command", 10);
    }

    void set_input_param(const std::string& input) {
        std::istringstream iss(input);
        std::string instruction;
        iss >> instruction;
        std::vector<float> args;
        float num;
        while (iss >> num) {
            args.push_back(num);
        }
            
        RCLCPP_INFO(
            this->get_logger(), "Executing: %s", input.c_str());
        test_taker_interfaces::msg::TestArgs test_msg;
        test_msg.instruction = instruction;
        test_msg.args = args;
        test_pub_->publish(test_msg);
    }

private:
    rclcpp::Publisher<test_taker_interfaces::msg::TestArgs>::SharedPtr test_pub_;
};

void read_input(rclcpp::Node::SharedPtr node) {
    auto test_taker = std::dynamic_pointer_cast<TestTaker>(node);
    std::string input;
    while (rclcpp::ok()) {
        std::getline(std::cin, input);
        if (input == "quit") {
            RCLCPP_INFO(test_taker->get_logger(), "Parameter listening stopped, enter <Ctrl+C> to shutdown.");
            break;
        }
        if (!input.empty() && test_taker) {
            test_taker->set_input_param(input);
        }
    }
}

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TestTaker>();
    auto input_future = std::async(std::launch::async, read_input, node);
    rclcpp::spin(node);
    input_future.wait();
    rclcpp::shutdown();
    return 0;
}