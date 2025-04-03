// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from iw_interfaces:msg/PlaneCoordinate.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "iw_interfaces/msg/detail/plane_coordinate__struct.hpp"
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

void PlaneCoordinate_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) iw_interfaces::msg::PlaneCoordinate(_init);
}

void PlaneCoordinate_fini_function(void * message_memory)
{
  auto typed_message = static_cast<iw_interfaces::msg::PlaneCoordinate *>(message_memory);
  typed_message->~PlaneCoordinate();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlaneCoordinate_message_member_array[2] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces::msg::PlaneCoordinate, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces::msg::PlaneCoordinate, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlaneCoordinate_message_members = {
  "iw_interfaces::msg",  // message namespace
  "PlaneCoordinate",  // message name
  2,  // number of fields
  sizeof(iw_interfaces::msg::PlaneCoordinate),
  PlaneCoordinate_message_member_array,  // message members
  PlaneCoordinate_init_function,  // function to initialize message memory (memory has to be allocated)
  PlaneCoordinate_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlaneCoordinate_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlaneCoordinate_message_members,
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
get_message_type_support_handle<iw_interfaces::msg::PlaneCoordinate>()
{
  return &::iw_interfaces::msg::rosidl_typesupport_introspection_cpp::PlaneCoordinate_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iw_interfaces, msg, PlaneCoordinate)() {
  return &::iw_interfaces::msg::rosidl_typesupport_introspection_cpp::PlaneCoordinate_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
