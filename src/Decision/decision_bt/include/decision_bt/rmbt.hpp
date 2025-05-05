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
    RMBTNode(const std::string& name, U* host, const BT::NodeConfig& config)
        : T(name, config), host_(host) {}

protected:
    U* host_;
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
            std::is_constructible<T, const std::string&, U*>::value;
        constexpr bool param_constructable =
            std::is_constructible<T, const std::string&, U*, const BT::NodeConfig&, ExtraArgs...>::value;

        // clang-format off
        static_assert(!std::is_abstract<T>::value,
                    "[registerNode]: Some methods are pure virtual. "
                    "Did you override the methods tick() and halt()?");

        static_assert(default_constructable || param_constructable,
        "[registerNode]: the registered RMBTNode must have at least two of these three constructors:\n"
        "  (const std::string&, T*, const NodeConfig&) or (const std::string&, std::T*)\n"
        "Check also if the constructor is public!)");
        // clang-format on

        registerBuilder(BT::CreateManifest<T>(ID, ports),
                        [=](
                            const std::string& name, const BT::NodeConfig& config) {
                            if constexpr (param_constructable) {
                                return std::make_unique<T>(name, host, config, args...);
                            } else if constexpr (default_constructable) {
                                return std::make_unique<T>(name, host, args...);
                            }
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
                std::is_constructible<T, const std::string&, U*, const BT::NodeConfig&,
                                      ExtraArgs...>::value;
            constexpr bool has_static_ports_list = BT::has_static_method_providedPorts<T>::value;

            // clang-format off
            static_assert(!(param_constructable && !has_static_ports_list),
                            "[registerNode]: you MUST implement the static method:\n"
                            "  PortsList providedPorts();\n");

            static_assert(!(has_static_ports_list && !param_constructable),
                            "[registerNode]: since you have a static method providedPorts() in a RMBTNode,\n"
                            "you MUST add a constructor with signature:\n"
                            "(const std::string&, T*, const NodeConfig&)\n");
            }
        // clang-format on

        registerNodeType<T, U>(ID, host, BT::getProvidedPorts<T>(), args...);
    }
};
}  // namespace RMBT
}  // namespace RMDecision
