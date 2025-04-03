// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_decision_interfaces:msg/ReceiveSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__RECEIVE_SERIAL__BUILDER_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__RECEIVE_SERIAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_decision_interfaces/msg/detail/receive_serial__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_decision_interfaces
{

namespace msg
{

namespace builder
{

class Init_ReceiveSerial_supply_projectile_num
{
public:
  explicit Init_ReceiveSerial_supply_projectile_num(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  ::rm_decision_interfaces::msg::ReceiveSerial supply_projectile_num(::rm_decision_interfaces::msg::ReceiveSerial::_supply_projectile_num_type arg)
  {
    msg_.supply_projectile_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_supply_robot_id
{
public:
  explicit Init_ReceiveSerial_supply_robot_id(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_supply_projectile_num supply_robot_id(::rm_decision_interfaces::msg::ReceiveSerial::_supply_robot_id_type arg)
  {
    msg_.supply_robot_id = std::move(arg);
    return Init_ReceiveSerial_supply_projectile_num(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_event_data
{
public:
  explicit Init_ReceiveSerial_event_data(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_supply_robot_id event_data(::rm_decision_interfaces::msg::ReceiveSerial::_event_data_type arg)
  {
    msg_.event_data = std::move(arg);
    return Init_ReceiveSerial_supply_robot_id(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_rfid_status
{
public:
  explicit Init_ReceiveSerial_rfid_status(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_event_data rfid_status(::rm_decision_interfaces::msg::ReceiveSerial::_rfid_status_type arg)
  {
    msg_.rfid_status = std::move(arg);
    return Init_ReceiveSerial_event_data(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_base_hp
{
public:
  explicit Init_ReceiveSerial_base_hp(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_rfid_status base_hp(::rm_decision_interfaces::msg::ReceiveSerial::_base_hp_type arg)
  {
    msg_.base_hp = std::move(arg);
    return Init_ReceiveSerial_rfid_status(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_self_hp
{
public:
  explicit Init_ReceiveSerial_self_hp(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_base_hp self_hp(::rm_decision_interfaces::msg::ReceiveSerial::_self_hp_type arg)
  {
    msg_.self_hp = std::move(arg);
    return Init_ReceiveSerial_base_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_blue_base_hp
{
public:
  explicit Init_ReceiveSerial_blue_base_hp(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_self_hp blue_base_hp(::rm_decision_interfaces::msg::ReceiveSerial::_blue_base_hp_type arg)
  {
    msg_.blue_base_hp = std::move(arg);
    return Init_ReceiveSerial_self_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_blue_outpost_hp
{
public:
  explicit Init_ReceiveSerial_blue_outpost_hp(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_blue_base_hp blue_outpost_hp(::rm_decision_interfaces::msg::ReceiveSerial::_blue_outpost_hp_type arg)
  {
    msg_.blue_outpost_hp = std::move(arg);
    return Init_ReceiveSerial_blue_base_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_blue_7
{
public:
  explicit Init_ReceiveSerial_blue_7(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_blue_outpost_hp blue_7(::rm_decision_interfaces::msg::ReceiveSerial::_blue_7_type arg)
  {
    msg_.blue_7 = std::move(arg);
    return Init_ReceiveSerial_blue_outpost_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_blue_5
{
public:
  explicit Init_ReceiveSerial_blue_5(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_blue_7 blue_5(::rm_decision_interfaces::msg::ReceiveSerial::_blue_5_type arg)
  {
    msg_.blue_5 = std::move(arg);
    return Init_ReceiveSerial_blue_7(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_blue_4
{
public:
  explicit Init_ReceiveSerial_blue_4(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_blue_5 blue_4(::rm_decision_interfaces::msg::ReceiveSerial::_blue_4_type arg)
  {
    msg_.blue_4 = std::move(arg);
    return Init_ReceiveSerial_blue_5(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_blue_3
{
public:
  explicit Init_ReceiveSerial_blue_3(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_blue_4 blue_3(::rm_decision_interfaces::msg::ReceiveSerial::_blue_3_type arg)
  {
    msg_.blue_3 = std::move(arg);
    return Init_ReceiveSerial_blue_4(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_blue_2
{
public:
  explicit Init_ReceiveSerial_blue_2(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_blue_3 blue_2(::rm_decision_interfaces::msg::ReceiveSerial::_blue_2_type arg)
  {
    msg_.blue_2 = std::move(arg);
    return Init_ReceiveSerial_blue_3(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_blue_1
{
public:
  explicit Init_ReceiveSerial_blue_1(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_blue_2 blue_1(::rm_decision_interfaces::msg::ReceiveSerial::_blue_1_type arg)
  {
    msg_.blue_1 = std::move(arg);
    return Init_ReceiveSerial_blue_2(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_red_base_hp
{
public:
  explicit Init_ReceiveSerial_red_base_hp(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_blue_1 red_base_hp(::rm_decision_interfaces::msg::ReceiveSerial::_red_base_hp_type arg)
  {
    msg_.red_base_hp = std::move(arg);
    return Init_ReceiveSerial_blue_1(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_red_outpost_hp
{
public:
  explicit Init_ReceiveSerial_red_outpost_hp(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_red_base_hp red_outpost_hp(::rm_decision_interfaces::msg::ReceiveSerial::_red_outpost_hp_type arg)
  {
    msg_.red_outpost_hp = std::move(arg);
    return Init_ReceiveSerial_red_base_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_red_7
{
public:
  explicit Init_ReceiveSerial_red_7(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_red_outpost_hp red_7(::rm_decision_interfaces::msg::ReceiveSerial::_red_7_type arg)
  {
    msg_.red_7 = std::move(arg);
    return Init_ReceiveSerial_red_outpost_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_red_5
{
public:
  explicit Init_ReceiveSerial_red_5(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_red_7 red_5(::rm_decision_interfaces::msg::ReceiveSerial::_red_5_type arg)
  {
    msg_.red_5 = std::move(arg);
    return Init_ReceiveSerial_red_7(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_red_4
{
public:
  explicit Init_ReceiveSerial_red_4(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_red_5 red_4(::rm_decision_interfaces::msg::ReceiveSerial::_red_4_type arg)
  {
    msg_.red_4 = std::move(arg);
    return Init_ReceiveSerial_red_5(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_red_3
{
public:
  explicit Init_ReceiveSerial_red_3(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_red_4 red_3(::rm_decision_interfaces::msg::ReceiveSerial::_red_3_type arg)
  {
    msg_.red_3 = std::move(arg);
    return Init_ReceiveSerial_red_4(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_red_2
{
public:
  explicit Init_ReceiveSerial_red_2(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_red_3 red_2(::rm_decision_interfaces::msg::ReceiveSerial::_red_2_type arg)
  {
    msg_.red_2 = std::move(arg);
    return Init_ReceiveSerial_red_3(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_red_1
{
public:
  explicit Init_ReceiveSerial_red_1(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_red_2 red_1(::rm_decision_interfaces::msg::ReceiveSerial::_red_1_type arg)
  {
    msg_.red_1 = std::move(arg);
    return Init_ReceiveSerial_red_2(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_time
{
public:
  explicit Init_ReceiveSerial_time(::rm_decision_interfaces::msg::ReceiveSerial & msg)
  : msg_(msg)
  {}
  Init_ReceiveSerial_red_1 time(::rm_decision_interfaces::msg::ReceiveSerial::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_ReceiveSerial_red_1(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

class Init_ReceiveSerial_color
{
public:
  Init_ReceiveSerial_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReceiveSerial_time color(::rm_decision_interfaces::msg::ReceiveSerial::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_ReceiveSerial_time(msg_);
  }

private:
  ::rm_decision_interfaces::msg::ReceiveSerial msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_decision_interfaces::msg::ReceiveSerial>()
{
  return rm_decision_interfaces::msg::builder::Init_ReceiveSerial_color();
}

}  // namespace rm_decision_interfaces

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__RECEIVE_SERIAL__BUILDER_HPP_
