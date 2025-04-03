// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_decision_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_decision_interfaces/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_decision_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_ammo_buy
{
public:
  explicit Init_RobotStatus_ammo_buy(::rm_decision_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::rm_decision_interfaces::msg::RobotStatus ammo_buy(::rm_decision_interfaces::msg::RobotStatus::_ammo_buy_type arg)
  {
    msg_.ammo_buy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_decision_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_shooter_heat
{
public:
  explicit Init_RobotStatus_shooter_heat(::rm_decision_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_ammo_buy shooter_heat(::rm_decision_interfaces::msg::RobotStatus::_shooter_heat_type arg)
  {
    msg_.shooter_heat = std::move(arg);
    return Init_RobotStatus_ammo_buy(msg_);
  }

private:
  ::rm_decision_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_current_hp
{
public:
  explicit Init_RobotStatus_current_hp(::rm_decision_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_shooter_heat current_hp(::rm_decision_interfaces::msg::RobotStatus::_current_hp_type arg)
  {
    msg_.current_hp = std::move(arg);
    return Init_RobotStatus_shooter_heat(msg_);
  }

private:
  ::rm_decision_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_robot_id
{
public:
  Init_RobotStatus_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_current_hp robot_id(::rm_decision_interfaces::msg::RobotStatus::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotStatus_current_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_decision_interfaces::msg::RobotStatus>()
{
  return rm_decision_interfaces::msg::builder::Init_RobotStatus_robot_id();
}

}  // namespace rm_decision_interfaces

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
