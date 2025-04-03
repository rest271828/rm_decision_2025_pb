// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iw_interfaces:msg/Prism.idl
// generated code does not contain a copyright notice
#include "iw_interfaces/msg/detail/prism__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `self_pose`
// Member `track_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
iw_interfaces__msg__Prism__init(iw_interfaces__msg__Prism * msg)
{
  if (!msg) {
    return false;
  }
  // self_id
  // self_hp
  // self_ammo
  // self_shooter_heat
  // self_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->self_pose)) {
    iw_interfaces__msg__Prism__fini(msg);
    return false;
  }
  // track_tracking
  // track_id
  // track_hp
  // track_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->track_pose)) {
    iw_interfaces__msg__Prism__fini(msg);
    return false;
  }
  // game_game_start
  // game_buy_ammo_ordered
  // game_coins
  // game_projectile_allowance
  // call_target_x
  // call_target_y
  // call_is_called
  return true;
}

void
iw_interfaces__msg__Prism__fini(iw_interfaces__msg__Prism * msg)
{
  if (!msg) {
    return;
  }
  // self_id
  // self_hp
  // self_ammo
  // self_shooter_heat
  // self_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->self_pose);
  // track_tracking
  // track_id
  // track_hp
  // track_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->track_pose);
  // game_game_start
  // game_buy_ammo_ordered
  // game_coins
  // game_projectile_allowance
  // call_target_x
  // call_target_y
  // call_is_called
}

bool
iw_interfaces__msg__Prism__are_equal(const iw_interfaces__msg__Prism * lhs, const iw_interfaces__msg__Prism * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // self_id
  if (lhs->self_id != rhs->self_id) {
    return false;
  }
  // self_hp
  if (lhs->self_hp != rhs->self_hp) {
    return false;
  }
  // self_ammo
  if (lhs->self_ammo != rhs->self_ammo) {
    return false;
  }
  // self_shooter_heat
  if (lhs->self_shooter_heat != rhs->self_shooter_heat) {
    return false;
  }
  // self_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->self_pose), &(rhs->self_pose)))
  {
    return false;
  }
  // track_tracking
  if (lhs->track_tracking != rhs->track_tracking) {
    return false;
  }
  // track_id
  if (lhs->track_id != rhs->track_id) {
    return false;
  }
  // track_hp
  if (lhs->track_hp != rhs->track_hp) {
    return false;
  }
  // track_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->track_pose), &(rhs->track_pose)))
  {
    return false;
  }
  // game_game_start
  if (lhs->game_game_start != rhs->game_game_start) {
    return false;
  }
  // game_buy_ammo_ordered
  if (lhs->game_buy_ammo_ordered != rhs->game_buy_ammo_ordered) {
    return false;
  }
  // game_coins
  if (lhs->game_coins != rhs->game_coins) {
    return false;
  }
  // game_projectile_allowance
  if (lhs->game_projectile_allowance != rhs->game_projectile_allowance) {
    return false;
  }
  // call_target_x
  if (lhs->call_target_x != rhs->call_target_x) {
    return false;
  }
  // call_target_y
  if (lhs->call_target_y != rhs->call_target_y) {
    return false;
  }
  // call_is_called
  if (lhs->call_is_called != rhs->call_is_called) {
    return false;
  }
  return true;
}

bool
iw_interfaces__msg__Prism__copy(
  const iw_interfaces__msg__Prism * input,
  iw_interfaces__msg__Prism * output)
{
  if (!input || !output) {
    return false;
  }
  // self_id
  output->self_id = input->self_id;
  // self_hp
  output->self_hp = input->self_hp;
  // self_ammo
  output->self_ammo = input->self_ammo;
  // self_shooter_heat
  output->self_shooter_heat = input->self_shooter_heat;
  // self_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->self_pose), &(output->self_pose)))
  {
    return false;
  }
  // track_tracking
  output->track_tracking = input->track_tracking;
  // track_id
  output->track_id = input->track_id;
  // track_hp
  output->track_hp = input->track_hp;
  // track_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->track_pose), &(output->track_pose)))
  {
    return false;
  }
  // game_game_start
  output->game_game_start = input->game_game_start;
  // game_buy_ammo_ordered
  output->game_buy_ammo_ordered = input->game_buy_ammo_ordered;
  // game_coins
  output->game_coins = input->game_coins;
  // game_projectile_allowance
  output->game_projectile_allowance = input->game_projectile_allowance;
  // call_target_x
  output->call_target_x = input->call_target_x;
  // call_target_y
  output->call_target_y = input->call_target_y;
  // call_is_called
  output->call_is_called = input->call_is_called;
  return true;
}

iw_interfaces__msg__Prism *
iw_interfaces__msg__Prism__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iw_interfaces__msg__Prism * msg = (iw_interfaces__msg__Prism *)allocator.allocate(sizeof(iw_interfaces__msg__Prism), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iw_interfaces__msg__Prism));
  bool success = iw_interfaces__msg__Prism__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
iw_interfaces__msg__Prism__destroy(iw_interfaces__msg__Prism * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    iw_interfaces__msg__Prism__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
iw_interfaces__msg__Prism__Sequence__init(iw_interfaces__msg__Prism__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iw_interfaces__msg__Prism * data = NULL;

  if (size) {
    data = (iw_interfaces__msg__Prism *)allocator.zero_allocate(size, sizeof(iw_interfaces__msg__Prism), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iw_interfaces__msg__Prism__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iw_interfaces__msg__Prism__fini(&data[i - 1]);
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
iw_interfaces__msg__Prism__Sequence__fini(iw_interfaces__msg__Prism__Sequence * array)
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
      iw_interfaces__msg__Prism__fini(&array->data[i]);
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

iw_interfaces__msg__Prism__Sequence *
iw_interfaces__msg__Prism__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  iw_interfaces__msg__Prism__Sequence * array = (iw_interfaces__msg__Prism__Sequence *)allocator.allocate(sizeof(iw_interfaces__msg__Prism__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = iw_interfaces__msg__Prism__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
iw_interfaces__msg__Prism__Sequence__destroy(iw_interfaces__msg__Prism__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    iw_interfaces__msg__Prism__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
iw_interfaces__msg__Prism__Sequence__are_equal(const iw_interfaces__msg__Prism__Sequence * lhs, const iw_interfaces__msg__Prism__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!iw_interfaces__msg__Prism__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
iw_interfaces__msg__Prism__Sequence__copy(
  const iw_interfaces__msg__Prism__Sequence * input,
  iw_interfaces__msg__Prism__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(iw_interfaces__msg__Prism);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    iw_interfaces__msg__Prism * data =
      (iw_interfaces__msg__Prism *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!iw_interfaces__msg__Prism__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          iw_interfaces__msg__Prism__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!iw_interfaces__msg__Prism__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
