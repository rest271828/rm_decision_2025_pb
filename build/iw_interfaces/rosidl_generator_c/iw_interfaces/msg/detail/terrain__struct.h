// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iw_interfaces:msg/Terrain.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__TERRAIN__STRUCT_H_
#define IW_INTERFACES__MSG__DETAIL__TERRAIN__STRUCT_H_

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
// Member 'vertices'
#include "iw_interfaces/msg/detail/plane_coordinate__struct.h"

/// Struct defined in msg/Terrain in the package iw_interfaces.
/**
  * 地形消息定义
 */
typedef struct iw_interfaces__msg__Terrain
{
  rosidl_runtime_c__String label;
  uint32_t type;
  iw_interfaces__msg__PlaneCoordinate__Sequence vertices;
} iw_interfaces__msg__Terrain;

// Struct for a sequence of iw_interfaces__msg__Terrain.
typedef struct iw_interfaces__msg__Terrain__Sequence
{
  iw_interfaces__msg__Terrain * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iw_interfaces__msg__Terrain__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IW_INTERFACES__MSG__DETAIL__TERRAIN__STRUCT_H_
