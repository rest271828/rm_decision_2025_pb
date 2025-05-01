#pragma once

#include <behaviortree_cpp/bt_factory.h>

#include "decision_beta/decision_beta.hpp"

namespace RMDecision {

class DecisionBT;

namespace detail {
template <typename T>
class RMBTNode : public T {
    static_assert(std::is_base_of_v<BT::TreeNode, T>, "T must inherit from BT::TreeNode");

public:
    RMBTNode(const std::string& name, const std::shared_ptr<DecisionBT> decisionNodeBT, const BT::NodeConfig& config)
        : T(name, config), decision_node_beta_(decisionNodeBT) {}

private:
    std::shared_ptr<DecisionBeta> decision_node_beta_;
};
}  // namespace detail

namespace RMBT {
using SyncActionNode = detail::RMBTNode<BT::SyncActionNode>;
using StatefulActionNode = detail::RMBTNode<BT::StatefulActionNode>;
using ConditionNode = detail::RMBTNode<BT::ConditionNode>;

class BehaviorTreeFactory : public BT::BehaviorTreeFactory {
public:
    template <typename T, typename... ExtraArgs>
    void registerNodeType(const std::string& ID, const std::shared_ptr<DecisionBT> decisionNodeBT,
                          const BT::PortsList& ports, ExtraArgs... args) {
        static_assert(std::is_base_of<RMBT::SyncActionNode, T>::value ||
                          std::is_base_of<RMBT::StatefulActionNode, T>::value ||
                          std::is_base_of<RMBT::ConditionNode, T>::value,
                      "[registerNode]: accepts only classed derived from either "
                      "RMBT::SyncActionNode, "
                      "RMBT::StatefulActionNode or RMBT::ConditionNode, "
                      "or you should not provide the decisionNodeBT.");

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
                        [decisionNodeBT = std::shared_ptr<DecisionBT>(decisionNodeBT)](
                            const string& name, const BT::NodeConfig& config) {
                            return std::make_unique<T>(name, decisionNodeBT, config);
                        });
    }

    template <typename T, typename... ExtraArgs>
    void registerNodeType(const std::string& ID,
                          const std::shared_ptr<DecisionBT> decisionNodeBT,
                          ExtraArgs... args) {
        if constexpr (std::is_abstract_v<T>) {
            // check first if the given class is abstract
            static_assert(!std::is_abstract_v<T>,
                          "The Node type can't be abstract. "
                          "Did you forget to implement an abstract "
                          "method in the derived class?");
        } else {
            constexpr bool param_constructable =
                std::is_constructible<T, const std::string&, const std::shared_ptr<DecisionBT>, const NodeConfig&,
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

        registerNodeType<T>(ID, decisionNodeBT, getProvidedPorts<T>(), args...);
    }
};
}  // namespace RMBT

class NavToPoint : public RMBT::SyncActionNode {
public:
    NavToPoint(const std::string& name,
               const std::shared_ptr<DecisionBT> decisionNodeBT,
               const BT::NodeConfig& config)
        : RMBT::SyncActionNode(name, decisionNodeBT, config) {}

    BT::NodeStatus tick() override;
};

class DecisionBT : public DecisionBeta {
public:
    using DecisionBase::DecisionBase;

    void nav_to_point(const PlaneCoordinate& targetPoint) const;

    void nav_to_point_serially(const PlaneCoordinate& targetPoint) const;

    void move_to_point(const PlaneCoordinate& targetPoint) const;

    void rotate_to_angle(const double& targetAngle) const;

    void rotate_to_vec(const PlaneCoordinate& targetPoint) const;

    void get_current_coordinate() const;

    void get_current_angle() const;

protected:
    void register_rmbt_node(const RMBT::BehaviorTreeFactory& factory) const;

private:
    virtual void register_nodes() const;
};

}  // namespace RMDecision