// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_decision_interfaces:msg/ToSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__TO_SERIAL__BUILDER_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__TO_SERIAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_decision_interfaces/msg/detail/to_serial__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_decision_interfaces
{

namespace msg
{

namespace builder
{

class Init_ToSerial_diff_yaw
{
public:
  explicit Init_ToSerial_diff_yaw(::rm_decision_interfaces::msg::ToSerial & msg)
  : msg_(msg)
  {}
  ::rm_decision_interfaces::msg::ToSerial diff_yaw(::rm_decision_interfaces::msg::ToSerial::_diff_yaw_type arg)
  {
    msg_.diff_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ToSerial msg_;
};

class Init_ToSerial_shangpo
{
public:
  explicit Init_ToSerial_shangpo(::rm_decision_interfaces::msg::ToSerial & msg)
  : msg_(msg)
  {}
  Init_ToSerial_diff_yaw shangpo(::rm_decision_interfaces::msg::ToSerial::_shangpo_type arg)
  {
    msg_.shangpo = std::move(arg);
    return Init_ToSerial_diff_yaw(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ToSerial msg_;
};

class Init_ToSerial_sentry_cmd
{
public:
  Init_ToSerial_sentry_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToSerial_shangpo sentry_cmd(::rm_decision_interfaces::msg::ToSerial::_sentry_cmd_type arg)
  {
    msg_.sentry_cmd = std::move(arg);
    return Init_ToSerial_shangpo(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ToSerial msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_decision_interfaces::msg::ToSerial>()
{
  return rm_decision_interfaces::msg::builder::Init_ToSerial_sentry_cmd();
}

}  // namespace rm_decision_interfaces

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__TO_SERIAL__BUILDER_HPP_
