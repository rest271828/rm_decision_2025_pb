// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_decision_interfaces:msg/ReceiveSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__RECEIVE_SERIAL__TRAITS_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__RECEIVE_SERIAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_decision_interfaces/msg/detail/receive_serial__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_decision_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ReceiveSerial & msg,
  std::ostream & out)
{
  out << "{";
  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: red_1
  {
    out << "red_1: ";
    rosidl_generator_traits::value_to_yaml(msg.red_1, out);
    out << ", ";
  }

  // member: red_2
  {
    out << "red_2: ";
    rosidl_generator_traits::value_to_yaml(msg.red_2, out);
    out << ", ";
  }

  // member: red_3
  {
    out << "red_3: ";
    rosidl_generator_traits::value_to_yaml(msg.red_3, out);
    out << ", ";
  }

  // member: red_4
  {
    out << "red_4: ";
    rosidl_generator_traits::value_to_yaml(msg.red_4, out);
    out << ", ";
  }

  // member: red_5
  {
    out << "red_5: ";
    rosidl_generator_traits::value_to_yaml(msg.red_5, out);
    out << ", ";
  }

  // member: red_7
  {
    out << "red_7: ";
    rosidl_generator_traits::value_to_yaml(msg.red_7, out);
    out << ", ";
  }

  // member: red_outpost_hp
  {
    out << "red_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_outpost_hp, out);
    out << ", ";
  }

  // member: red_base_hp
  {
    out << "red_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_base_hp, out);
    out << ", ";
  }

  // member: blue_1
  {
    out << "blue_1: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_1, out);
    out << ", ";
  }

  // member: blue_2
  {
    out << "blue_2: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_2, out);
    out << ", ";
  }

  // member: blue_3
  {
    out << "blue_3: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_3, out);
    out << ", ";
  }

  // member: blue_4
  {
    out << "blue_4: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_4, out);
    out << ", ";
  }

  // member: blue_5
  {
    out << "blue_5: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_5, out);
    out << ", ";
  }

  // member: blue_7
  {
    out << "blue_7: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_7, out);
    out << ", ";
  }

  // member: blue_outpost_hp
  {
    out << "blue_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_outpost_hp, out);
    out << ", ";
  }

  // member: blue_base_hp
  {
    out << "blue_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_base_hp, out);
    out << ", ";
  }

  // member: self_hp
  {
    out << "self_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.self_hp, out);
    out << ", ";
  }

  // member: base_hp
  {
    out << "base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.base_hp, out);
    out << ", ";
  }

  // member: rfid_status
  {
    out << "rfid_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rfid_status, out);
    out << ", ";
  }

  // member: event_data
  {
    out << "event_data: ";
    rosidl_generator_traits::value_to_yaml(msg.event_data, out);
    out << ", ";
  }

  // member: supply_robot_id
  {
    out << "supply_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_robot_id, out);
    out << ", ";
  }

  // member: supply_projectile_num
  {
    out << "supply_projectile_num: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_projectile_num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReceiveSerial & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: red_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_1: ";
    rosidl_generator_traits::value_to_yaml(msg.red_1, out);
    out << "\n";
  }

  // member: red_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_2: ";
    rosidl_generator_traits::value_to_yaml(msg.red_2, out);
    out << "\n";
  }

  // member: red_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_3: ";
    rosidl_generator_traits::value_to_yaml(msg.red_3, out);
    out << "\n";
  }

  // member: red_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_4: ";
    rosidl_generator_traits::value_to_yaml(msg.red_4, out);
    out << "\n";
  }

  // member: red_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_5: ";
    rosidl_generator_traits::value_to_yaml(msg.red_5, out);
    out << "\n";
  }

  // member: red_7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_7: ";
    rosidl_generator_traits::value_to_yaml(msg.red_7, out);
    out << "\n";
  }

  // member: red_outpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_outpost_hp, out);
    out << "\n";
  }

  // member: red_base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_base_hp, out);
    out << "\n";
  }

  // member: blue_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_1: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_1, out);
    out << "\n";
  }

  // member: blue_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_2: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_2, out);
    out << "\n";
  }

  // member: blue_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_3: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_3, out);
    out << "\n";
  }

  // member: blue_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_4: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_4, out);
    out << "\n";
  }

  // member: blue_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_5: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_5, out);
    out << "\n";
  }

  // member: blue_7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_7: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_7, out);
    out << "\n";
  }

  // member: blue_outpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_outpost_hp, out);
    out << "\n";
  }

  // member: blue_base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_base_hp, out);
    out << "\n";
  }

  // member: self_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "self_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.self_hp, out);
    out << "\n";
  }

  // member: base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.base_hp, out);
    out << "\n";
  }

  // member: rfid_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rfid_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rfid_status, out);
    out << "\n";
  }

  // member: event_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_data: ";
    rosidl_generator_traits::value_to_yaml(msg.event_data, out);
    out << "\n";
  }

  // member: supply_robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_robot_id, out);
    out << "\n";
  }

  // member: supply_projectile_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_projectile_num: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_projectile_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReceiveSerial & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rm_decision_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_decision_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_decision_interfaces::msg::ReceiveSerial & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_decision_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_decision_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_decision_interfaces::msg::ReceiveSerial & msg)
{
  return rm_decision_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_decision_interfaces::msg::ReceiveSerial>()
{
  return "rm_decision_interfaces::msg::ReceiveSerial";
}

template<>
inline const char * name<rm_decision_interfaces::msg::ReceiveSerial>()
{
  return "rm_decision_interfaces/msg/ReceiveSerial";
}

template<>
struct has_fixed_size<rm_decision_interfaces::msg::ReceiveSerial>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_decision_interfaces::msg::ReceiveSerial>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_decision_interfaces::msg::ReceiveSerial>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__RECEIVE_SERIAL__TRAITS_HPP_
