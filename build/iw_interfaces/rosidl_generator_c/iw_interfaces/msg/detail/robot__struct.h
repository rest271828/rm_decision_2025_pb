// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iw_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_H_
#define IW_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/Robot in the package iw_interfaces.
/**
  * 机器人消息定义
 */
typedef struct iw_interfaces__msg__Robot
{
  rosidl_runtime_c__String label;
  uint32_t faction;
  uint32_t id;
  geometry_msgs__msg__PoseStamped pose;
  uint32_t hp;
  uint32_t level;
  bool attack;
  bool missing;
} iw_interfaces__msg__Robot;

// Struct for a sequence of iw_interfaces__msg__Robot.
typedef struct iw_interfaces__msg__Robot__Sequence
{
  iw_interfaces__msg__Robot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iw_interfaces__msg__Robot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IW_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_H_
