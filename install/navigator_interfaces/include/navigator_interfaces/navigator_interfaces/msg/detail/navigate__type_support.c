// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from navigator_interfaces:msg/Navigate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "navigator_interfaces/msg/detail/navigate__rosidl_typesupport_introspection_c.h"
#include "navigator_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "navigator_interfaces/msg/detail/navigate__functions.h"
#include "navigator_interfaces/msg/detail/navigate__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void navigator_interfaces__msg__Navigate__rosidl_typesupport_introspection_c__Navigate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  navigator_interfaces__msg__Navigate__init(message_memory);
}

void navigator_interfaces__msg__Navigate__rosidl_typesupport_introspection_c__Navigate_fini_function(void * message_memory)
{
  navigator_interfaces__msg__Navigate__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember navigator_interfaces__msg__Navigate__rosidl_typesupport_introspection_c__Navigate_message_member_array[2] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigator_interfaces__msg__Navigate, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "instant",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigator_interfaces__msg__Navigate, instant),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers navigator_interfaces__msg__Navigate__rosidl_typesupport_introspection_c__Navigate_message_members = {
  "navigator_interfaces__msg",  // message namespace
  "Navigate",  // message name
  2,  // number of fields
  sizeof(navigator_interfaces__msg__Navigate),
  navigator_interfaces__msg__Navigate__rosidl_typesupport_introspection_c__Navigate_message_member_array,  // message members
  navigator_interfaces__msg__Navigate__rosidl_typesupport_introspection_c__Navigate_init_function,  // function to initialize message memory (memory has to be allocated)
  navigator_interfaces__msg__Navigate__rosidl_typesupport_introspection_c__Navigate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t navigator_interfaces__msg__Navigate__rosidl_typesupport_introspection_c__Navigate_message_type_support_handle = {
  0,
  &navigator_interfaces__msg__Navigate__rosidl_typesupport_introspection_c__Navigate_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navigator_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigator_interfaces, msg, Navigate)() {
  navigator_interfaces__msg__Navigate__rosidl_typesupport_introspection_c__Navigate_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!navigator_interfaces__msg__Navigate__rosidl_typesupport_introspection_c__Navigate_message_type_support_handle.typesupport_identifier) {
    navigator_interfaces__msg__Navigate__rosidl_typesupport_introspection_c__Navigate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &navigator_interfaces__msg__Navigate__rosidl_typesupport_introspection_c__Navigate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
