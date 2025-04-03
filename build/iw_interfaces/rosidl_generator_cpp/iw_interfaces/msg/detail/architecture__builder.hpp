// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iw_interfaces:msg/Architecture.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__ARCHITECTURE__BUILDER_HPP_
#define IW_INTERFACES__MSG__DETAIL__ARCHITECTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iw_interfaces/msg/detail/architecture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iw_interfaces
{

namespace msg
{

namespace builder
{

class Init_Architecture_faction
{
public:
  explicit Init_Architecture_faction(::iw_interfaces::msg::Architecture & msg)
  : msg_(msg)
  {}
  ::iw_interfaces::msg::Architecture faction(::iw_interfaces::msg::Architecture::_faction_type arg)
  {
    msg_.faction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iw_interfaces::msg::Architecture msg_;
};

class Init_Architecture_hp
{
public:
  explicit Init_Architecture_hp(::iw_interfaces::msg::Architecture & msg)
  : msg_(msg)
  {}
  Init_Architecture_faction hp(::iw_interfaces::msg::Architecture::_hp_type arg)
  {
    msg_.hp = std::move(arg);
    return Init_Architecture_faction(msg_);
  }

private:
  ::iw_interfaces::msg::Architecture msg_;
};

class Init_Architecture_vertices
{
public:
  explicit Init_Architecture_vertices(::iw_interfaces::msg::Architecture & msg)
  : msg_(msg)
  {}
  Init_Architecture_hp vertices(::iw_interfaces::msg::Architecture::_vertices_type arg)
  {
    msg_.vertices = std::move(arg);
    return Init_Architecture_hp(msg_);
  }

private:
  ::iw_interfaces::msg::Architecture msg_;
};

class Init_Architecture_label
{
public:
  Init_Architecture_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Architecture_vertices label(::iw_interfaces::msg::Architecture::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_Architecture_vertices(msg_);
  }

private:
  ::iw_interfaces::msg::Architecture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iw_interfaces::msg::Architecture>()
{
  return iw_interfaces::msg::builder::Init_Architecture_label();
}

}  // namespace iw_interfaces

#endif  // IW_INTERFACES__MSG__DETAIL__ARCHITECTURE__BUILDER_HPP_
