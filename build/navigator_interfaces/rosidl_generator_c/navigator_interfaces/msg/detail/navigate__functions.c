// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from navigator_interfaces:msg/Navigate.idl
// generated code does not contain a copyright notice
#include "navigator_interfaces/msg/detail/navigate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
navigator_interfaces__msg__Navigate__init(navigator_interfaces__msg__Navigate * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose)) {
    navigator_interfaces__msg__Navigate__fini(msg);
    return false;
  }
  // instant
  return true;
}

void
navigator_interfaces__msg__Navigate__fini(navigator_interfaces__msg__Navigate * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pose);
  // instant
}

bool
navigator_interfaces__msg__Navigate__are_equal(const navigator_interfaces__msg__Navigate * lhs, const navigator_interfaces__msg__Navigate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // instant
  if (lhs->instant != rhs->instant) {
    return false;
  }
  return true;
}

bool
navigator_interfaces__msg__Navigate__copy(
  const navigator_interfaces__msg__Navigate * input,
  navigator_interfaces__msg__Navigate * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // instant
  output->instant = input->instant;
  return true;
}

navigator_interfaces__msg__Navigate *
navigator_interfaces__msg__Navigate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigator_interfaces__msg__Navigate * msg = (navigator_interfaces__msg__Navigate *)allocator.allocate(sizeof(navigator_interfaces__msg__Navigate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigator_interfaces__msg__Navigate));
  bool success = navigator_interfaces__msg__Navigate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigator_interfaces__msg__Navigate__destroy(navigator_interfaces__msg__Navigate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigator_interfaces__msg__Navigate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigator_interfaces__msg__Navigate__Sequence__init(navigator_interfaces__msg__Navigate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigator_interfaces__msg__Navigate * data = NULL;

  if (size) {
    data = (navigator_interfaces__msg__Navigate *)allocator.zero_allocate(size, sizeof(navigator_interfaces__msg__Navigate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigator_interfaces__msg__Navigate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigator_interfaces__msg__Navigate__fini(&data[i - 1]);
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
navigator_interfaces__msg__Navigate__Sequence__fini(navigator_interfaces__msg__Navigate__Sequence * array)
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
      navigator_interfaces__msg__Navigate__fini(&array->data[i]);
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

navigator_interfaces__msg__Navigate__Sequence *
navigator_interfaces__msg__Navigate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigator_interfaces__msg__Navigate__Sequence * array = (navigator_interfaces__msg__Navigate__Sequence *)allocator.allocate(sizeof(navigator_interfaces__msg__Navigate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigator_interfaces__msg__Navigate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigator_interfaces__msg__Navigate__Sequence__destroy(navigator_interfaces__msg__Navigate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigator_interfaces__msg__Navigate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigator_interfaces__msg__Navigate__Sequence__are_equal(const navigator_interfaces__msg__Navigate__Sequence * lhs, const navigator_interfaces__msg__Navigate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigator_interfaces__msg__Navigate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigator_interfaces__msg__Navigate__Sequence__copy(
  const navigator_interfaces__msg__Navigate__Sequence * input,
  navigator_interfaces__msg__Navigate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigator_interfaces__msg__Navigate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigator_interfaces__msg__Navigate * data =
      (navigator_interfaces__msg__Navigate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigator_interfaces__msg__Navigate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigator_interfaces__msg__Navigate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigator_interfaces__msg__Navigate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
