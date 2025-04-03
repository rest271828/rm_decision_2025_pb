// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from iw_interfaces:msg/Prism.idl
// generated code does not contain a copyright notice
#include "iw_interfaces/msg/detail/prism__rosidl_typesupport_fastrtps_cpp.hpp"
#include "iw_interfaces/msg/detail/prism__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::PoseStamped &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::PoseStamped &);
size_t get_serialized_size(
  const geometry_msgs::msg::PoseStamped &,
  size_t current_alignment);
size_t
max_serialized_size_PoseStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

// functions for geometry_msgs::msg::PoseStamped already declared above


namespace iw_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iw_interfaces
cdr_serialize(
  const iw_interfaces::msg::Prism & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: self_id
  cdr << ros_message.self_id;
  // Member: self_hp
  cdr << ros_message.self_hp;
  // Member: self_ammo
  cdr << ros_message.self_ammo;
  // Member: self_shooter_heat
  cdr << ros_message.self_shooter_heat;
  // Member: self_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.self_pose,
    cdr);
  // Member: track_tracking
  cdr << (ros_message.track_tracking ? true : false);
  // Member: track_id
  cdr << ros_message.track_id;
  // Member: track_hp
  cdr << ros_message.track_hp;
  // Member: track_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.track_pose,
    cdr);
  // Member: game_game_start
  cdr << (ros_message.game_game_start ? true : false);
  // Member: game_buy_ammo_ordered
  cdr << (ros_message.game_buy_ammo_ordered ? true : false);
  // Member: game_coins
  cdr << ros_message.game_coins;
  // Member: game_projectile_allowance
  cdr << ros_message.game_projectile_allowance;
  // Member: call_target_x
  cdr << ros_message.call_target_x;
  // Member: call_target_y
  cdr << ros_message.call_target_y;
  // Member: call_is_called
  cdr << (ros_message.call_is_called ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iw_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  iw_interfaces::msg::Prism & ros_message)
{
  // Member: self_id
  cdr >> ros_message.self_id;

  // Member: self_hp
  cdr >> ros_message.self_hp;

  // Member: self_ammo
  cdr >> ros_message.self_ammo;

  // Member: self_shooter_heat
  cdr >> ros_message.self_shooter_heat;

  // Member: self_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.self_pose);

  // Member: track_tracking
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.track_tracking = tmp ? true : false;
  }

  // Member: track_id
  cdr >> ros_message.track_id;

  // Member: track_hp
  cdr >> ros_message.track_hp;

  // Member: track_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.track_pose);

  // Member: game_game_start
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.game_game_start = tmp ? true : false;
  }

  // Member: game_buy_ammo_ordered
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.game_buy_ammo_ordered = tmp ? true : false;
  }

  // Member: game_coins
  cdr >> ros_message.game_coins;

  // Member: game_projectile_allowance
  cdr >> ros_message.game_projectile_allowance;

  // Member: call_target_x
  cdr >> ros_message.call_target_x;

  // Member: call_target_y
  cdr >> ros_message.call_target_y;

  // Member: call_is_called
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.call_is_called = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iw_interfaces
get_serialized_size(
  const iw_interfaces::msg::Prism & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: self_id
  {
    size_t item_size = sizeof(ros_message.self_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: self_hp
  {
    size_t item_size = sizeof(ros_message.self_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: self_ammo
  {
    size_t item_size = sizeof(ros_message.self_ammo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: self_shooter_heat
  {
    size_t item_size = sizeof(ros_message.self_shooter_heat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: self_pose

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.self_pose, current_alignment);
  // Member: track_tracking
  {
    size_t item_size = sizeof(ros_message.track_tracking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: track_id
  {
    size_t item_size = sizeof(ros_message.track_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: track_hp
  {
    size_t item_size = sizeof(ros_message.track_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: track_pose

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.track_pose, current_alignment);
  // Member: game_game_start
  {
    size_t item_size = sizeof(ros_message.game_game_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: game_buy_ammo_ordered
  {
    size_t item_size = sizeof(ros_message.game_buy_ammo_ordered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: game_coins
  {
    size_t item_size = sizeof(ros_message.game_coins);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: game_projectile_allowance
  {
    size_t item_size = sizeof(ros_message.game_projectile_allowance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: call_target_x
  {
    size_t item_size = sizeof(ros_message.call_target_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: call_target_y
  {
    size_t item_size = sizeof(ros_message.call_target_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: call_is_called
  {
    size_t item_size = sizeof(ros_message.call_is_called);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_iw_interfaces
max_serialized_size_Prism(
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


  // Member: self_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: self_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: self_ammo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: self_shooter_heat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: self_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PoseStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: track_tracking
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: track_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: track_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: track_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PoseStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: game_game_start
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: game_buy_ammo_ordered
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: game_coins
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: game_projectile_allowance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: call_target_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: call_target_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: call_is_called
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
    using DataType = iw_interfaces::msg::Prism;
    is_plain =
      (
      offsetof(DataType, call_is_called) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Prism__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const iw_interfaces::msg::Prism *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Prism__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<iw_interfaces::msg::Prism *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Prism__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const iw_interfaces::msg::Prism *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Prism__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Prism(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Prism__callbacks = {
  "iw_interfaces::msg",
  "Prism",
  _Prism__cdr_serialize,
  _Prism__cdr_deserialize,
  _Prism__get_serialized_size,
  _Prism__max_serialized_size
};

static rosidl_message_type_support_t _Prism__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Prism__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace iw_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_iw_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<iw_interfaces::msg::Prism>()
{
  return &iw_interfaces::msg::typesupport_fastrtps_cpp::_Prism__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, iw_interfaces, msg, Prism)() {
  return &iw_interfaces::msg::typesupport_fastrtps_cpp::_Prism__handle;
}

#ifdef __cplusplus
}
#endif
