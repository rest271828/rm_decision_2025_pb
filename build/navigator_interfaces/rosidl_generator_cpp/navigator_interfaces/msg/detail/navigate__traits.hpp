// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from navigator_interfaces:msg/Navigate.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATOR_INTERFACES__MSG__DETAIL__NAVIGATE__TRAITS_HPP_
#define NAVIGATOR_INTERFACES__MSG__DETAIL__NAVIGATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "navigator_interfaces/msg/detail/navigate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace navigator_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Navigate & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: instant
  {
    out << "instant: ";
    rosidl_generator_traits::value_to_yaml(msg.instant, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Navigate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: instant
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "instant: ";
    rosidl_generator_traits::value_to_yaml(msg.instant, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Navigate & msg, bool use_flow_style = false)
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

}  // namespace navigator_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navigator_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigator_interfaces::msg::Navigate & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigator_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigator_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const navigator_interfaces::msg::Navigate & msg)
{
  return navigator_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<navigator_interfaces::msg::Navigate>()
{
  return "navigator_interfaces::msg::Navigate";
}

template<>
inline const char * name<navigator_interfaces::msg::Navigate>()
{
  return "navigator_interfaces/msg/Navigate";
}

template<>
struct has_fixed_size<navigator_interfaces::msg::Navigate>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<navigator_interfaces::msg::Navigate>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<navigator_interfaces::msg::Navigate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAVIGATOR_INTERFACES__MSG__DETAIL__NAVIGATE__TRAITS_HPP_
