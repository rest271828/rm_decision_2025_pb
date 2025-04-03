// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iw_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__ROBOT__BUILDER_HPP_
#define IW_INTERFACES__MSG__DETAIL__ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iw_interfaces/msg/detail/robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iw_interfaces
{

namespace msg
{

namespace builder
{

class Init_Robot_missing
{
public:
  explicit Init_Robot_missing(::iw_interfaces::msg::Robot & msg)
  : msg_(msg)
  {}
  ::iw_interfaces::msg::Robot missing(::iw_interfaces::msg::Robot::_missing_type arg)
  {
    msg_.missing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iw_interfaces::msg::Robot msg_;
};

class Init_Robot_attack
{
public:
  explicit Init_Robot_attack(::iw_interfaces::msg::Robot & msg)
  : msg_(msg)
  {}
  Init_Robot_missing attack(::iw_interfaces::msg::Robot::_attack_type arg)
  {
    msg_.attack = std::move(arg);
    return Init_Robot_missing(msg_);
  }

private:
  ::iw_interfaces::msg::Robot msg_;
};

class Init_Robot_level
{
public:
  explicit Init_Robot_level(::iw_interfaces::msg::Robot & msg)
  : msg_(msg)
  {}
  Init_Robot_attack level(::iw_interfaces::msg::Robot::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_Robot_attack(msg_);
  }

private:
  ::iw_interfaces::msg::Robot msg_;
};

class Init_Robot_hp
{
public:
  explicit Init_Robot_hp(::iw_interfaces::msg::Robot & msg)
  : msg_(msg)
  {}
  Init_Robot_level hp(::iw_interfaces::msg::Robot::_hp_type arg)
  {
    msg_.hp = std::move(arg);
    return Init_Robot_level(msg_);
  }

private:
  ::iw_interfaces::msg::Robot msg_;
};

class Init_Robot_pose
{
public:
  explicit Init_Robot_pose(::iw_interfaces::msg::Robot & msg)
  : msg_(msg)
  {}
  Init_Robot_hp pose(::iw_interfaces::msg::Robot::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Robot_hp(msg_);
  }

private:
  ::iw_interfaces::msg::Robot msg_;
};

class Init_Robot_id
{
public:
  explicit Init_Robot_id(::iw_interfaces::msg::Robot & msg)
  : msg_(msg)
  {}
  Init_Robot_pose id(::iw_interfaces::msg::Robot::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Robot_pose(msg_);
  }

private:
  ::iw_interfaces::msg::Robot msg_;
};

class Init_Robot_faction
{
public:
  explicit Init_Robot_faction(::iw_interfaces::msg::Robot & msg)
  : msg_(msg)
  {}
  Init_Robot_id faction(::iw_interfaces::msg::Robot::_faction_type arg)
  {
    msg_.faction = std::move(arg);
    return Init_Robot_id(msg_);
  }

private:
  ::iw_interfaces::msg::Robot msg_;
};

class Init_Robot_label
{
public:
  Init_Robot_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robot_faction label(::iw_interfaces::msg::Robot::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_Robot_faction(msg_);
  }

private:
  ::iw_interfaces::msg::Robot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iw_interfaces::msg::Robot>()
{
  return iw_interfaces::msg::builder::Init_Robot_label();
}

}  // namespace iw_interfaces

#endif  // IW_INTERFACES__MSG__DETAIL__ROBOT__BUILDER_HPP_
