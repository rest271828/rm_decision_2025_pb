// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iw_interfaces:msg/Area.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__AREA__TRAITS_HPP_
#define IW_INTERFACES__MSG__DETAIL__AREA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iw_interfaces/msg/detail/area__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vertices'
#include "iw_interfaces/msg/detail/plane_coordinate__traits.hpp"

namespace iw_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Area & msg,
  std::ostream & out)
{
  out << "{";
  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: vertices
  {
    if (msg.vertices.size() == 0) {
      out << "vertices: []";
    } else {
      out << "vertices: [";
      size_t pending_items = msg.vertices.size();
      for (auto item : msg.vertices) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Area & msg,
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

  // member: vertices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vertices.size() == 0) {
      out << "vertices: []\n";
    } else {
      out << "vertices:\n";
      for (auto item : msg.vertices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Area & msg, bool use_flow_style = false)
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
  const iw_interfaces::msg::Area & msg,
  std::ostream & out, size_t indentation = 0)
{
  iw_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iw_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iw_interfaces::msg::Area & msg)
{
  return iw_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iw_interfaces::msg::Area>()
{
  return "iw_interfaces::msg::Area";
}

template<>
inline const char * name<iw_interfaces::msg::Area>()
{
  return "iw_interfaces/msg/Area";
}

template<>
struct has_fixed_size<iw_interfaces::msg::Area>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iw_interfaces::msg::Area>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iw_interfaces::msg::Area>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IW_INTERFACES__MSG__DETAIL__AREA__TRAITS_HPP_
