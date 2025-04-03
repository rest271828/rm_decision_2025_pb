// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navigator_interfaces:msg/Navigate.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATOR_INTERFACES__MSG__DETAIL__NAVIGATE__BUILDER_HPP_
#define NAVIGATOR_INTERFACES__MSG__DETAIL__NAVIGATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navigator_interfaces/msg/detail/navigate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navigator_interfaces
{

namespace msg
{

namespace builder
{

class Init_Navigate_instant
{
public:
  explicit Init_Navigate_instant(::navigator_interfaces::msg::Navigate & msg)
  : msg_(msg)
  {}
  ::navigator_interfaces::msg::Navigate instant(::navigator_interfaces::msg::Navigate::_instant_type arg)
  {
    msg_.instant = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigator_interfaces::msg::Navigate msg_;
};

class Init_Navigate_pose
{
public:
  Init_Navigate_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_instant pose(::navigator_interfaces::msg::Navigate::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Navigate_instant(msg_);
  }

private:
  ::navigator_interfaces::msg::Navigate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigator_interfaces::msg::Navigate>()
{
  return navigator_interfaces::msg::builder::Init_Navigate_pose();
}

}  // namespace navigator_interfaces

#endif  // NAVIGATOR_INTERFACES__MSG__DETAIL__NAVIGATE__BUILDER_HPP_
