// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_decision_interfaces:msg/ReceiveSerial.idl
// generated code does not contain a copyright notice
#include "rm_decision_interfaces/msg/detail/receive_serial__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rm_decision_interfaces__msg__ReceiveSerial__init(rm_decision_interfaces__msg__ReceiveSerial * msg)
{
  if (!msg) {
    return false;
  }
  // color
  // time
  // red_1
  // red_2
  // red_3
  // red_4
  // red_5
  // red_7
  // red_outpost_hp
  // red_base_hp
  // blue_1
  // blue_2
  // blue_3
  // blue_4
  // blue_5
  // blue_7
  // blue_outpost_hp
  // blue_base_hp
  // self_hp
  // base_hp
  // rfid_status
  // event_data
  // supply_robot_id
  // supply_projectile_num
  return true;
}

void
rm_decision_interfaces__msg__ReceiveSerial__fini(rm_decision_interfaces__msg__ReceiveSerial * msg)
{
  if (!msg) {
    return;
  }
  // color
  // time
  // red_1
  // red_2
  // red_3
  // red_4
  // red_5
  // red_7
  // red_outpost_hp
  // red_base_hp
  // blue_1
  // blue_2
  // blue_3
  // blue_4
  // blue_5
  // blue_7
  // blue_outpost_hp
  // blue_base_hp
  // self_hp
  // base_hp
  // rfid_status
  // event_data
  // supply_robot_id
  // supply_projectile_num
}

bool
rm_decision_interfaces__msg__ReceiveSerial__are_equal(const rm_decision_interfaces__msg__ReceiveSerial * lhs, const rm_decision_interfaces__msg__ReceiveSerial * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // red_1
  if (lhs->red_1 != rhs->red_1) {
    return false;
  }
  // red_2
  if (lhs->red_2 != rhs->red_2) {
    return false;
  }
  // red_3
  if (lhs->red_3 != rhs->red_3) {
    return false;
  }
  // red_4
  if (lhs->red_4 != rhs->red_4) {
    return false;
  }
  // red_5
  if (lhs->red_5 != rhs->red_5) {
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
  // blue_1
  if (lhs->blue_1 != rhs->blue_1) {
    return false;
  }
  // blue_2
  if (lhs->blue_2 != rhs->blue_2) {
    return false;
  }
  // blue_3
  if (lhs->blue_3 != rhs->blue_3) {
    return false;
  }
  // blue_4
  if (lhs->blue_4 != rhs->blue_4) {
    return false;
  }
  // blue_5
  if (lhs->blue_5 != rhs->blue_5) {
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
  // self_hp
  if (lhs->self_hp != rhs->self_hp) {
    return false;
  }
  // base_hp
  if (lhs->base_hp != rhs->base_hp) {
    return false;
  }
  // rfid_status
  if (lhs->rfid_status != rhs->rfid_status) {
    return false;
  }
  // event_data
  if (lhs->event_data != rhs->event_data) {
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
  return true;
}

bool
rm_decision_interfaces__msg__ReceiveSerial__copy(
  const rm_decision_interfaces__msg__ReceiveSerial * input,
  rm_decision_interfaces__msg__ReceiveSerial * output)
{
  if (!input || !output) {
    return false;
  }
  // color
  output->color = input->color;
  // time
  output->time = input->time;
  // red_1
  output->red_1 = input->red_1;
  // red_2
  output->red_2 = input->red_2;
  // red_3
  output->red_3 = input->red_3;
  // red_4
  output->red_4 = input->red_4;
  // red_5
  output->red_5 = input->red_5;
  // red_7
  output->red_7 = input->red_7;
  // red_outpost_hp
  output->red_outpost_hp = input->red_outpost_hp;
  // red_base_hp
  output->red_base_hp = input->red_base_hp;
  // blue_1
  output->blue_1 = input->blue_1;
  // blue_2
  output->blue_2 = input->blue_2;
  // blue_3
  output->blue_3 = input->blue_3;
  // blue_4
  output->blue_4 = input->blue_4;
  // blue_5
  output->blue_5 = input->blue_5;
  // blue_7
  output->blue_7 = input->blue_7;
  // blue_outpost_hp
  output->blue_outpost_hp = input->blue_outpost_hp;
  // blue_base_hp
  output->blue_base_hp = input->blue_base_hp;
  // self_hp
  output->self_hp = input->self_hp;
  // base_hp
  output->base_hp = input->base_hp;
  // rfid_status
  output->rfid_status = input->rfid_status;
  // event_data
  output->event_data = input->event_data;
  // supply_robot_id
  output->supply_robot_id = input->supply_robot_id;
  // supply_projectile_num
  output->supply_projectile_num = input->supply_projectile_num;
  return true;
}

rm_decision_interfaces__msg__ReceiveSerial *
rm_decision_interfaces__msg__ReceiveSerial__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_decision_interfaces__msg__ReceiveSerial * msg = (rm_decision_interfaces__msg__ReceiveSerial *)allocator.allocate(sizeof(rm_decision_interfaces__msg__ReceiveSerial), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_decision_interfaces__msg__ReceiveSerial));
  bool success = rm_decision_interfaces__msg__ReceiveSerial__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_decision_interfaces__msg__ReceiveSerial__destroy(rm_decision_interfaces__msg__ReceiveSerial * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_decision_interfaces__msg__ReceiveSerial__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_decision_interfaces__msg__ReceiveSerial__Sequence__init(rm_decision_interfaces__msg__ReceiveSerial__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_decision_interfaces__msg__ReceiveSerial * data = NULL;

  if (size) {
    data = (rm_decision_interfaces__msg__ReceiveSerial *)allocator.zero_allocate(size, sizeof(rm_decision_interfaces__msg__ReceiveSerial), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_decision_interfaces__msg__ReceiveSerial__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_decision_interfaces__msg__ReceiveSerial__fini(&data[i - 1]);
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
rm_decision_interfaces__msg__ReceiveSerial__Sequence__fini(rm_decision_interfaces__msg__ReceiveSerial__Sequence * array)
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
      rm_decision_interfaces__msg__ReceiveSerial__fini(&array->data[i]);
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

rm_decision_interfaces__msg__ReceiveSerial__Sequence *
rm_decision_interfaces__msg__ReceiveSerial__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_decision_interfaces__msg__ReceiveSerial__Sequence * array = (rm_decision_interfaces__msg__ReceiveSerial__Sequence *)allocator.allocate(sizeof(rm_decision_interfaces__msg__ReceiveSerial__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_decision_interfaces__msg__ReceiveSerial__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_decision_interfaces__msg__ReceiveSerial__Sequence__destroy(rm_decision_interfaces__msg__ReceiveSerial__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_decision_interfaces__msg__ReceiveSerial__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_decision_interfaces__msg__ReceiveSerial__Sequence__are_equal(const rm_decision_interfaces__msg__ReceiveSerial__Sequence * lhs, const rm_decision_interfaces__msg__ReceiveSerial__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_decision_interfaces__msg__ReceiveSerial__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_decision_interfaces__msg__ReceiveSerial__Sequence__copy(
  const rm_decision_interfaces__msg__ReceiveSerial__Sequence * input,
  rm_decision_interfaces__msg__ReceiveSerial__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_decision_interfaces__msg__ReceiveSerial);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_decision_interfaces__msg__ReceiveSerial * data =
      (rm_decision_interfaces__msg__ReceiveSerial *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_decision_interfaces__msg__ReceiveSerial__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_decision_interfaces__msg__ReceiveSerial__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_decision_interfaces__msg__ReceiveSerial__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
