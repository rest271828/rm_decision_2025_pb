// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iw_interfaces:msg/Prism.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__PRISM__TRAITS_HPP_
#define IW_INTERFACES__MSG__DETAIL__PRISM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iw_interfaces/msg/detail/prism__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'self_pose'
// Member 'track_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace iw_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Prism & msg,
  std::ostream & out)
{
  out << "{";
  // member: self_id
  {
    out << "self_id: ";
    rosidl_generator_traits::value_to_yaml(msg.self_id, out);
    out << ", ";
  }

  // member: self_hp
  {
    out << "self_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.self_hp, out);
    out << ", ";
  }

  // member: self_ammo
  {
    out << "self_ammo: ";
    rosidl_generator_traits::value_to_yaml(msg.self_ammo, out);
    out << ", ";
  }

  // member: self_shooter_heat
  {
    out << "self_shooter_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.self_shooter_heat, out);
    out << ", ";
  }

  // member: self_pose
  {
    out << "self_pose: ";
    to_flow_style_yaml(msg.self_pose, out);
    out << ", ";
  }

  // member: track_tracking
  {
    out << "track_tracking: ";
    rosidl_generator_traits::value_to_yaml(msg.track_tracking, out);
    out << ", ";
  }

  // member: track_id
  {
    out << "track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track_id, out);
    out << ", ";
  }

  // member: track_hp
  {
    out << "track_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.track_hp, out);
    out << ", ";
  }

  // member: track_pose
  {
    out << "track_pose: ";
    to_flow_style_yaml(msg.track_pose, out);
    out << ", ";
  }

  // member: game_game_start
  {
    out << "game_game_start: ";
    rosidl_generator_traits::value_to_yaml(msg.game_game_start, out);
    out << ", ";
  }

  // member: game_buy_ammo_ordered
  {
    out << "game_buy_ammo_ordered: ";
    rosidl_generator_traits::value_to_yaml(msg.game_buy_ammo_ordered, out);
    out << ", ";
  }

  // member: game_coins
  {
    out << "game_coins: ";
    rosidl_generator_traits::value_to_yaml(msg.game_coins, out);
    out << ", ";
  }

  // member: game_projectile_allowance
  {
    out << "game_projectile_allowance: ";
    rosidl_generator_traits::value_to_yaml(msg.game_projectile_allowance, out);
    out << ", ";
  }

  // member: call_target_x
  {
    out << "call_target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.call_target_x, out);
    out << ", ";
  }

  // member: call_target_y
  {
    out << "call_target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.call_target_y, out);
    out << ", ";
  }

  // member: call_is_called
  {
    out << "call_is_called: ";
    rosidl_generator_traits::value_to_yaml(msg.call_is_called, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Prism & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: self_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "self_id: ";
    rosidl_generator_traits::value_to_yaml(msg.self_id, out);
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

  // member: self_ammo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "self_ammo: ";
    rosidl_generator_traits::value_to_yaml(msg.self_ammo, out);
    out << "\n";
  }

  // member: self_shooter_heat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "self_shooter_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.self_shooter_heat, out);
    out << "\n";
  }

  // member: self_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "self_pose:\n";
    to_block_style_yaml(msg.self_pose, out, indentation + 2);
  }

  // member: track_tracking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_tracking: ";
    rosidl_generator_traits::value_to_yaml(msg.track_tracking, out);
    out << "\n";
  }

  // member: track_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track_id, out);
    out << "\n";
  }

  // member: track_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.track_hp, out);
    out << "\n";
  }

  // member: track_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_pose:\n";
    to_block_style_yaml(msg.track_pose, out, indentation + 2);
  }

  // member: game_game_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_game_start: ";
    rosidl_generator_traits::value_to_yaml(msg.game_game_start, out);
    out << "\n";
  }

  // member: game_buy_ammo_ordered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_buy_ammo_ordered: ";
    rosidl_generator_traits::value_to_yaml(msg.game_buy_ammo_ordered, out);
    out << "\n";
  }

  // member: game_coins
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_coins: ";
    rosidl_generator_traits::value_to_yaml(msg.game_coins, out);
    out << "\n";
  }

  // member: game_projectile_allowance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_projectile_allowance: ";
    rosidl_generator_traits::value_to_yaml(msg.game_projectile_allowance, out);
    out << "\n";
  }

  // member: call_target_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "call_target_x: ";
    rosidl_generator_traits::value_to_yaml(msg.call_target_x, out);
    out << "\n";
  }

  // member: call_target_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "call_target_y: ";
    rosidl_generator_traits::value_to_yaml(msg.call_target_y, out);
    out << "\n";
  }

  // member: call_is_called
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "call_is_called: ";
    rosidl_generator_traits::value_to_yaml(msg.call_is_called, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Prism & msg, bool use_flow_style = false)
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

}  // namespace iw_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use iw_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const iw_interfaces::msg::Prism & msg,
  std::ostream & out, size_t indentation = 0)
{
  iw_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iw_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iw_interfaces::msg::Prism & msg)
{
  return iw_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iw_interfaces::msg::Prism>()
{
  return "iw_interfaces::msg::Prism";
}

template<>
inline const char * name<iw_interfaces::msg::Prism>()
{
  return "iw_interfaces/msg/Prism";
}

template<>
struct has_fixed_size<iw_interfaces::msg::Prism>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<iw_interfaces::msg::Prism>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<iw_interfaces::msg::Prism>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IW_INTERFACES__MSG__DETAIL__PRISM__TRAITS_HPP_
