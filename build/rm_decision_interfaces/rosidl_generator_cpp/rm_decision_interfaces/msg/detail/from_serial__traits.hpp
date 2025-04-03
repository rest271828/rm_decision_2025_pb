// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_decision_interfaces:msg/FromSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__FROM_SERIAL__TRAITS_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__FROM_SERIAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_decision_interfaces/msg/detail/from_serial__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_decision_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const FromSerial & msg,
  std::ostream & out)
{
  out << "{";
  // member: gamestart
  {
    out << "gamestart: ";
    rosidl_generator_traits::value_to_yaml(msg.gamestart, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: projectile_allowance_17mm
  {
    out << "projectile_allowance_17mm: ";
    rosidl_generator_traits::value_to_yaml(msg.projectile_allowance_17mm, out);
    out << ", ";
  }

  // member: remaining_gold_coin
  {
    out << "remaining_gold_coin: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_gold_coin, out);
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

  // member: target_pos_x
  {
    out << "target_pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_pos_x, out);
    out << ", ";
  }

  // member: target_pos_y
  {
    out << "target_pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_pos_y, out);
    out << ", ";
  }

  // member: cmd_key
  {
    out << "cmd_key: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_key, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FromSerial & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gamestart
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gamestart: ";
    rosidl_generator_traits::value_to_yaml(msg.gamestart, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: projectile_allowance_17mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "projectile_allowance_17mm: ";
    rosidl_generator_traits::value_to_yaml(msg.projectile_allowance_17mm, out);
    out << "\n";
  }

  // member: remaining_gold_coin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_gold_coin: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_gold_coin, out);
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

  // member: target_pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_pos_x, out);
    out << "\n";
  }

  // member: target_pos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_pos_y, out);
    out << "\n";
  }

  // member: cmd_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_key: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_key, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FromSerial & msg, bool use_flow_style = false)
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
  const rm_decision_interfaces::msg::FromSerial & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_decision_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_decision_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_decision_interfaces::msg::FromSerial & msg)
{
  return rm_decision_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_decision_interfaces::msg::FromSerial>()
{
  return "rm_decision_interfaces::msg::FromSerial";
}

template<>
inline const char * name<rm_decision_interfaces::msg::FromSerial>()
{
  return "rm_decision_interfaces/msg/FromSerial";
}

template<>
struct has_fixed_size<rm_decision_interfaces::msg::FromSerial>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_decision_interfaces::msg::FromSerial>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_decision_interfaces::msg::FromSerial>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__FROM_SERIAL__TRAITS_HPP_
