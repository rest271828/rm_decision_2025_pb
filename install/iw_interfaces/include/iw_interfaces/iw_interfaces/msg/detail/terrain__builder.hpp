// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iw_interfaces:msg/Terrain.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__TERRAIN__BUILDER_HPP_
#define IW_INTERFACES__MSG__DETAIL__TERRAIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iw_interfaces/msg/detail/terrain__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iw_interfaces
{

namespace msg
{

namespace builder
{

class Init_Terrain_vertices
{
public:
  explicit Init_Terrain_vertices(::iw_interfaces::msg::Terrain & msg)
  : msg_(msg)
  {}
  ::iw_interfaces::msg::Terrain vertices(::iw_interfaces::msg::Terrain::_vertices_type arg)
  {
    msg_.vertices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iw_interfaces::msg::Terrain msg_;
};

class Init_Terrain_type
{
public:
  explicit Init_Terrain_type(::iw_interfaces::msg::Terrain & msg)
  : msg_(msg)
  {}
  Init_Terrain_vertices type(::iw_interfaces::msg::Terrain::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Terrain_vertices(msg_);
  }

private:
  ::iw_interfaces::msg::Terrain msg_;
};

class Init_Terrain_label
{
public:
  Init_Terrain_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Terrain_type label(::iw_interfaces::msg::Terrain::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_Terrain_type(msg_);
  }

private:
  ::iw_interfaces::msg::Terrain msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iw_interfaces::msg::Terrain>()
{
  return iw_interfaces::msg::builder::Init_Terrain_label();
}

}  // namespace iw_interfaces

#endif  // IW_INTERFACES__MSG__DETAIL__TERRAIN__BUILDER_HPP_
