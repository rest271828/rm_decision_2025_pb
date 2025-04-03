// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iw_interfaces:msg/PlaneCoordinate.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__PLANE_COORDINATE__BUILDER_HPP_
#define IW_INTERFACES__MSG__DETAIL__PLANE_COORDINATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iw_interfaces/msg/detail/plane_coordinate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iw_interfaces
{

namespace msg
{

namespace builder
{

class Init_PlaneCoordinate_y
{
public:
  explicit Init_PlaneCoordinate_y(::iw_interfaces::msg::PlaneCoordinate & msg)
  : msg_(msg)
  {}
  ::iw_interfaces::msg::PlaneCoordinate y(::iw_interfaces::msg::PlaneCoordinate::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iw_interfaces::msg::PlaneCoordinate msg_;
};

class Init_PlaneCoordinate_x
{
public:
  Init_PlaneCoordinate_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaneCoordinate_y x(::iw_interfaces::msg::PlaneCoordinate::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PlaneCoordinate_y(msg_);
  }

private:
  ::iw_interfaces::msg::PlaneCoordinate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iw_interfaces::msg::PlaneCoordinate>()
{
  return iw_interfaces::msg::builder::Init_PlaneCoordinate_x();
}

}  // namespace iw_interfaces

#endif  // IW_INTERFACES__MSG__DETAIL__PLANE_COORDINATE__BUILDER_HPP_
