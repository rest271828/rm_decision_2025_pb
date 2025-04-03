// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from iw_interfaces:msg/Architecture.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "iw_interfaces/msg/detail/architecture__rosidl_typesupport_introspection_c.h"
#include "iw_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "iw_interfaces/msg/detail/architecture__functions.h"
#include "iw_interfaces/msg/detail/architecture__struct.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `vertices`
#include "iw_interfaces/msg/plane_coordinate.h"
// Member `vertices`
#include "iw_interfaces/msg/detail/plane_coordinate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__Architecture_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iw_interfaces__msg__Architecture__init(message_memory);
}

void iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__Architecture_fini_function(void * message_memory)
{
  iw_interfaces__msg__Architecture__fini(message_memory);
}

size_t iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__size_function__Architecture__vertices(
  const void * untyped_member)
{
  const iw_interfaces__msg__PlaneCoordinate__Sequence * member =
    (const iw_interfaces__msg__PlaneCoordinate__Sequence *)(untyped_member);
  return member->size;
}

const void * iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__get_const_function__Architecture__vertices(
  const void * untyped_member, size_t index)
{
  const iw_interfaces__msg__PlaneCoordinate__Sequence * member =
    (const iw_interfaces__msg__PlaneCoordinate__Sequence *)(untyped_member);
  return &member->data[index];
}

void * iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__get_function__Architecture__vertices(
  void * untyped_member, size_t index)
{
  iw_interfaces__msg__PlaneCoordinate__Sequence * member =
    (iw_interfaces__msg__PlaneCoordinate__Sequence *)(untyped_member);
  return &member->data[index];
}

void iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__fetch_function__Architecture__vertices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const iw_interfaces__msg__PlaneCoordinate * item =
    ((const iw_interfaces__msg__PlaneCoordinate *)
    iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__get_const_function__Architecture__vertices(untyped_member, index));
  iw_interfaces__msg__PlaneCoordinate * value =
    (iw_interfaces__msg__PlaneCoordinate *)(untyped_value);
  *value = *item;
}

void iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__assign_function__Architecture__vertices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  iw_interfaces__msg__PlaneCoordinate * item =
    ((iw_interfaces__msg__PlaneCoordinate *)
    iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__get_function__Architecture__vertices(untyped_member, index));
  const iw_interfaces__msg__PlaneCoordinate * value =
    (const iw_interfaces__msg__PlaneCoordinate *)(untyped_value);
  *item = *value;
}

bool iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__resize_function__Architecture__vertices(
  void * untyped_member, size_t size)
{
  iw_interfaces__msg__PlaneCoordinate__Sequence * member =
    (iw_interfaces__msg__PlaneCoordinate__Sequence *)(untyped_member);
  iw_interfaces__msg__PlaneCoordinate__Sequence__fini(member);
  return iw_interfaces__msg__PlaneCoordinate__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__Architecture_message_member_array[4] = {
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces__msg__Architecture, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vertices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces__msg__Architecture, vertices),  // bytes offset in struct
    NULL,  // default value
    iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__size_function__Architecture__vertices,  // size() function pointer
    iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__get_const_function__Architecture__vertices,  // get_const(index) function pointer
    iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__get_function__Architecture__vertices,  // get(index) function pointer
    iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__fetch_function__Architecture__vertices,  // fetch(index, &value) function pointer
    iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__assign_function__Architecture__vertices,  // assign(index, value) function pointer
    iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__resize_function__Architecture__vertices  // resize(index) function pointer
  },
  {
    "hp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces__msg__Architecture, hp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "faction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces__msg__Architecture, faction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__Architecture_message_members = {
  "iw_interfaces__msg",  // message namespace
  "Architecture",  // message name
  4,  // number of fields
  sizeof(iw_interfaces__msg__Architecture),
  iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__Architecture_message_member_array,  // message members
  iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__Architecture_init_function,  // function to initialize message memory (memory has to be allocated)
  iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__Architecture_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__Architecture_message_type_support_handle = {
  0,
  &iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__Architecture_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iw_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iw_interfaces, msg, Architecture)() {
  iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__Architecture_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iw_interfaces, msg, PlaneCoordinate)();
  if (!iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__Architecture_message_type_support_handle.typesupport_identifier) {
    iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__Architecture_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iw_interfaces__msg__Architecture__rosidl_typesupport_introspection_c__Architecture_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
