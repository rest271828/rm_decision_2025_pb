// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iw_interfaces:msg/Chessboard.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__CHESSBOARD__TRAITS_HPP_
#define IW_INTERFACES__MSG__DETAIL__CHESSBOARD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "iw_interfaces/msg/detail/chessboard__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'robots'
#include "iw_interfaces/msg/detail/robot__traits.hpp"
// Member 'terrains'
#include "iw_interfaces/msg/detail/terrain__traits.hpp"
// Member 'architectures'
#include "iw_interfaces/msg/detail/architecture__traits.hpp"

namespace iw_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Chessboard & msg,
  std::ostream & out)
{
  out << "{";
  // member: faction
  {
    out << "faction: ";
    rosidl_generator_traits::value_to_yaml(msg.faction, out);
    out << ", ";
  }

  // member: initialed
  {
    out << "initialed: ";
    rosidl_generator_traits::value_to_yaml(msg.initialed, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: robots
  {
    if (msg.robots.size() == 0) {
      out << "robots: []";
    } else {
      out << "robots: [";
      size_t pending_items = msg.robots.size();
      for (auto item : msg.robots) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: terrains
  {
    if (msg.terrains.size() == 0) {
      out << "terrains: []";
    } else {
      out << "terrains: [";
      size_t pending_items = msg.terrains.size();
      for (auto item : msg.terrains) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: architectures
  {
    if (msg.architectures.size() == 0) {
      out << "architectures: []";
    } else {
      out << "architectures: [";
      size_t pending_items = msg.architectures.size();
      for (auto item : msg.architectures) {
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
  const Chessboard & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: faction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "faction: ";
    rosidl_generator_traits::value_to_yaml(msg.faction, out);
    out << "\n";
  }

  // member: initialed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initialed: ";
    rosidl_generator_traits::value_to_yaml(msg.initialed, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: robots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robots.size() == 0) {
      out << "robots: []\n";
    } else {
      out << "robots:\n";
      for (auto item : msg.robots) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: terrains
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.terrains.size() == 0) {
      out << "terrains: []\n";
    } else {
      out << "terrains:\n";
      for (auto item : msg.terrains) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: architectures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.architectures.size() == 0) {
      out << "architectures: []\n";
    } else {
      out << "architectures:\n";
      for (auto item : msg.architectures) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Chessboard & msg, bool use_flow_style = false)
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
  const iw_interfaces::msg::Chessboard & msg,
  std::ostream & out, size_t indentation = 0)
{
  iw_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use iw_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const iw_interfaces::msg::Chessboard & msg)
{
  return iw_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<iw_interfaces::msg::Chessboard>()
{
  return "iw_interfaces::msg::Chessboard";
}

template<>
inline const char * name<iw_interfaces::msg::Chessboard>()
{
  return "iw_interfaces/msg/Chessboard";
}

template<>
struct has_fixed_size<iw_interfaces::msg::Chessboard>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<iw_interfaces::msg::Chessboard>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<iw_interfaces::msg::Chessboard>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IW_INTERFACES__MSG__DETAIL__CHESSBOARD__TRAITS_HPP_
