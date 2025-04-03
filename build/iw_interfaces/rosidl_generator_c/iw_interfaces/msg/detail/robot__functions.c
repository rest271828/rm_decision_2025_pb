// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iw_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice
#include "iw_interfaces/msg/detail/robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
iw_interfaces__msg__Robot__init(iw_interfaces__msg__Robot * msg)
{
  if (!msg) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    iw_interfaces__msg__Robot__fini(msg);
    return false;
  }
  // faction
  // id
  // pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose)) {
    iw_interfaces__msg__Robot__fini(msg);
    return false;
  }
  // hp
  // level
  // attack
  // missing
  return true;
}

void
iw_interfaces__msg__Robot__fini(iw_interfaces__msg__Robot * msg)
{
  if (!msg) {
    return;
  }
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // faction
  // id
  // pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pose);
  // hp
  // level
  // attack
  // missing
}

bool
iw_interfaces__msg__Robot__are_equal(const iw_interfaces__msg__Robot * lhs, const iw_interfaces__msg__Robot * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  // faction
  if (lhs->faction != rhs->faction) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // hp
  if (lhs->hp != rhs->hp) {
    return false;
  }
  // level
  if (lhs->level != rhs->level) {
    return false;
  }
  // attack
  if (lhs->attack != rhs->attack) {
    return false;
  }
  // missing
  if (lhs->missing != rhs->missing) {
    return false;
  }
  return true;
}

bool
iw_interfaces__msg__Robot__copy(
  const iw_interfaces__msg__Robot * input,
  iw_interfaces__msg__Robot * output)
{
  if (!input || !output) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  // faction
  output->faction = input->faction;
  // id
  output->id = input->id;
  // pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // hp
  output->hp = input->hp;
  // level
  output->level = input->level;
  // attack
  output->attack = input->attack;
  // missing
  output->missing = input->missing;
  return true;
}

iw_interfaces__msg__Robot *
iw_interfaces__msg__Robot__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iw_interfaces__msg__Robot * msg = (iw_interfaces__msg__Robot *)allocator.allocate(sizeof(iw_interfaces__msg__Robot), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iw_interfaces__msg__Robot));
  bool success = iw_interfaces__msg__Robot__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iw_interfaces__msg__Robot__destroy(iw_interfaces__msg__Robot * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iw_interfaces__msg__Robot__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iw_interfaces__msg__Robot__Sequence__init(iw_interfaces__msg__Robot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iw_interfaces__msg__Robot * data = NULL;

  if (size) {
    data = (iw_interfaces__msg__Robot *)allocator.zero_allocate(size, sizeof(iw_interfaces__msg__Robot), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iw_interfaces__msg__Robot__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iw_interfaces__msg__Robot__fini(&data[i - 1]);
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
iw_interfaces__msg__Robot__Sequence__fini(iw_interfaces__msg__Robot__Sequence * array)
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
      iw_interfaces__msg__Robot__fini(&array->data[i]);
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

iw_interfaces__msg__Robot__Sequence *
iw_interfaces__msg__Robot__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iw_interfaces__msg__Robot__Sequence * array = (iw_interfaces__msg__Robot__Sequence *)allocator.allocate(sizeof(iw_interfaces__msg__Robot__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iw_interfaces__msg__Robot__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iw_interfaces__msg__Robot__Sequence__destroy(iw_interfaces__msg__Robot__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iw_interfaces__msg__Robot__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iw_interfaces__msg__Robot__Sequence__are_equal(const iw_interfaces__msg__Robot__Sequence * lhs, const iw_interfaces__msg__Robot__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iw_interfaces__msg__Robot__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iw_interfaces__msg__Robot__Sequence__copy(
  const iw_interfaces__msg__Robot__Sequence * input,
  iw_interfaces__msg__Robot__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iw_interfaces__msg__Robot);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iw_interfaces__msg__Robot * data =
      (iw_interfaces__msg__Robot *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iw_interfaces__msg__Robot__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iw_interfaces__msg__Robot__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iw_interfaces__msg__Robot__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
