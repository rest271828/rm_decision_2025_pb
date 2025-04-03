// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iw_interfaces:msg/PlaneCoordinate.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__PLANE_COORDINATE__TRAITS_HPP_
#define IW_INTERFACES__MSG__DETAIL__PLANE_COORDINATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iw_interfaces/msg/detail/plane_coordinate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace iw_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlaneCoordinate & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlaneCoordinate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlaneCoordinate & msg, bool use_flow_style = false)
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
  const iw_interfaces::msg::PlaneCoordinate & msg,
  std::ostream & out, size_t indentation = 0)
{
  iw_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iw_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iw_interfaces::msg::PlaneCoordinate & msg)
{
  return iw_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iw_interfaces::msg::PlaneCoordinate>()
{
  return "iw_interfaces::msg::PlaneCoordinate";
}

template<>
inline const char * name<iw_interfaces::msg::PlaneCoordinate>()
{
  return "iw_interfaces/msg/PlaneCoordinate";
}

template<>
struct has_fixed_size<iw_interfaces::msg::PlaneCoordinate>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<iw_interfaces::msg::PlaneCoordinate>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<iw_interfaces::msg::PlaneCoordinate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IW_INTERFACES__MSG__DETAIL__PLANE_COORDINATE__TRAITS_HPP_
