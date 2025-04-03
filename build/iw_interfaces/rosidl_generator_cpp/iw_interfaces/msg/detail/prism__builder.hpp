// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from iw_interfaces:msg/Prism.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__PRISM__BUILDER_HPP_
#define IW_INTERFACES__MSG__DETAIL__PRISM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "iw_interfaces/msg/detail/prism__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace iw_interfaces
{

namespace msg
{

namespace builder
{

class Init_Prism_call_is_called
{
public:
  explicit Init_Prism_call_is_called(::iw_interfaces::msg::Prism & msg)
  : msg_(msg)
  {}
  ::iw_interfaces::msg::Prism call_is_called(::iw_interfaces::msg::Prism::_call_is_called_type arg)
  {
    msg_.call_is_called = std::move(arg);
    return std::move(msg_);
  }

private:
  ::iw_interfaces::msg::Prism msg_;
};

class Init_Prism_call_target_y
{
public:
  explicit Init_Prism_call_target_y(::iw_interfaces::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_call_is_called call_target_y(::iw_interfaces::msg::Prism::_call_target_y_type arg)
  {
    msg_.call_target_y = std::move(arg);
    return Init_Prism_call_is_called(msg_);
  }

private:
  ::iw_interfaces::msg::Prism msg_;
};

class Init_Prism_call_target_x
{
public:
  explicit Init_Prism_call_target_x(::iw_interfaces::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_call_target_y call_target_x(::iw_interfaces::msg::Prism::_call_target_x_type arg)
  {
    msg_.call_target_x = std::move(arg);
    return Init_Prism_call_target_y(msg_);
  }

private:
  ::iw_interfaces::msg::Prism msg_;
};

class Init_Prism_game_projectile_allowance
{
public:
  explicit Init_Prism_game_projectile_allowance(::iw_interfaces::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_call_target_x game_projectile_allowance(::iw_interfaces::msg::Prism::_game_projectile_allowance_type arg)
  {
    msg_.game_projectile_allowance = std::move(arg);
    return Init_Prism_call_target_x(msg_);
  }

private:
  ::iw_interfaces::msg::Prism msg_;
};

class Init_Prism_game_coins
{
public:
  explicit Init_Prism_game_coins(::iw_interfaces::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_game_projectile_allowance game_coins(::iw_interfaces::msg::Prism::_game_coins_type arg)
  {
    msg_.game_coins = std::move(arg);
    return Init_Prism_game_projectile_allowance(msg_);
  }

private:
  ::iw_interfaces::msg::Prism msg_;
};

class Init_Prism_game_buy_ammo_ordered
{
public:
  explicit Init_Prism_game_buy_ammo_ordered(::iw_interfaces::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_game_coins game_buy_ammo_ordered(::iw_interfaces::msg::Prism::_game_buy_ammo_ordered_type arg)
  {
    msg_.game_buy_ammo_ordered = std::move(arg);
    return Init_Prism_game_coins(msg_);
  }

private:
  ::iw_interfaces::msg::Prism msg_;
};

class Init_Prism_game_game_start
{
public:
  explicit Init_Prism_game_game_start(::iw_interfaces::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_game_buy_ammo_ordered game_game_start(::iw_interfaces::msg::Prism::_game_game_start_type arg)
  {
    msg_.game_game_start = std::move(arg);
    return Init_Prism_game_buy_ammo_ordered(msg_);
  }

private:
  ::iw_interfaces::msg::Prism msg_;
};

class Init_Prism_track_pose
{
public:
  explicit Init_Prism_track_pose(::iw_interfaces::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_game_game_start track_pose(::iw_interfaces::msg::Prism::_track_pose_type arg)
  {
    msg_.track_pose = std::move(arg);
    return Init_Prism_game_game_start(msg_);
  }

private:
  ::iw_interfaces::msg::Prism msg_;
};

class Init_Prism_track_hp
{
public:
  explicit Init_Prism_track_hp(::iw_interfaces::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_track_pose track_hp(::iw_interfaces::msg::Prism::_track_hp_type arg)
  {
    msg_.track_hp = std::move(arg);
    return Init_Prism_track_pose(msg_);
  }

private:
  ::iw_interfaces::msg::Prism msg_;
};

class Init_Prism_track_id
{
public:
  explicit Init_Prism_track_id(::iw_interfaces::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_track_hp track_id(::iw_interfaces::msg::Prism::_track_id_type arg)
  {
    msg_.track_id = std::move(arg);
    return Init_Prism_track_hp(msg_);
  }

private:
  ::iw_interfaces::msg::Prism msg_;
};

class Init_Prism_track_tracking
{
public:
  explicit Init_Prism_track_tracking(::iw_interfaces::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_track_id track_tracking(::iw_interfaces::msg::Prism::_track_tracking_type arg)
  {
    msg_.track_tracking = std::move(arg);
    return Init_Prism_track_id(msg_);
  }

private:
  ::iw_interfaces::msg::Prism msg_;
};

class Init_Prism_self_pose
{
public:
  explicit Init_Prism_self_pose(::iw_interfaces::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_track_tracking self_pose(::iw_interfaces::msg::Prism::_self_pose_type arg)
  {
    msg_.self_pose = std::move(arg);
    return Init_Prism_track_tracking(msg_);
  }

private:
  ::iw_interfaces::msg::Prism msg_;
};

class Init_Prism_self_shooter_heat
{
public:
  explicit Init_Prism_self_shooter_heat(::iw_interfaces::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_self_pose self_shooter_heat(::iw_interfaces::msg::Prism::_self_shooter_heat_type arg)
  {
    msg_.self_shooter_heat = std::move(arg);
    return Init_Prism_self_pose(msg_);
  }

private:
  ::iw_interfaces::msg::Prism msg_;
};

class Init_Prism_self_ammo
{
public:
  explicit Init_Prism_self_ammo(::iw_interfaces::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_self_shooter_heat self_ammo(::iw_interfaces::msg::Prism::_self_ammo_type arg)
  {
    msg_.self_ammo = std::move(arg);
    return Init_Prism_self_shooter_heat(msg_);
  }

private:
  ::iw_interfaces::msg::Prism msg_;
};

class Init_Prism_self_hp
{
public:
  explicit Init_Prism_self_hp(::iw_interfaces::msg::Prism & msg)
  : msg_(msg)
  {}
  Init_Prism_self_ammo self_hp(::iw_interfaces::msg::Prism::_self_hp_type arg)
  {
    msg_.self_hp = std::move(arg);
    return Init_Prism_self_ammo(msg_);
  }

private:
  ::iw_interfaces::msg::Prism msg_;
};

class Init_Prism_self_id
{
public:
  Init_Prism_self_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Prism_self_hp self_id(::iw_interfaces::msg::Prism::_self_id_type arg)
  {
    msg_.self_id = std::move(arg);
    return Init_Prism_self_hp(msg_);
  }

private:
  ::iw_interfaces::msg::Prism msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::iw_interfaces::msg::Prism>()
{
  return iw_interfaces::msg::builder::Init_Prism_self_id();
}

}  // namespace iw_interfaces

#endif  // IW_INTERFACES__MSG__DETAIL__PRISM__BUILDER_HPP_
