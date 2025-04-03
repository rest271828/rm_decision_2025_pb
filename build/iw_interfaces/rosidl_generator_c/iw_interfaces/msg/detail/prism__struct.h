// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iw_interfaces:msg/Prism.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__PRISM__STRUCT_H_
#define IW_INTERFACES__MSG__DETAIL__PRISM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'self_pose'
// Member 'track_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/Prism in the package iw_interfaces.
typedef struct iw_interfaces__msg__Prism
{
  uint32_t self_id;
  uint32_t self_hp;
  uint32_t self_ammo;
  uint32_t self_shooter_heat;
  geometry_msgs__msg__PoseStamped self_pose;
  bool track_tracking;
  uint32_t track_id;
  uint32_t track_hp;
  geometry_msgs__msg__PoseStamped track_pose;
  bool game_game_start;
  bool game_buy_ammo_ordered;
  uint32_t game_coins;
  uint32_t game_projectile_allowance;
  double call_target_x;
  double call_target_y;
  bool call_is_called;
} iw_interfaces__msg__Prism;

// Struct for a sequence of iw_interfaces__msg__Prism.
typedef struct iw_interfaces__msg__Prism__Sequence
{
  iw_interfaces__msg__Prism * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iw_interfaces__msg__Prism__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IW_INTERFACES__MSG__DETAIL__PRISM__STRUCT_H_
