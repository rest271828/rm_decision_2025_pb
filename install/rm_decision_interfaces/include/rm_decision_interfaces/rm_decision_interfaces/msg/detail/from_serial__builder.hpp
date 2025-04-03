// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_decision_interfaces:msg/FromSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__FROM_SERIAL__BUILDER_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__FROM_SERIAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_decision_interfaces/msg/detail/from_serial__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_decision_interfaces
{

namespace msg
{

namespace builder
{

class Init_FromSerial_cmd_key
{
public:
  explicit Init_FromSerial_cmd_key(::rm_decision_interfaces::msg::FromSerial & msg)
  : msg_(msg)
  {}
  ::rm_decision_interfaces::msg::FromSerial cmd_key(::rm_decision_interfaces::msg::FromSerial::_cmd_key_type arg)
  {
    msg_.cmd_key = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_decision_interfaces::msg::FromSerial msg_;
};

class Init_FromSerial_target_pos_y
{
public:
  explicit Init_FromSerial_target_pos_y(::rm_decision_interfaces::msg::FromSerial & msg)
  : msg_(msg)
  {}
  Init_FromSerial_cmd_key target_pos_y(::rm_decision_interfaces::msg::FromSerial::_target_pos_y_type arg)
  {
    msg_.target_pos_y = std::move(arg);
    return Init_FromSerial_cmd_key(msg_);
  }

private:
  ::rm_decision_interfaces::msg::FromSerial msg_;
};

class Init_FromSerial_target_pos_x
{
public:
  explicit Init_FromSerial_target_pos_x(::rm_decision_interfaces::msg::FromSerial & msg)
  : msg_(msg)
  {}
  Init_FromSerial_target_pos_y target_pos_x(::rm_decision_interfaces::msg::FromSerial::_target_pos_x_type arg)
  {
    msg_.target_pos_x = std::move(arg);
    return Init_FromSerial_target_pos_y(msg_);
  }

private:
  ::rm_decision_interfaces::msg::FromSerial msg_;
};

class Init_FromSerial_blue_base_hp
{
public:
  explicit Init_FromSerial_blue_base_hp(::rm_decision_interfaces::msg::FromSerial & msg)
  : msg_(msg)
  {}
  Init_FromSerial_target_pos_x blue_base_hp(::rm_decision_interfaces::msg::FromSerial::_blue_base_hp_type arg)
  {
    msg_.blue_base_hp = std::move(arg);
    return Init_FromSerial_target_pos_x(msg_);
  }

private:
  ::rm_decision_interfaces::msg::FromSerial msg_;
};

class Init_FromSerial_blue_outpost_hp
{
public:
  explicit Init_FromSerial_blue_outpost_hp(::rm_decision_interfaces::msg::FromSerial & msg)
  : msg_(msg)
  {}
  Init_FromSerial_blue_base_hp blue_outpost_hp(::rm_decision_interfaces::msg::FromSerial::_blue_outpost_hp_type arg)
  {
    msg_.blue_outpost_hp = std::move(arg);
    return Init_FromSerial_blue_base_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::FromSerial msg_;
};

class Init_FromSerial_blue_7
{
public:
  explicit Init_FromSerial_blue_7(::rm_decision_interfaces::msg::FromSerial & msg)
  : msg_(msg)
  {}
  Init_FromSerial_blue_outpost_hp blue_7(::rm_decision_interfaces::msg::FromSerial::_blue_7_type arg)
  {
    msg_.blue_7 = std::move(arg);
    return Init_FromSerial_blue_outpost_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::FromSerial msg_;
};

class Init_FromSerial_red_base_hp
{
public:
  explicit Init_FromSerial_red_base_hp(::rm_decision_interfaces::msg::FromSerial & msg)
  : msg_(msg)
  {}
  Init_FromSerial_blue_7 red_base_hp(::rm_decision_interfaces::msg::FromSerial::_red_base_hp_type arg)
  {
    msg_.red_base_hp = std::move(arg);
    return Init_FromSerial_blue_7(msg_);
  }

private:
  ::rm_decision_interfaces::msg::FromSerial msg_;
};

class Init_FromSerial_red_outpost_hp
{
public:
  explicit Init_FromSerial_red_outpost_hp(::rm_decision_interfaces::msg::FromSerial & msg)
  : msg_(msg)
  {}
  Init_FromSerial_red_base_hp red_outpost_hp(::rm_decision_interfaces::msg::FromSerial::_red_outpost_hp_type arg)
  {
    msg_.red_outpost_hp = std::move(arg);
    return Init_FromSerial_red_base_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::FromSerial msg_;
};

class Init_FromSerial_red_7
{
public:
  explicit Init_FromSerial_red_7(::rm_decision_interfaces::msg::FromSerial & msg)
  : msg_(msg)
  {}
  Init_FromSerial_red_outpost_hp red_7(::rm_decision_interfaces::msg::FromSerial::_red_7_type arg)
  {
    msg_.red_7 = std::move(arg);
    return Init_FromSerial_red_outpost_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::FromSerial msg_;
};

class Init_FromSerial_supply_projectile_num
{
public:
  explicit Init_FromSerial_supply_projectile_num(::rm_decision_interfaces::msg::FromSerial & msg)
  : msg_(msg)
  {}
  Init_FromSerial_red_7 supply_projectile_num(::rm_decision_interfaces::msg::FromSerial::_supply_projectile_num_type arg)
  {
    msg_.supply_projectile_num = std::move(arg);
    return Init_FromSerial_red_7(msg_);
  }

private:
  ::rm_decision_interfaces::msg::FromSerial msg_;
};

class Init_FromSerial_supply_robot_id
{
public:
  explicit Init_FromSerial_supply_robot_id(::rm_decision_interfaces::msg::FromSerial & msg)
  : msg_(msg)
  {}
  Init_FromSerial_supply_projectile_num supply_robot_id(::rm_decision_interfaces::msg::FromSerial::_supply_robot_id_type arg)
  {
    msg_.supply_robot_id = std::move(arg);
    return Init_FromSerial_supply_projectile_num(msg_);
  }

private:
  ::rm_decision_interfaces::msg::FromSerial msg_;
};

class Init_FromSerial_remaining_gold_coin
{
public:
  explicit Init_FromSerial_remaining_gold_coin(::rm_decision_interfaces::msg::FromSerial & msg)
  : msg_(msg)
  {}
  Init_FromSerial_supply_robot_id remaining_gold_coin(::rm_decision_interfaces::msg::FromSerial::_remaining_gold_coin_type arg)
  {
    msg_.remaining_gold_coin = std::move(arg);
    return Init_FromSerial_supply_robot_id(msg_);
  }

private:
  ::rm_decision_interfaces::msg::FromSerial msg_;
};

class Init_FromSerial_projectile_allowance_17mm
{
public:
  explicit Init_FromSerial_projectile_allowance_17mm(::rm_decision_interfaces::msg::FromSerial & msg)
  : msg_(msg)
  {}
  Init_FromSerial_remaining_gold_coin projectile_allowance_17mm(::rm_decision_interfaces::msg::FromSerial::_projectile_allowance_17mm_type arg)
  {
    msg_.projectile_allowance_17mm = std::move(arg);
    return Init_FromSerial_remaining_gold_coin(msg_);
  }

private:
  ::rm_decision_interfaces::msg::FromSerial msg_;
};

class Init_FromSerial_color
{
public:
  explicit Init_FromSerial_color(::rm_decision_interfaces::msg::FromSerial & msg)
  : msg_(msg)
  {}
  Init_FromSerial_projectile_allowance_17mm color(::rm_decision_interfaces::msg::FromSerial::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_FromSerial_projectile_allowance_17mm(msg_);
  }

private:
  ::rm_decision_interfaces::msg::FromSerial msg_;
};

class Init_FromSerial_gamestart
{
public:
  Init_FromSerial_gamestart()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FromSerial_color gamestart(::rm_decision_interfaces::msg::FromSerial::_gamestart_type arg)
  {
    msg_.gamestart = std::move(arg);
    return Init_FromSerial_color(msg_);
  }

private:
  ::rm_decision_interfaces::msg::FromSerial msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_decision_interfaces::msg::FromSerial>()
{
  return rm_decision_interfaces::msg::builder::Init_FromSerial_gamestart();
}

}  // namespace rm_decision_interfaces

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__FROM_SERIAL__BUILDER_HPP_
