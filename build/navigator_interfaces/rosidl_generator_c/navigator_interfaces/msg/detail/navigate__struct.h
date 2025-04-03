// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from navigator_interfaces:msg/Navigate.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATOR_INTERFACES__MSG__DETAIL__NAVIGATE__STRUCT_H_
#define NAVIGATOR_INTERFACES__MSG__DETAIL__NAVIGATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/Navigate in the package navigator_interfaces.
typedef struct navigator_interfaces__msg__Navigate
{
  geometry_msgs__msg__PoseStamped pose;
  bool instant;
} navigator_interfaces__msg__Navigate;

// Struct for a sequence of navigator_interfaces__msg__Navigate.
typedef struct navigator_interfaces__msg__Navigate__Sequence
{
  navigator_interfaces__msg__Navigate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigator_interfaces__msg__Navigate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAVIGATOR_INTERFACES__MSG__DETAIL__NAVIGATE__STRUCT_H_
