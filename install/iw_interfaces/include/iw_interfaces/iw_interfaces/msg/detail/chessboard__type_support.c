// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from iw_interfaces:msg/Chessboard.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "iw_interfaces/msg/detail/chessboard__rosidl_typesupport_introspection_c.h"
#include "iw_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "iw_interfaces/msg/detail/chessboard__functions.h"
#include "iw_interfaces/msg/detail/chessboard__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `robots`
#include "iw_interfaces/msg/robot.h"
// Member `robots`
#include "iw_interfaces/msg/detail/robot__rosidl_typesupport_introspection_c.h"
// Member `terrains`
#include "iw_interfaces/msg/terrain.h"
// Member `terrains`
#include "iw_interfaces/msg/detail/terrain__rosidl_typesupport_introspection_c.h"
// Member `architectures`
#include "iw_interfaces/msg/architecture.h"
// Member `architectures`
#include "iw_interfaces/msg/detail/architecture__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__Chessboard_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iw_interfaces__msg__Chessboard__init(message_memory);
}

void iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__Chessboard_fini_function(void * message_memory)
{
  iw_interfaces__msg__Chessboard__fini(message_memory);
}

size_t iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__size_function__Chessboard__robots(
  const void * untyped_member)
{
  const iw_interfaces__msg__Robot__Sequence * member =
    (const iw_interfaces__msg__Robot__Sequence *)(untyped_member);
  return member->size;
}

const void * iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_const_function__Chessboard__robots(
  const void * untyped_member, size_t index)
{
  const iw_interfaces__msg__Robot__Sequence * member =
    (const iw_interfaces__msg__Robot__Sequence *)(untyped_member);
  return &member->data[index];
}

void * iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_function__Chessboard__robots(
  void * untyped_member, size_t index)
{
  iw_interfaces__msg__Robot__Sequence * member =
    (iw_interfaces__msg__Robot__Sequence *)(untyped_member);
  return &member->data[index];
}

void iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__fetch_function__Chessboard__robots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const iw_interfaces__msg__Robot * item =
    ((const iw_interfaces__msg__Robot *)
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_const_function__Chessboard__robots(untyped_member, index));
  iw_interfaces__msg__Robot * value =
    (iw_interfaces__msg__Robot *)(untyped_value);
  *value = *item;
}

void iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__assign_function__Chessboard__robots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  iw_interfaces__msg__Robot * item =
    ((iw_interfaces__msg__Robot *)
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_function__Chessboard__robots(untyped_member, index));
  const iw_interfaces__msg__Robot * value =
    (const iw_interfaces__msg__Robot *)(untyped_value);
  *item = *value;
}

bool iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__resize_function__Chessboard__robots(
  void * untyped_member, size_t size)
{
  iw_interfaces__msg__Robot__Sequence * member =
    (iw_interfaces__msg__Robot__Sequence *)(untyped_member);
  iw_interfaces__msg__Robot__Sequence__fini(member);
  return iw_interfaces__msg__Robot__Sequence__init(member, size);
}

size_t iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__size_function__Chessboard__terrains(
  const void * untyped_member)
{
  const iw_interfaces__msg__Terrain__Sequence * member =
    (const iw_interfaces__msg__Terrain__Sequence *)(untyped_member);
  return member->size;
}

const void * iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_const_function__Chessboard__terrains(
  const void * untyped_member, size_t index)
{
  const iw_interfaces__msg__Terrain__Sequence * member =
    (const iw_interfaces__msg__Terrain__Sequence *)(untyped_member);
  return &member->data[index];
}

void * iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_function__Chessboard__terrains(
  void * untyped_member, size_t index)
{
  iw_interfaces__msg__Terrain__Sequence * member =
    (iw_interfaces__msg__Terrain__Sequence *)(untyped_member);
  return &member->data[index];
}

void iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__fetch_function__Chessboard__terrains(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const iw_interfaces__msg__Terrain * item =
    ((const iw_interfaces__msg__Terrain *)
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_const_function__Chessboard__terrains(untyped_member, index));
  iw_interfaces__msg__Terrain * value =
    (iw_interfaces__msg__Terrain *)(untyped_value);
  *value = *item;
}

void iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__assign_function__Chessboard__terrains(
  void * untyped_member, size_t index, const void * untyped_value)
{
  iw_interfaces__msg__Terrain * item =
    ((iw_interfaces__msg__Terrain *)
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_function__Chessboard__terrains(untyped_member, index));
  const iw_interfaces__msg__Terrain * value =
    (const iw_interfaces__msg__Terrain *)(untyped_value);
  *item = *value;
}

bool iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__resize_function__Chessboard__terrains(
  void * untyped_member, size_t size)
{
  iw_interfaces__msg__Terrain__Sequence * member =
    (iw_interfaces__msg__Terrain__Sequence *)(untyped_member);
  iw_interfaces__msg__Terrain__Sequence__fini(member);
  return iw_interfaces__msg__Terrain__Sequence__init(member, size);
}

size_t iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__size_function__Chessboard__architectures(
  const void * untyped_member)
{
  const iw_interfaces__msg__Architecture__Sequence * member =
    (const iw_interfaces__msg__Architecture__Sequence *)(untyped_member);
  return member->size;
}

const void * iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_const_function__Chessboard__architectures(
  const void * untyped_member, size_t index)
{
  const iw_interfaces__msg__Architecture__Sequence * member =
    (const iw_interfaces__msg__Architecture__Sequence *)(untyped_member);
  return &member->data[index];
}

void * iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_function__Chessboard__architectures(
  void * untyped_member, size_t index)
{
  iw_interfaces__msg__Architecture__Sequence * member =
    (iw_interfaces__msg__Architecture__Sequence *)(untyped_member);
  return &member->data[index];
}

void iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__fetch_function__Chessboard__architectures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const iw_interfaces__msg__Architecture * item =
    ((const iw_interfaces__msg__Architecture *)
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_const_function__Chessboard__architectures(untyped_member, index));
  iw_interfaces__msg__Architecture * value =
    (iw_interfaces__msg__Architecture *)(untyped_value);
  *value = *item;
}

void iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__assign_function__Chessboard__architectures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  iw_interfaces__msg__Architecture * item =
    ((iw_interfaces__msg__Architecture *)
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_function__Chessboard__architectures(untyped_member, index));
  const iw_interfaces__msg__Architecture * value =
    (const iw_interfaces__msg__Architecture *)(untyped_value);
  *item = *value;
}

bool iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__resize_function__Chessboard__architectures(
  void * untyped_member, size_t size)
{
  iw_interfaces__msg__Architecture__Sequence * member =
    (iw_interfaces__msg__Architecture__Sequence *)(untyped_member);
  iw_interfaces__msg__Architecture__Sequence__fini(member);
  return iw_interfaces__msg__Architecture__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__Chessboard_message_member_array[6] = {
  {
    "faction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces__msg__Chessboard, faction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initialed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces__msg__Chessboard, initialed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces__msg__Chessboard, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces__msg__Chessboard, robots),  // bytes offset in struct
    NULL,  // default value
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__size_function__Chessboard__robots,  // size() function pointer
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_const_function__Chessboard__robots,  // get_const(index) function pointer
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_function__Chessboard__robots,  // get(index) function pointer
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__fetch_function__Chessboard__robots,  // fetch(index, &value) function pointer
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__assign_function__Chessboard__robots,  // assign(index, value) function pointer
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__resize_function__Chessboard__robots  // resize(index) function pointer
  },
  {
    "terrains",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces__msg__Chessboard, terrains),  // bytes offset in struct
    NULL,  // default value
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__size_function__Chessboard__terrains,  // size() function pointer
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_const_function__Chessboard__terrains,  // get_const(index) function pointer
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_function__Chessboard__terrains,  // get(index) function pointer
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__fetch_function__Chessboard__terrains,  // fetch(index, &value) function pointer
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__assign_function__Chessboard__terrains,  // assign(index, value) function pointer
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__resize_function__Chessboard__terrains  // resize(index) function pointer
  },
  {
    "architectures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iw_interfaces__msg__Chessboard, architectures),  // bytes offset in struct
    NULL,  // default value
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__size_function__Chessboard__architectures,  // size() function pointer
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_const_function__Chessboard__architectures,  // get_const(index) function pointer
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__get_function__Chessboard__architectures,  // get(index) function pointer
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__fetch_function__Chessboard__architectures,  // fetch(index, &value) function pointer
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__assign_function__Chessboard__architectures,  // assign(index, value) function pointer
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__resize_function__Chessboard__architectures  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__Chessboard_message_members = {
  "iw_interfaces__msg",  // message namespace
  "Chessboard",  // message name
  6,  // number of fields
  sizeof(iw_interfaces__msg__Chessboard),
  iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__Chessboard_message_member_array,  // message members
  iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__Chessboard_init_function,  // function to initialize message memory (memory has to be allocated)
  iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__Chessboard_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__Chessboard_message_type_support_handle = {
  0,
  &iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__Chessboard_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iw_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iw_interfaces, msg, Chessboard)() {
  iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__Chessboard_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__Chessboard_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iw_interfaces, msg, Robot)();
  iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__Chessboard_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iw_interfaces, msg, Terrain)();
  iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__Chessboard_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iw_interfaces, msg, Architecture)();
  if (!iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__Chessboard_message_type_support_handle.typesupport_identifier) {
    iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__Chessboard_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &iw_interfaces__msg__Chessboard__rosidl_typesupport_introspection_c__Chessboard_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
