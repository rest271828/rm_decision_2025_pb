// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iw_interfaces:msg/Area.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__AREA__BUILDER_HPP_
#define IW_INTERFACES__MSG__DETAIL__AREA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iw_interfaces/msg/detail/area__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iw_interfaces
{

namespace msg
{

namespace builder
{

class Init_Area_vertices
{
public:
  explicit Init_Area_vertices(::iw_interfaces::msg::Area & msg)
  : msg_(msg)
  {}
  ::iw_interfaces::msg::Area vertices(::iw_interfaces::msg::Area::_vertices_type arg)
  {
    msg_.vertices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iw_interfaces::msg::Area msg_;
};

class Init_Area_label
{
public:
  Init_Area_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Area_vertices label(::iw_interfaces::msg::Area::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_Area_vertices(msg_);
  }

private:
  ::iw_interfaces::msg::Area msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iw_interfaces::msg::Area>()
{
  return iw_interfaces::msg::builder::Init_Area_label();
}

}  // namespace iw_interfaces

#endif  // IW_INTERFACES__MSG__DETAIL__AREA__BUILDER_HPP_
