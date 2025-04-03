// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_decision_interfaces:msg/ReceiveSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__RECEIVE_SERIAL__STRUCT_H_
#define RM_DECISION_INTERFACES__MSG__DETAIL__RECEIVE_SERIAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ReceiveSerial in the package rm_decision_interfaces.
typedef struct rm_decision_interfaces__msg__ReceiveSerial
{
  uint8_t color;
  double time;
  uint16_t red_1;
  uint16_t red_2;
  uint16_t red_3;
  uint16_t red_4;
  uint16_t red_5;
  uint16_t red_7;
  uint16_t red_outpost_hp;
  uint16_t red_base_hp;
  uint16_t blue_1;
  uint16_t blue_2;
  uint16_t blue_3;
  uint16_t blue_4;
  uint16_t blue_5;
  uint16_t blue_7;
  uint16_t blue_outpost_hp;
  uint16_t blue_base_hp;
  uint16_t self_hp;
  uint16_t base_hp;
  uint32_t rfid_status;
  uint8_t event_data;
  uint8_t supply_robot_id;
  uint8_t supply_projectile_num;
} rm_decision_interfaces__msg__ReceiveSerial;

// Struct for a sequence of rm_decision_interfaces__msg__ReceiveSerial.
typedef struct rm_decision_interfaces__msg__ReceiveSerial__Sequence
{
  rm_decision_interfaces__msg__ReceiveSerial * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_decision_interfaces__msg__ReceiveSerial__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__RECEIVE_SERIAL__STRUCT_H_
