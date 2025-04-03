// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_decision_interfaces:msg/FromSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__FROM_SERIAL__STRUCT_H_
#define RM_DECISION_INTERFACES__MSG__DETAIL__FROM_SERIAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FromSerial in the package rm_decision_interfaces.
typedef struct rm_decision_interfaces__msg__FromSerial
{
  bool gamestart;
  uint8_t color;
  uint16_t projectile_allowance_17mm;
  uint16_t remaining_gold_coin;
  uint8_t supply_robot_id;
  uint8_t supply_projectile_num;
  uint16_t red_7;
  uint16_t red_outpost_hp;
  uint16_t red_base_hp;
  uint16_t blue_7;
  uint16_t blue_outpost_hp;
  uint16_t blue_base_hp;
  float target_pos_x;
  float target_pos_y;
  uint8_t cmd_key;
} rm_decision_interfaces__msg__FromSerial;

// Struct for a sequence of rm_decision_interfaces__msg__FromSerial.
typedef struct rm_decision_interfaces__msg__FromSerial__Sequence
{
  rm_decision_interfaces__msg__FromSerial * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_decision_interfaces__msg__FromSerial__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__FROM_SERIAL__STRUCT_H_
