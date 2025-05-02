#pragma once

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
    RMBTNode(const std::string& name, const std::shared_ptr<U> host, const BT::NodeConfig& config)
        : T(name, config), host_(host) {}

private:
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
    void registerNodeType(const std::string& ID, const U* host,
                          const BT::PortsList& ports, ExtraArgs... args) {
        static_assert(std::is_base_of<RMBT::SyncActionNode, T>::value ||
                          std::is_base_of<RMBT::StatefulActionNode, T>::value ||
                          std::is_base_of<RMBT::ConditionNode, T>::value,
                      "[registerNode]: accepts only classed derived from either "
                      "RMBT::SyncActionNode, RMBT::StatefulActionNode or RMBT::ConditionNode, "
                      "or you should not provide the host.");

        constexpr bool default_constructable =
            std::is_constructible<T, const std::string&>::value;
        constexpr bool param_constructable =
            std::is_constructible<T, const std::string&, const NodeConfig&, ExtraArgs...>::value;

        // clang-format off
        static_assert(!std::is_abstract<T>::value,
                    "[registerNode]: Some methods are pure virtual. "
                    "Did you override the methods tick() and halt()?");

        static_assert(default_constructable || param_constructable,
        "[registerNode]: the registered class must have at least one of these two constructors:\n"
        "  (const std::string&, const NodeConfig&) or (const std::string&)\n"
        "Check also if the constructor is public!)");
        // clang-format on

        registerBuilder(CreateManifest<T>(ID, ports),
                        [host = std::shared_ptr<U>(host)](
                            const string& name, const BT::NodeConfig& config) {
                            return std::make_unique<T>(name, host, config);
                        });
    }

    template <typename T, typename U, typename... ExtraArgs>
    void registerNodeType(const std::string& ID,
                          const U* host,
                          ExtraArgs... args) {
        if constexpr (std::is_abstract_v<T>) {
            // check first if the given class is abstract
            static_assert(!std::is_abstract_v<T>,
                          "The Node type can't be abstract. "
                          "Did you forget to implement an abstract "
                          "method in the derived class?");
        } else {
            constexpr bool param_constructable =
                std::is_constructible<T, const std::string&, const std::shared_ptr<U>, const NodeConfig&,
                                      ExtraArgs...>::value;
            constexpr bool has_static_ports_list = has_static_method_providedPorts<T>::value;

            // clang-format off
            static_assert(!(param_constructable && !has_static_ports_list),
                            "[registerNode]: you MUST implement the static method:\n"
                            "  PortsList providedPorts();\n");

            static_assert(!(has_static_ports_list && !param_constructable),
                            "[registerNode]: since you have a static method providedPorts(),\n"
                            "you MUST add a constructor with signature:\n"
                            "(const std::string&, const NodeConfig&)\n");
            }
        // clang-format on

        registerNodeType<T, U>(ID, host, getProvidedPorts<T>(), args...);
    }
};
}  // namespace RMBT

class DecisionBT;

class NavToPoint : public RMBT::SyncActionNode<DecisionBT> {
public:
    NavToPoint(const std::string& name,
               const std::shared_ptr<DecisionBT> decisionNodeBT,
               const BT::NodeConfig& config)
        : RMBT::SyncActionNode<DecisionBT>(name, decisionNodeBT, config) {}

    BT::NodeStatus tick() override;
};

class DecisionBT : public DecisionBeta {
public:
    explicit DecisionBT(uint selfId, std::string nodeName, const rclcpp::NodeOptions& options);

    void nav_to_point(const PlaneCoordinate& targetPoint) const;

    void nav_to_point_serially(const PlaneCoordinate& targetPoint) const;

    void move_to_point(const PlaneCoordinate& targetPoint) const;

    void rotate_to_angle(const double& targetAngle) const;

    void rotate_to_vec(const PlaneCoordinate& vec) const;

    PlaneCoordinate get_current_coordinate() const;

    double get_current_angle() const;

protected:
    virtual void register_nodes(const RMBT::BehaviorTreeFactory& factory) const;

private:
    void bt_exec();

    void register_basic_nodes(const RMBT::BehaviorTreeFactory& factory) const;

    rclcpp::TimerBase::SharedPtr bt_exec_timer_;
};

}  // namespace RMDecision