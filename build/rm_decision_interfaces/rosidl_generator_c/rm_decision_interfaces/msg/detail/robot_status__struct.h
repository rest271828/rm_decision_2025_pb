// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_decision_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobotStatus in the package rm_decision_interfaces.
typedef struct rm_decision_interfaces__msg__RobotStatus
{
  uint8_t robot_id;
  uint16_t current_hp;
  uint16_t shooter_heat;
  uint16_t ammo_buy;
} rm_decision_interfaces__msg__RobotStatus;

// Struct for a sequence of rm_decision_interfaces__msg__RobotStatus.
typedef struct rm_decision_interfaces__msg__RobotStatus__Sequence
{
  rm_decision_interfaces__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_decision_interfaces__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
