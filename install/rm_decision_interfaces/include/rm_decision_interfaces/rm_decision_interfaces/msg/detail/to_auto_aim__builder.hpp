// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_decision_interfaces:msg/ToAutoAim.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__TO_AUTO_AIM__BUILDER_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__TO_AUTO_AIM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_decision_interfaces/msg/detail/to_auto_aim__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_decision_interfaces
{

namespace msg
{

namespace builder
{

class Init_ToAutoAim_target
{
public:
  Init_ToAutoAim_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rm_decision_interfaces::msg::ToAutoAim target(::rm_decision_interfaces::msg::ToAutoAim::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ToAutoAim msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_decision_interfaces::msg::ToAutoAim>()
{
  return rm_decision_interfaces::msg::builder::Init_ToAutoAim_target();
}

}  // namespace rm_decision_interfaces

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__TO_AUTO_AIM__BUILDER_HPP_
