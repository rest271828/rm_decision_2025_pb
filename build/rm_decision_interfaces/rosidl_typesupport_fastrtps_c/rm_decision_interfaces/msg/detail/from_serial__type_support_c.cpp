// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_decision_interfaces:msg/FromSerial.idl
// generated code does not contain a copyright notice
#include "rm_decision_interfaces/msg/detail/from_serial__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_decision_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_decision_interfaces/msg/detail/from_serial__struct.h"
#include "rm_decision_interfaces/msg/detail/from_serial__functions.h"
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


// forward declare type support functions


using _FromSerial__ros_msg_type = rm_decision_interfaces__msg__FromSerial;

static bool _FromSerial__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FromSerial__ros_msg_type * ros_message = static_cast<const _FromSerial__ros_msg_type *>(untyped_ros_message);
  // Field name: gamestart
  {
    cdr << (ros_message->gamestart ? true : false);
  }

  // Field name: color
  {
    cdr << ros_message->color;
  }

  // Field name: projectile_allowance_17mm
  {
    cdr << ros_message->projectile_allowance_17mm;
  }

  // Field name: remaining_gold_coin
  {
    cdr << ros_message->remaining_gold_coin;
  }

  // Field name: supply_robot_id
  {
    cdr << ros_message->supply_robot_id;
  }

  // Field name: supply_projectile_num
  {
    cdr << ros_message->supply_projectile_num;
  }

  // Field name: red_7
  {
    cdr << ros_message->red_7;
  }

  // Field name: red_outpost_hp
  {
    cdr << ros_message->red_outpost_hp;
  }

  // Field name: red_base_hp
  {
    cdr << ros_message->red_base_hp;
  }

  // Field name: blue_7
  {
    cdr << ros_message->blue_7;
  }

  // Field name: blue_outpost_hp
  {
    cdr << ros_message->blue_outpost_hp;
  }

  // Field name: blue_base_hp
  {
    cdr << ros_message->blue_base_hp;
  }

  // Field name: target_pos_x
  {
    cdr << ros_message->target_pos_x;
  }

  // Field name: target_pos_y
  {
    cdr << ros_message->target_pos_y;
  }

  // Field name: cmd_key
  {
    cdr << ros_message->cmd_key;
  }

  return true;
}

static bool _FromSerial__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FromSerial__ros_msg_type * ros_message = static_cast<_FromSerial__ros_msg_type *>(untyped_ros_message);
  // Field name: gamestart
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gamestart = tmp ? true : false;
  }

  // Field name: color
  {
    cdr >> ros_message->color;
  }

  // Field name: projectile_allowance_17mm
  {
    cdr >> ros_message->projectile_allowance_17mm;
  }

  // Field name: remaining_gold_coin
  {
    cdr >> ros_message->remaining_gold_coin;
  }

  // Field name: supply_robot_id
  {
    cdr >> ros_message->supply_robot_id;
  }

  // Field name: supply_projectile_num
  {
    cdr >> ros_message->supply_projectile_num;
  }

  // Field name: red_7
  {
    cdr >> ros_message->red_7;
  }

  // Field name: red_outpost_hp
  {
    cdr >> ros_message->red_outpost_hp;
  }

  // Field name: red_base_hp
  {
    cdr >> ros_message->red_base_hp;
  }

  // Field name: blue_7
  {
    cdr >> ros_message->blue_7;
  }

  // Field name: blue_outpost_hp
  {
    cdr >> ros_message->blue_outpost_hp;
  }

  // Field name: blue_base_hp
  {
    cdr >> ros_message->blue_base_hp;
  }

  // Field name: target_pos_x
  {
    cdr >> ros_message->target_pos_x;
  }

  // Field name: target_pos_y
  {
    cdr >> ros_message->target_pos_y;
  }

  // Field name: cmd_key
  {
    cdr >> ros_message->cmd_key;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_decision_interfaces
size_t get_serialized_size_rm_decision_interfaces__msg__FromSerial(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FromSerial__ros_msg_type * ros_message = static_cast<const _FromSerial__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gamestart
  {
    size_t item_size = sizeof(ros_message->gamestart);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name color
  {
    size_t item_size = sizeof(ros_message->color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name projectile_allowance_17mm
  {
    size_t item_size = sizeof(ros_message->projectile_allowance_17mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remaining_gold_coin
  {
    size_t item_size = sizeof(ros_message->remaining_gold_coin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name supply_robot_id
  {
    size_t item_size = sizeof(ros_message->supply_robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name supply_projectile_num
  {
    size_t item_size = sizeof(ros_message->supply_projectile_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_7
  {
    size_t item_size = sizeof(ros_message->red_7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_outpost_hp
  {
    size_t item_size = sizeof(ros_message->red_outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_base_hp
  {
    size_t item_size = sizeof(ros_message->red_base_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_7
  {
    size_t item_size = sizeof(ros_message->blue_7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_outpost_hp
  {
    size_t item_size = sizeof(ros_message->blue_outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_base_hp
  {
    size_t item_size = sizeof(ros_message->blue_base_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_pos_x
  {
    size_t item_size = sizeof(ros_message->target_pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_pos_y
  {
    size_t item_size = sizeof(ros_message->target_pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_key
  {
    size_t item_size = sizeof(ros_message->cmd_key);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FromSerial__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_decision_interfaces__msg__FromSerial(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_decision_interfaces
size_t max_serialized_size_rm_decision_interfaces__msg__FromSerial(
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

  // member: gamestart
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: color
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: projectile_allowance_17mm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: remaining_gold_coin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: supply_robot_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: supply_projectile_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: red_7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_outpost_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_base_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_outpost_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_base_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: target_pos_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: target_pos_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cmd_key
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
    using DataType = rm_decision_interfaces__msg__FromSerial;
    is_plain =
      (
      offsetof(DataType, cmd_key) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FromSerial__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_decision_interfaces__msg__FromSerial(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FromSerial = {
  "rm_decision_interfaces::msg",
  "FromSerial",
  _FromSerial__cdr_serialize,
  _FromSerial__cdr_deserialize,
  _FromSerial__get_serialized_size,
  _FromSerial__max_serialized_size
};

static rosidl_message_type_support_t _FromSerial__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FromSerial,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_decision_interfaces, msg, FromSerial)() {
  return &_FromSerial__type_support;
}

#if defined(__cplusplus)
}
#endif
