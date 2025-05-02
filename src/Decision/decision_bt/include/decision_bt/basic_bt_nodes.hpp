#include "decision_bt/decision_bt.hpp"

namespace RMDecision {

class NavToPoint : public RMBT::SyncActionNode<DecisionBT> {
public:
    NavToPoint(const std::string& name,
               std::shared_ptr<DecisionBT> decisionNodeBT,
               const BT::NodeConfig& config)
        : RMBT::SyncActionNode<DecisionBT>(name, decisionNodeBT, config) {}

    static BT::PortsList providedPorts() {
        return {BT::InputPort<PlaneCoordinate>("targetPoint")};
    }

    BT::NodeStatus tick() override {
        BT::Expected<PlaneCoordinate> point = getInput<PlaneCoordinate>("targetPoint");
        if (!point) {
            throw BT::RuntimeError("missing required input [targetPoint]: ", point.error());
        }
        host_->test_display("[ NavToPoint: TRIGGERED ]\n");
        host_->nav_to_point(point.value());
        return BT::NodeStatus::SUCCESS;
    }
};

class NavToPointSerially : public RMBT::SyncActionNode<DecisionBT> {
public:
    NavToPointSerially(const std::string& name,
                       std::shared_ptr<DecisionBT> decisionNodeBT,
                       const BT::NodeConfig& config)
        : RMBT::SyncActionNode<DecisionBT>(name, decisionNodeBT, config) {}

    static BT::PortsList providedPorts() {
        return {BT::InputPort<PlaneCoordinate>("targetPoint")};
    }

    BT::NodeStatus tick() override {
        BT::Expected<PlaneCoordinate> point = getInput<PlaneCoordinate>("targetPoint");
        if (!point) {
            throw BT::RuntimeError("missing required input [targetPoint]: ", point.error());
        }
        host_->test_display("[ NavToPointSerially: TRIGGERED ]\n");
        host_->nav_to_point_serially(point.value());
        return BT::NodeStatus::SUCCESS;
    }
};

class MoveToPoint : public RMBT::SyncActionNode<DecisionBT> {
public:
    MoveToPoint(const std::string& name,
                std::shared_ptr<DecisionBT> decisionNodeBT,
                const BT::NodeConfig& config)
        : RMBT::SyncActionNode<DecisionBT>(name, decisionNodeBT, config) {}

    static BT::PortsList providedPorts() {
        return {BT::InputPort<PlaneCoordinate>("targetPoint")};
    }

    BT::NodeStatus tick() override {
        BT::Expected<PlaneCoordinate> point = getInput<PlaneCoordinate>("targetPoint");
        if (!point) {
            throw BT::RuntimeError("missing required input [targetPoint]: ", point.error());
        }
        host_->test_display("[ MoveToPoint: TRIGGERED ]\n");
        host_->move_to_point(point.value());
        return BT::NodeStatus::SUCCESS;
    }
};

class RotateToAngle : public RMBT::SyncActionNode<DecisionBT> {
public:
    RotateToAngle(const std::string& name,
                  std::shared_ptr<DecisionBT> decisionNodeBT,
                  const BT::NodeConfig& config)
        : RMBT::SyncActionNode<DecisionBT>(name, decisionNodeBT, config) {}

    static BT::PortsList providedPorts() {
        return {BT::InputPort<double>("targetAngle")};
    }

    BT::NodeStatus tick() override {
        BT::Expected<double> angle = getInput<double>("targetAngle");
        if (!angle) {
            throw BT::RuntimeError("missing required input [targetAngle]: ", angle.error());
        }
        host_->test_display("[ RotateToAngle: TRIGGERED ]\n");
        host_->rotate_to_angle(angle.value());
        return BT::NodeStatus::SUCCESS;
    }
};

class RotateToVec : public RMBT::SyncActionNode<DecisionBT> {
public:
    RotateToVec(const std::string& name,
                std::shared_ptr<DecisionBT> decisionNodeBT,
                const BT::NodeConfig& config)
        : RMBT::SyncActionNode<DecisionBT>(name, decisionNodeBT, config) {}

    static BT::PortsList providedPorts() {
        return {BT::InputPort<PlaneCoordinate>("targetVec")};
    }

    BT::NodeStatus tick() override {
        BT::Expected<PlaneCoordinate> vec = getInput<PlaneCoordinate>("targetVec");
        if (!vec) {
            throw BT::RuntimeError("missing required input [targetVec]: ", vec.error());
        }
        host_->test_display("[ RotateToVec: TRIGGERED ]\n");
        host_->rotate_to_vec(vec.value());
        return BT::NodeStatus::SUCCESS;
    }
};

class PointAchieved : public RMBT::ConditionNode<DecisionBT> {
public:
    PointAchieved(const std::string& name,
                  std::shared_ptr<DecisionBT> decisionNodeBT,
                  const BT::NodeConfig& config)
        : RMBT::ConditionNode<DecisionBT>(name, decisionNodeBT, config) {}

    static BT::PortsList providedPorts() {
        return {BT::InputPort<PlaneCoordinate>("targetPoint")};
    }

    BT::NodeStatus tick() override {
        BT::Expected<PlaneCoordinate> point = getInput<PlaneCoordinate>("targetPoint");
        if (!point) {
            throw BT::RuntimeError("missing required input [targetPoint]: ", point.error());
        }
        if (host_->get_current_coordinate().coincide_with(point.value(), 0.05)) {
            host_->test_display("[ PointAchieved: (%.3f, %.3f) | TRUE ]\n", point.value().x, point.value().y);
            return BT::NodeStatus::SUCCESS;
        } else {
            host_->test_display("[ PointAchieved: (%.3f, %.3f) | FALSE ]\n", point.value().x, point.value().y);
            return BT::NodeStatus::FAILURE;
        }
    }
};

class AngleAchieved : public RMBT::ConditionNode<DecisionBT> {
public:
    AngleAchieved(const std::string& name,
                  std::shared_ptr<DecisionBT> decisionNodeBT,
                  const BT::NodeConfig& config)
        : RMBT::ConditionNode<DecisionBT>(name, decisionNodeBT, config) {}

    static BT::PortsList providedPorts() {
        return {BT::InputPort<double>("targetAngle")};
    }

    BT::NodeStatus tick() override {
        BT::Expected<double> angle = getInput<double>("targetAngle");
        if (!angle) {
            throw BT::RuntimeError("missing required input [targetAngle]: ", angle.error());
        }
        if (std::abs(host_->get_current_angle() - angle.value()) < 0.01) {
            host_->test_display("[ AngleAchieved: %.3f | TRUE ]\n", angle.value());
            return BT::NodeStatus::SUCCESS;
        } else {
            host_->test_display("[ AngleAchieved: %.3f | FALSE ]\n", angle.value());
            return BT::NodeStatus::FAILURE;
        }
    }
};

}  // namespace RMDecision