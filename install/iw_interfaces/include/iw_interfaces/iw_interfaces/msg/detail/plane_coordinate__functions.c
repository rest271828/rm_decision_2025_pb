// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iw_interfaces:msg/PlaneCoordinate.idl
// generated code does not contain a copyright notice
#include "iw_interfaces/msg/detail/plane_coordinate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
iw_interfaces__msg__PlaneCoordinate__init(iw_interfaces__msg__PlaneCoordinate * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
iw_interfaces__msg__PlaneCoordinate__fini(iw_interfaces__msg__PlaneCoordinate * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
iw_interfaces__msg__PlaneCoordinate__are_equal(const iw_interfaces__msg__PlaneCoordinate * lhs, const iw_interfaces__msg__PlaneCoordinate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
iw_interfaces__msg__PlaneCoordinate__copy(
  const iw_interfaces__msg__PlaneCoordinate * input,
  iw_interfaces__msg__PlaneCoordinate * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

iw_interfaces__msg__PlaneCoordinate *
iw_interfaces__msg__PlaneCoordinate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iw_interfaces__msg__PlaneCoordinate * msg = (iw_interfaces__msg__PlaneCoordinate *)allocator.allocate(sizeof(iw_interfaces__msg__PlaneCoordinate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iw_interfaces__msg__PlaneCoordinate));
  bool success = iw_interfaces__msg__PlaneCoordinate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iw_interfaces__msg__PlaneCoordinate__destroy(iw_interfaces__msg__PlaneCoordinate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iw_interfaces__msg__PlaneCoordinate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iw_interfaces__msg__PlaneCoordinate__Sequence__init(iw_interfaces__msg__PlaneCoordinate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iw_interfaces__msg__PlaneCoordinate * data = NULL;

  if (size) {
    data = (iw_interfaces__msg__PlaneCoordinate *)allocator.zero_allocate(size, sizeof(iw_interfaces__msg__PlaneCoordinate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iw_interfaces__msg__PlaneCoordinate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iw_interfaces__msg__PlaneCoordinate__fini(&data[i - 1]);
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
iw_interfaces__msg__PlaneCoordinate__Sequence__fini(iw_interfaces__msg__PlaneCoordinate__Sequence * array)
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
      iw_interfaces__msg__PlaneCoordinate__fini(&array->data[i]);
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

iw_interfaces__msg__PlaneCoordinate__Sequence *
iw_interfaces__msg__PlaneCoordinate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iw_interfaces__msg__PlaneCoordinate__Sequence * array = (iw_interfaces__msg__PlaneCoordinate__Sequence *)allocator.allocate(sizeof(iw_interfaces__msg__PlaneCoordinate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iw_interfaces__msg__PlaneCoordinate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iw_interfaces__msg__PlaneCoordinate__Sequence__destroy(iw_interfaces__msg__PlaneCoordinate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iw_interfaces__msg__PlaneCoordinate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iw_interfaces__msg__PlaneCoordinate__Sequence__are_equal(const iw_interfaces__msg__PlaneCoordinate__Sequence * lhs, const iw_interfaces__msg__PlaneCoordinate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iw_interfaces__msg__PlaneCoordinate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iw_interfaces__msg__PlaneCoordinate__Sequence__copy(
  const iw_interfaces__msg__PlaneCoordinate__Sequence * input,
  iw_interfaces__msg__PlaneCoordinate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iw_interfaces__msg__PlaneCoordinate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iw_interfaces__msg__PlaneCoordinate * data =
      (iw_interfaces__msg__PlaneCoordinate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iw_interfaces__msg__PlaneCoordinate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iw_interfaces__msg__PlaneCoordinate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iw_interfaces__msg__PlaneCoordinate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
