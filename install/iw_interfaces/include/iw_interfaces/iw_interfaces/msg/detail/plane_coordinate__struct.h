// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iw_interfaces:msg/PlaneCoordinate.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__PLANE_COORDINATE__STRUCT_H_
#define IW_INTERFACES__MSG__DETAIL__PLANE_COORDINATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PlaneCoordinate in the package iw_interfaces.
typedef struct iw_interfaces__msg__PlaneCoordinate
{
  double x;
  double y;
} iw_interfaces__msg__PlaneCoordinate;

// Struct for a sequence of iw_interfaces__msg__PlaneCoordinate.
typedef struct iw_interfaces__msg__PlaneCoordinate__Sequence
{
  iw_interfaces__msg__PlaneCoordinate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iw_interfaces__msg__PlaneCoordinate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IW_INTERFACES__MSG__DETAIL__PLANE_COORDINATE__STRUCT_H_
