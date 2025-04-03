// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_decision_interfaces:msg/FromSerial.idl
// generated code does not contain a copyright notice
#include "rm_decision_interfaces/msg/detail/from_serial__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rm_decision_interfaces__msg__FromSerial__init(rm_decision_interfaces__msg__FromSerial * msg)
{
  if (!msg) {
    return false;
  }
  // gamestart
  // color
  // projectile_allowance_17mm
  // remaining_gold_coin
  // supply_robot_id
  // supply_projectile_num
  // red_7
  // red_outpost_hp
  // red_base_hp
  // blue_7
  // blue_outpost_hp
  // blue_base_hp
  // target_pos_x
  // target_pos_y
  // cmd_key
  return true;
}

void
rm_decision_interfaces__msg__FromSerial__fini(rm_decision_interfaces__msg__FromSerial * msg)
{
  if (!msg) {
    return;
  }
  // gamestart
  // color
  // projectile_allowance_17mm
  // remaining_gold_coin
  // supply_robot_id
  // supply_projectile_num
  // red_7
  // red_outpost_hp
  // red_base_hp
  // blue_7
  // blue_outpost_hp
  // blue_base_hp
  // target_pos_x
  // target_pos_y
  // cmd_key
}

bool
rm_decision_interfaces__msg__FromSerial__are_equal(const rm_decision_interfaces__msg__FromSerial * lhs, const rm_decision_interfaces__msg__FromSerial * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gamestart
  if (lhs->gamestart != rhs->gamestart) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  // projectile_allowance_17mm
  if (lhs->projectile_allowance_17mm != rhs->projectile_allowance_17mm) {
    return false;
  }
  // remaining_gold_coin
  if (lhs->remaining_gold_coin != rhs->remaining_gold_coin) {
    return false;
  }
  // supply_robot_id
  if (lhs->supply_robot_id != rhs->supply_robot_id) {
    return false;
  }
  // supply_projectile_num
  if (lhs->supply_projectile_num != rhs->supply_projectile_num) {
    return false;
  }
  // red_7
  if (lhs->red_7 != rhs->red_7) {
    return false;
  }
  // red_outpost_hp
  if (lhs->red_outpost_hp != rhs->red_outpost_hp) {
    return false;
  }
  // red_base_hp
  if (lhs->red_base_hp != rhs->red_base_hp) {
    return false;
  }
  // blue_7
  if (lhs->blue_7 != rhs->blue_7) {
    return false;
  }
  // blue_outpost_hp
  if (lhs->blue_outpost_hp != rhs->blue_outpost_hp) {
    return false;
  }
  // blue_base_hp
  if (lhs->blue_base_hp != rhs->blue_base_hp) {
    return false;
  }
  // target_pos_x
  if (lhs->target_pos_x != rhs->target_pos_x) {
    return false;
  }
  // target_pos_y
  if (lhs->target_pos_y != rhs->target_pos_y) {
    return false;
  }
  // cmd_key
  if (lhs->cmd_key != rhs->cmd_key) {
    return false;
  }
  return true;
}

bool
rm_decision_interfaces__msg__FromSerial__copy(
  const rm_decision_interfaces__msg__FromSerial * input,
  rm_decision_interfaces__msg__FromSerial * output)
{
  if (!input || !output) {
    return false;
  }
  // gamestart
  output->gamestart = input->gamestart;
  // color
  output->color = input->color;
  // projectile_allowance_17mm
  output->projectile_allowance_17mm = input->projectile_allowance_17mm;
  // remaining_gold_coin
  output->remaining_gold_coin = input->remaining_gold_coin;
  // supply_robot_id
  output->supply_robot_id = input->supply_robot_id;
  // supply_projectile_num
  output->supply_projectile_num = input->supply_projectile_num;
  // red_7
  output->red_7 = input->red_7;
  // red_outpost_hp
  output->red_outpost_hp = input->red_outpost_hp;
  // red_base_hp
  output->red_base_hp = input->red_base_hp;
  // blue_7
  output->blue_7 = input->blue_7;
  // blue_outpost_hp
  output->blue_outpost_hp = input->blue_outpost_hp;
  // blue_base_hp
  output->blue_base_hp = input->blue_base_hp;
  // target_pos_x
  output->target_pos_x = input->target_pos_x;
  // target_pos_y
  output->target_pos_y = input->target_pos_y;
  // cmd_key
  output->cmd_key = input->cmd_key;
  return true;
}

rm_decision_interfaces__msg__FromSerial *
rm_decision_interfaces__msg__FromSerial__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_decision_interfaces__msg__FromSerial * msg = (rm_decision_interfaces__msg__FromSerial *)allocator.allocate(sizeof(rm_decision_interfaces__msg__FromSerial), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_decision_interfaces__msg__FromSerial));
  bool success = rm_decision_interfaces__msg__FromSerial__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_decision_interfaces__msg__FromSerial__destroy(rm_decision_interfaces__msg__FromSerial * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_decision_interfaces__msg__FromSerial__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_decision_interfaces__msg__FromSerial__Sequence__init(rm_decision_interfaces__msg__FromSerial__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_decision_interfaces__msg__FromSerial * data = NULL;

  if (size) {
    data = (rm_decision_interfaces__msg__FromSerial *)allocator.zero_allocate(size, sizeof(rm_decision_interfaces__msg__FromSerial), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_decision_interfaces__msg__FromSerial__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_decision_interfaces__msg__FromSerial__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rm_decision_interfaces__msg__FromSerial__Sequence__fini(rm_decision_interfaces__msg__FromSerial__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_decision_interfaces__msg__FromSerial__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rm_decision_interfaces__msg__FromSerial__Sequence *
rm_decision_interfaces__msg__FromSerial__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_decision_interfaces__msg__FromSerial__Sequence * array = (rm_decision_interfaces__msg__FromSerial__Sequence *)allocator.allocate(sizeof(rm_decision_interfaces__msg__FromSerial__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_decision_interfaces__msg__FromSerial__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_decision_interfaces__msg__FromSerial__Sequence__destroy(rm_decision_interfaces__msg__FromSerial__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_decision_interfaces__msg__FromSerial__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_decision_interfaces__msg__FromSerial__Sequence__are_equal(const rm_decision_interfaces__msg__FromSerial__Sequence * lhs, const rm_decision_interfaces__msg__FromSerial__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_decision_interfaces__msg__FromSerial__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_decision_interfaces__msg__FromSerial__Sequence__copy(
  const rm_decision_interfaces__msg__FromSerial__Sequence * input,
  rm_decision_interfaces__msg__FromSerial__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_decision_interfaces__msg__FromSerial);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_decision_interfaces__msg__FromSerial * data =
      (rm_decision_interfaces__msg__FromSerial *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_decision_interfaces__msg__FromSerial__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_decision_interfaces__msg__FromSerial__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_decision_interfaces__msg__FromSerial__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
