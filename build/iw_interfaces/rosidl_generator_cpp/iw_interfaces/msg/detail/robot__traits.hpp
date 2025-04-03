// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iw_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__ROBOT__TRAITS_HPP_
#define IW_INTERFACES__MSG__DETAIL__ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iw_interfaces/msg/detail/robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace iw_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Robot & msg,
  std::ostream & out)
{
  out << "{";
  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: faction
  {
    out << "faction: ";
    rosidl_generator_traits::value_to_yaml(msg.faction, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: hp
  {
    out << "hp: ";
    rosidl_generator_traits::value_to_yaml(msg.hp, out);
    out << ", ";
  }

  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << ", ";
  }

  // member: attack
  {
    out << "attack: ";
    rosidl_generator_traits::value_to_yaml(msg.attack, out);
    out << ", ";
  }

  // member: missing
  {
    out << "missing: ";
    rosidl_generator_traits::value_to_yaml(msg.missing, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: faction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "faction: ";
    rosidl_generator_traits::value_to_yaml(msg.faction, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hp: ";
    rosidl_generator_traits::value_to_yaml(msg.hp, out);
    out << "\n";
  }

  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << "\n";
  }

  // member: attack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attack: ";
    rosidl_generator_traits::value_to_yaml(msg.attack, out);
    out << "\n";
  }

  // member: missing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "missing: ";
    rosidl_generator_traits::value_to_yaml(msg.missing, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robot & msg, bool use_flow_style = false)
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
  const iw_interfaces::msg::Robot & msg,
  std::ostream & out, size_t indentation = 0)
{
  iw_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iw_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iw_interfaces::msg::Robot & msg)
{
  return iw_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iw_interfaces::msg::Robot>()
{
  return "iw_interfaces::msg::Robot";
}

template<>
inline const char * name<iw_interfaces::msg::Robot>()
{
  return "iw_interfaces/msg/Robot";
}

template<>
struct has_fixed_size<iw_interfaces::msg::Robot>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iw_interfaces::msg::Robot>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iw_interfaces::msg::Robot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IW_INTERFACES__MSG__DETAIL__ROBOT__TRAITS_HPP_
