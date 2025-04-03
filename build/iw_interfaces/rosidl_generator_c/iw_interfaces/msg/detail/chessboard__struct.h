// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iw_interfaces:msg/Chessboard.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__CHESSBOARD__STRUCT_H_
#define IW_INTERFACES__MSG__DETAIL__CHESSBOARD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'robots'
#include "iw_interfaces/msg/detail/robot__struct.h"
// Member 'terrains'
#include "iw_interfaces/msg/detail/terrain__struct.h"
// Member 'architectures'
#include "iw_interfaces/msg/detail/architecture__struct.h"

/// Struct defined in msg/Chessboard in the package iw_interfaces.
/**
  * 标识棋盘的基本信息和状态
 */
typedef struct iw_interfaces__msg__Chessboard
{
  uint32_t faction;
  bool initialed;
  builtin_interfaces__msg__Time timestamp;
  /// 机器人信息
  iw_interfaces__msg__Robot__Sequence robots;
  /// 地形信息
  iw_interfaces__msg__Terrain__Sequence terrains;
  /// 建筑信息
  iw_interfaces__msg__Architecture__Sequence architectures;
} iw_interfaces__msg__Chessboard;

// Struct for a sequence of iw_interfaces__msg__Chessboard.
typedef struct iw_interfaces__msg__Chessboard__Sequence
{
  iw_interfaces__msg__Chessboard * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iw_interfaces__msg__Chessboard__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IW_INTERFACES__MSG__DETAIL__CHESSBOARD__STRUCT_H_
