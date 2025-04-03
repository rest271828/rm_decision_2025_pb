// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from iw_interfaces:msg/Prism.idl
// generated code does not contain a copyright notice
#include "iw_interfaces/msg/detail/prism__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "iw_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "iw_interfaces/msg/detail/prism__struct.h"
#include "iw_interfaces/msg/detail/prism__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose_stamped__functions.h"  // self_pose, track_pose

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_iw_interfaces
size_t get_serialized_size_geometry_msgs__msg__PoseStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_iw_interfaces
size_t max_serialized_size_geometry_msgs__msg__PoseStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_iw_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped)();


using _Prism__ros_msg_type = iw_interfaces__msg__Prism;

static bool _Prism__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Prism__ros_msg_type * ros_message = static_cast<const _Prism__ros_msg_type *>(untyped_ros_message);
  // Field name: self_id
  {
    cdr << ros_message->self_id;
  }

  // Field name: self_hp
  {
    cdr << ros_message->self_hp;
  }

  // Field name: self_ammo
  {
    cdr << ros_message->self_ammo;
  }

  // Field name: self_shooter_heat
  {
    cdr << ros_message->self_shooter_heat;
  }

  // Field name: self_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->self_pose, cdr))
    {
      return false;
    }
  }

  // Field name: track_tracking
  {
    cdr << (ros_message->track_tracking ? true : false);
  }

  // Field name: track_id
  {
    cdr << ros_message->track_id;
  }

  // Field name: track_hp
  {
    cdr << ros_message->track_hp;
  }

  // Field name: track_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->track_pose, cdr))
    {
      return false;
    }
  }

  // Field name: game_game_start
  {
    cdr << (ros_message->game_game_start ? true : false);
  }

  // Field name: game_buy_ammo_ordered
  {
    cdr << (ros_message->game_buy_ammo_ordered ? true : false);
  }

  // Field name: game_coins
  {
    cdr << ros_message->game_coins;
  }

  // Field name: game_projectile_allowance
  {
    cdr << ros_message->game_projectile_allowance;
  }

  // Field name: call_target_x
  {
    cdr << ros_message->call_target_x;
  }

  // Field name: call_target_y
  {
    cdr << ros_message->call_target_y;
  }

  // Field name: call_is_called
  {
    cdr << (ros_message->call_is_called ? true : false);
  }

  return true;
}

static bool _Prism__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Prism__ros_msg_type * ros_message = static_cast<_Prism__ros_msg_type *>(untyped_ros_message);
  // Field name: self_id
  {
    cdr >> ros_message->self_id;
  }

  // Field name: self_hp
  {
    cdr >> ros_message->self_hp;
  }

  // Field name: self_ammo
  {
    cdr >> ros_message->self_ammo;
  }

  // Field name: self_shooter_heat
  {
    cdr >> ros_message->self_shooter_heat;
  }

  // Field name: self_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->self_pose))
    {
      return false;
    }
  }

  // Field name: track_tracking
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->track_tracking = tmp ? true : false;
  }

  // Field name: track_id
  {
    cdr >> ros_message->track_id;
  }

  // Field name: track_hp
  {
    cdr >> ros_message->track_hp;
  }

  // Field name: track_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->track_pose))
    {
      return false;
    }
  }

  // Field name: game_game_start
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->game_game_start = tmp ? true : false;
  }

  // Field name: game_buy_ammo_ordered
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->game_buy_ammo_ordered = tmp ? true : false;
  }

  // Field name: game_coins
  {
    cdr >> ros_message->game_coins;
  }

  // Field name: game_projectile_allowance
  {
    cdr >> ros_message->game_projectile_allowance;
  }

  // Field name: call_target_x
  {
    cdr >> ros_message->call_target_x;
  }

  // Field name: call_target_y
  {
    cdr >> ros_message->call_target_y;
  }

  // Field name: call_is_called
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->call_is_called = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iw_interfaces
size_t get_serialized_size_iw_interfaces__msg__Prism(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Prism__ros_msg_type * ros_message = static_cast<const _Prism__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name self_id
  {
    size_t item_size = sizeof(ros_message->self_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name self_hp
  {
    size_t item_size = sizeof(ros_message->self_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name self_ammo
  {
    size_t item_size = sizeof(ros_message->self_ammo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name self_shooter_heat
  {
    size_t item_size = sizeof(ros_message->self_shooter_heat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name self_pose

  current_alignment += get_serialized_size_geometry_msgs__msg__PoseStamped(
    &(ros_message->self_pose), current_alignment);
  // field.name track_tracking
  {
    size_t item_size = sizeof(ros_message->track_tracking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name track_id
  {
    size_t item_size = sizeof(ros_message->track_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name track_hp
  {
    size_t item_size = sizeof(ros_message->track_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name track_pose

  current_alignment += get_serialized_size_geometry_msgs__msg__PoseStamped(
    &(ros_message->track_pose), current_alignment);
  // field.name game_game_start
  {
    size_t item_size = sizeof(ros_message->game_game_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name game_buy_ammo_ordered
  {
    size_t item_size = sizeof(ros_message->game_buy_ammo_ordered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name game_coins
  {
    size_t item_size = sizeof(ros_message->game_coins);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name game_projectile_allowance
  {
    size_t item_size = sizeof(ros_message->game_projectile_allowance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name call_target_x
  {
    size_t item_size = sizeof(ros_message->call_target_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name call_target_y
  {
    size_t item_size = sizeof(ros_message->call_target_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name call_is_called
  {
    size_t item_size = sizeof(ros_message->call_is_called);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Prism__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_iw_interfaces__msg__Prism(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_iw_interfaces
size_t max_serialized_size_iw_interfaces__msg__Prism(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: self_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: self_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: self_ammo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: self_shooter_heat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: self_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__PoseStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: track_tracking
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: track_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: track_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: track_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__PoseStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: game_game_start
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: game_buy_ammo_ordered
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: game_coins
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: game_projectile_allowance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: call_target_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: call_target_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: call_is_called
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = iw_interfaces__msg__Prism;
    is_plain =
      (
      offsetof(DataType, call_is_called) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Prism__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_iw_interfaces__msg__Prism(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Prism = {
  "iw_interfaces::msg",
  "Prism",
  _Prism__cdr_serialize,
  _Prism__cdr_deserialize,
  _Prism__get_serialized_size,
  _Prism__max_serialized_size
};

static rosidl_message_type_support_t _Prism__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Prism,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, iw_interfaces, msg, Prism)() {
  return &_Prism__type_support;
}

#if defined(__cplusplus)
}
#endif
