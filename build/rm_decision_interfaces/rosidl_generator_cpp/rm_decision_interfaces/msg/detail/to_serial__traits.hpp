// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_decision_interfaces:msg/ToSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__TO_SERIAL__TRAITS_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__TO_SERIAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_decision_interfaces/msg/detail/to_serial__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_decision_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ToSerial & msg,
  std::ostream & out)
{
  out << "{";
  // member: sentry_cmd
  {
    out << "sentry_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_cmd, out);
    out << ", ";
  }

  // member: shangpo
  {
    out << "shangpo: ";
    rosidl_generator_traits::value_to_yaml(msg.shangpo, out);
    out << ", ";
  }

  // member: diff_yaw
  {
    out << "diff_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ToSerial & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sentry_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sentry_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_cmd, out);
    out << "\n";
  }

  // member: shangpo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shangpo: ";
    rosidl_generator_traits::value_to_yaml(msg.shangpo, out);
    out << "\n";
  }

  // member: diff_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diff_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToSerial & msg, bool use_flow_style = false)
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
  const rm_decision_interfaces::msg::ToSerial & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_decision_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_decision_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_decision_interfaces::msg::ToSerial & msg)
{
  return rm_decision_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_decision_interfaces::msg::ToSerial>()
{
  return "rm_decision_interfaces::msg::ToSerial";
}

template<>
inline const char * name<rm_decision_interfaces::msg::ToSerial>()
{
  return "rm_decision_interfaces/msg/ToSerial";
}

template<>
struct has_fixed_size<rm_decision_interfaces::msg::ToSerial>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_decision_interfaces::msg::ToSerial>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_decision_interfaces::msg::ToSerial>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__TO_SERIAL__TRAITS_HPP_
