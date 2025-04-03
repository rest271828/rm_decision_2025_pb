// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iw_interfaces:msg/Chessboard.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__CHESSBOARD__BUILDER_HPP_
#define IW_INTERFACES__MSG__DETAIL__CHESSBOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iw_interfaces/msg/detail/chessboard__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iw_interfaces
{

namespace msg
{

namespace builder
{

class Init_Chessboard_architectures
{
public:
  explicit Init_Chessboard_architectures(::iw_interfaces::msg::Chessboard & msg)
  : msg_(msg)
  {}
  ::iw_interfaces::msg::Chessboard architectures(::iw_interfaces::msg::Chessboard::_architectures_type arg)
  {
    msg_.architectures = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iw_interfaces::msg::Chessboard msg_;
};

class Init_Chessboard_terrains
{
public:
  explicit Init_Chessboard_terrains(::iw_interfaces::msg::Chessboard & msg)
  : msg_(msg)
  {}
  Init_Chessboard_architectures terrains(::iw_interfaces::msg::Chessboard::_terrains_type arg)
  {
    msg_.terrains = std::move(arg);
    return Init_Chessboard_architectures(msg_);
  }

private:
  ::iw_interfaces::msg::Chessboard msg_;
};

class Init_Chessboard_robots
{
public:
  explicit Init_Chessboard_robots(::iw_interfaces::msg::Chessboard & msg)
  : msg_(msg)
  {}
  Init_Chessboard_terrains robots(::iw_interfaces::msg::Chessboard::_robots_type arg)
  {
    msg_.robots = std::move(arg);
    return Init_Chessboard_terrains(msg_);
  }

private:
  ::iw_interfaces::msg::Chessboard msg_;
};

class Init_Chessboard_timestamp
{
public:
  explicit Init_Chessboard_timestamp(::iw_interfaces::msg::Chessboard & msg)
  : msg_(msg)
  {}
  Init_Chessboard_robots timestamp(::iw_interfaces::msg::Chessboard::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Chessboard_robots(msg_);
  }

private:
  ::iw_interfaces::msg::Chessboard msg_;
};

class Init_Chessboard_initialed
{
public:
  explicit Init_Chessboard_initialed(::iw_interfaces::msg::Chessboard & msg)
  : msg_(msg)
  {}
  Init_Chessboard_timestamp initialed(::iw_interfaces::msg::Chessboard::_initialed_type arg)
  {
    msg_.initialed = std::move(arg);
    return Init_Chessboard_timestamp(msg_);
  }

private:
  ::iw_interfaces::msg::Chessboard msg_;
};

class Init_Chessboard_faction
{
public:
  Init_Chessboard_faction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Chessboard_initialed faction(::iw_interfaces::msg::Chessboard::_faction_type arg)
  {
    msg_.faction = std::move(arg);
    return Init_Chessboard_initialed(msg_);
  }

private:
  ::iw_interfaces::msg::Chessboard msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iw_interfaces::msg::Chessboard>()
{
  return iw_interfaces::msg::builder::Init_Chessboard_faction();
}

}  // namespace iw_interfaces

#endif  // IW_INTERFACES__MSG__DETAIL__CHESSBOARD__BUILDER_HPP_
