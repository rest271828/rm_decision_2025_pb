#pragma once

#include <behaviortree_cpp/action_node.h>
#include <behaviortree_cpp/bt_factory.h>

#include "decision_beta/decision_beta.hpp"

namespace RMDecision {

namespace detail {
template <typename T, typename U>
class RMBTNode : public T {
    static_assert(
        std::is_base_of<BT::TreeNode, T>::value,
        "RMBTNode class can only inherit from BT::TreeNode and its subclasses.");

public:
    RMBTNode(const std::string& name, std::shared_ptr<U> host, const BT::NodeConfig& config)
        : T(name, config), host_(host) {}

protected:
    std::shared_ptr<U> host_;
};
}  // namespace detail

namespace RMBT {
template <typename U>
using SyncActionNode = detail::RMBTNode<BT::SyncActionNode, U>;

template <typename U>
using StatefulActionNode = detail::RMBTNode<BT::StatefulActionNode, U>;

template <typename U>
using ConditionNode = detail::RMBTNode<BT::ConditionNode, U>;

class BehaviorTreeFactory : public BT::BehaviorTreeFactory {
public:
    template <typename T, typename U, typename... ExtraArgs>
    void registerNodeType(const std::string& ID, U* host,
                          const BT::PortsList& ports, ExtraArgs... args) {
        static_assert(std::is_base_of<SyncActionNode<U>, T>::value ||
                          std::is_base_of<StatefulActionNode<U>, T>::value ||
                          std::is_base_of<ConditionNode<U>, T>::value,
                      "[registerNode]: accepts only classed derived from either "
                      "RMBT::SyncActionNode, RMBT::StatefulActionNode or RMBT::ConditionNode, "
                      "or you should not provide the host.");

        constexpr bool default_constructable =
            std::is_constructible<T, const std::string&>::value;
        constexpr bool param_constructable =
            std::is_constructible<T, const std::string&, std::shared_ptr<U>, const BT::NodeConfig&, ExtraArgs...>::value;

        // clang-format off
        static_assert(!std::is_abstract<T>::value,
                    "[registerNode]: Some methods are pure virtual. "
                    "Did you override the methods tick() and halt()?");

        static_assert(default_constructable || param_constructable,
        "[registerNode]: the registered RMBTNode must have at least two of these three constructors:\n"
        "  (const std::string&, std::shared_ptr<T>, const NodeConfig&) or (const std::string&, , std::shared_ptr<T>)\n"
        "Check also if the constructor is public!)");
        // clang-format on

        registerBuilder(BT::CreateManifest<T>(ID, ports),
                        [host = std::shared_ptr<U>(host)](
                            const std::string& name, const BT::NodeConfig& config) {
                            return std::make_unique<T>(name, host, config);
                        });
    }

    template <typename T, typename U, typename... ExtraArgs>
    void registerNodeType(const std::string& ID,
                          U* host,
                          ExtraArgs... args) {
        if constexpr (std::is_abstract_v<T>) {
            // check first if the given class is abstract
            static_assert(!std::is_abstract_v<T>,
                          "The Node type can't be abstract. "
                          "Did you forget to implement an abstract "
                          "method in the derived class?");
        } else {
            constexpr bool param_constructable =
                std::is_constructible<T, const std::string&, std::shared_ptr<U>, const BT::NodeConfig&,
                                      ExtraArgs...>::value;
            constexpr bool has_static_ports_list = BT::has_static_method_providedPorts<T>::value;

            // clang-format off
            static_assert(!(param_constructable && !has_static_ports_list),
                            "[registerNode]: you MUST implement the static method:\n"
                            "  PortsList providedPorts();\n");

            static_assert(!(has_static_ports_list && !param_constructable),
                            "[registerNode]: since you have a static method providedPorts() in a RMBTNode,\n"
                            "you MUST add a constructor with signature:\n"
                            "(const std::string&, std::shared_ptr<T>, const NodeConfig&)\n");
            }
        // clang-format on

        registerNodeType<T, U>(ID, host, BT::getProvidedPorts<T>(), args...);
    }
};
}  // namespace RMBT

class DecisionBT : public DecisionBeta {
public:
    explicit DecisionBT(uint selfId, std::string nodeName, const rclcpp::NodeOptions& options);

    ~DecisionBT() override;

    void nav_to_point(const PlaneCoordinate& targetPoint) const;

    void nav_to_point_serially(const PlaneCoordinate& targetPoint) const;

    void move_to_point(const PlaneCoordinate& targetPoint) const;

    void rotate_to_angle(const double& targetAngle) const;

    void rotate_to_vec(const PlaneCoordinate& vec) const;

    PlaneCoordinate get_current_coordinate() const;

    double get_current_angle() const;

    void test_display(const char* format, ...) const;

protected:
    virtual void register_nodes(RMBT::BehaviorTreeFactory& factory);

    virtual std::string bt_file_path();

private:
    void bt_exec();

    void register_basic_nodes(RMBT::BehaviorTreeFactory& factory);

    std::thread bt_exec_thread_;
    BT::Tree tree_;
};

}  // namespace RMDecision

namespace BT {
template <>
inline RMDecision::PlaneCoordinate convertFromString(StringView str) {
    auto parts = splitString(str, ';');
    if (parts.size() != 2) {
        throw RuntimeError("invalid input)");
    } else {
        RMDecision::PlaneCoordinate output;
        output.x = convertFromString<double>(parts[0]);
        output.y = convertFromString<double>(parts[1]);
        return output;
    }
}
}  // namespace BT
