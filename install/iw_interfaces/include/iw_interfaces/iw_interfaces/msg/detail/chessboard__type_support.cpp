// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from iw_interfaces:msg/Chessboard.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "iw_interfaces/msg/detail/chessboard__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace iw_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Chessboard_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) iw_interfaces::msg::Chessboard(_init);
}

void Chessboard_fini_function(void * message_memory)
{
  auto typed_message = static_cast<iw_interfaces::msg::Chessboard *>(message_memory);
  typed_message->~Chessboard();
}

size_t size_function__Chessboard__robots(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<iw_interfaces::msg::Robot> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Chessboard__robots(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<iw_interfaces::msg::Robot> *>(untyped_member);
  return &member[index];
}

void * get_function__Chessboard__robots(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<iw_interfaces::msg::Robot> *>(untyped_member);
  return &member[index];
}

void fetch_function__Chessboard__robots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const iw_interfaces::msg::Robot *>(
    get_const_function__Chessboard__robots(untyped_member, index));
  auto & value = *reinterpret_cast<iw_interfaces::msg::Robot *>(untyped_value);
  value = item;
}

void assign_function__Chessboard__robots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<iw_interfaces::msg::Robot *>(
    get_function__Chessboard__robots(untyped_member, index));
  const auto & value = *reinterpret_cast<const iw_interfaces::msg::Robot *>(untyped_value);
  item = value;
}

void resize_function__Chessboard__robots(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<iw_interfaces::msg::Robot> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Chessboard__terrains(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<iw_interfaces::msg::Terrain> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Chessboard__terrains(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<iw_interfaces::msg::Terrain> *>(untyped_member);
  return &member[index];
}

void * get_function__Chessboard__terrains(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<iw_interfaces::msg::Terrain> *>(untyped_member);
  return &member[index];
}

void fetch_function__Chessboard__terrains(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const iw_interfaces::msg::Terrain *>(
    get_const_function__Chessboard__terrains(untyped_member, index));
  auto & value = *reinterpret_cast<iw_interfaces::msg::Terrain *>(untyped_value);
  value = item;
}

void assign_function__Chessboard__terrains(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<iw_interfaces::msg::Terrain *>(
    get_function__Chessboard__terrains(untyped_member, index));
  const auto & value = *reinterpret_cast<const iw_interfaces::msg::Terrain *>(untyped_value);
  item = value;
}

void resize_function__Chessboard__terrains(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<iw_interfaces::msg::Terrain> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Chessboard__architectures(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<iw_interfaces::msg::Architecture> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Chessboard__architectures(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<iw_interfaces::msg::Architecture> *>(untyped_member);
  return &member[index];
}

void * get_function__Chessboard__architectures(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<iw_interfaces::msg::Architecture> *>(untyped_member);
  return &member[index];
}

void fetch_function__Chessboard__architectures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const iw_interfaces::msg::Architecture *>(
    get_const_function__Chessboard__architectures(untyped_member, index));
  auto & value = *reinterpret_cast<iw_interfaces::msg::Architecture *>(untyped_value);
  value = item;
}

void assign_function__Chessboard__architectures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<iw_interfaces::msg::Architecture *>(
    get_function__Chessboard__architectures(untyped_member, index));
  const auto & value = *reinterpret_cast<const iw_interfaces::msg::Architecture *>(untyped_value);
  item = value;
}

void resize_function__Chessboard__architectures(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<iw_interfaces::msg::Architecture> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Chessboard_message_member_array[6] = {
  {
    "faction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces::msg::Chessboard, faction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "initialed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces::msg::Chessboard, initialed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces::msg::Chessboard, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robots",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<iw_interfaces::msg::Robot>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces::msg::Chessboard, robots),  // bytes offset in struct
    nullptr,  // default value
    size_function__Chessboard__robots,  // size() function pointer
    get_const_function__Chessboard__robots,  // get_const(index) function pointer
    get_function__Chessboard__robots,  // get(index) function pointer
    fetch_function__Chessboard__robots,  // fetch(index, &value) function pointer
    assign_function__Chessboard__robots,  // assign(index, value) function pointer
    resize_function__Chessboard__robots  // resize(index) function pointer
  },
  {
    "terrains",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<iw_interfaces::msg::Terrain>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces::msg::Chessboard, terrains),  // bytes offset in struct
    nullptr,  // default value
    size_function__Chessboard__terrains,  // size() function pointer
    get_const_function__Chessboard__terrains,  // get_const(index) function pointer
    get_function__Chessboard__terrains,  // get(index) function pointer
    fetch_function__Chessboard__terrains,  // fetch(index, &value) function pointer
    assign_function__Chessboard__terrains,  // assign(index, value) function pointer
    resize_function__Chessboard__terrains  // resize(index) function pointer
  },
  {
    "architectures",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<iw_interfaces::msg::Architecture>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces::msg::Chessboard, architectures),  // bytes offset in struct
    nullptr,  // default value
    size_function__Chessboard__architectures,  // size() function pointer
    get_const_function__Chessboard__architectures,  // get_const(index) function pointer
    get_function__Chessboard__architectures,  // get(index) function pointer
    fetch_function__Chessboard__architectures,  // fetch(index, &value) function pointer
    assign_function__Chessboard__architectures,  // assign(index, value) function pointer
    resize_function__Chessboard__architectures  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Chessboard_message_members = {
  "iw_interfaces::msg",  // message namespace
  "Chessboard",  // message name
  6,  // number of fields
  sizeof(iw_interfaces::msg::Chessboard),
  Chessboard_message_member_array,  // message members
  Chessboard_init_function,  // function to initialize message memory (memory has to be allocated)
  Chessboard_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Chessboard_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Chessboard_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace iw_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<iw_interfaces::msg::Chessboard>()
{
  return &::iw_interfaces::msg::rosidl_typesupport_introspection_cpp::Chessboard_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iw_interfaces, msg, Chessboard)() {
  return &::iw_interfaces::msg::rosidl_typesupport_introspection_cpp::Chessboard_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
