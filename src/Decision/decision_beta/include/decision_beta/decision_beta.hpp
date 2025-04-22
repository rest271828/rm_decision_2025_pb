#pragma once

#include "decision_base/decision_base.hpp"

namespace RMDecision{
class DecisionBeta : public DecisionBase {
public:
    using DecisionBase::DecisionBase;

protected:
    void nav_to_point_serially(const double& x, const double& y) const;

    void nav_to_point_serially(const PlaneCoordinate& targetPoint) const;

    void move_to_point(const PlaneCoordinate& targetPoint) const;

    void rotate_to_vec(const PlaneCoordinate& vec) const;

    void rotate_to_angle(const double& targetAngle) const;
};

} // namespace RMDecision