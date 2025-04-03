// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from navigator_interfaces:msg/Navigate.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATOR_INTERFACES__MSG__DETAIL__NAVIGATE__FUNCTIONS_H_
#define NAVIGATOR_INTERFACES__MSG__DETAIL__NAVIGATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "navigator_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "navigator_interfaces/msg/detail/navigate__struct.h"

/// Initialize msg/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * navigator_interfaces__msg__Navigate
 * )) before or use
 * navigator_interfaces__msg__Navigate__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_navigator_interfaces
bool
navigator_interfaces__msg__Navigate__init(navigator_interfaces__msg__Navigate * msg);

/// Finalize msg/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigator_interfaces
void
navigator_interfaces__msg__Navigate__fini(navigator_interfaces__msg__Navigate * msg);

/// Create msg/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * navigator_interfaces__msg__Navigate__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigator_interfaces
navigator_interfaces__msg__Navigate *
navigator_interfaces__msg__Navigate__create();

/// Destroy msg/Navigate message.
/**
 * It calls
 * navigator_interfaces__msg__Navigate__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigator_interfaces
void
navigator_interfaces__msg__Navigate__destroy(navigator_interfaces__msg__Navigate * msg);

/// Check for msg/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigator_interfaces
bool
navigator_interfaces__msg__Navigate__are_equal(const navigator_interfaces__msg__Navigate * lhs, const navigator_interfaces__msg__Navigate * rhs);

/// Copy a msg/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigator_interfaces
bool
navigator_interfaces__msg__Navigate__copy(
  const navigator_interfaces__msg__Navigate * input,
  navigator_interfaces__msg__Navigate * output);

/// Initialize array of msg/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * navigator_interfaces__msg__Navigate__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigator_interfaces
bool
navigator_interfaces__msg__Navigate__Sequence__init(navigator_interfaces__msg__Navigate__Sequence * array, size_t size);

/// Finalize array of msg/Navigate messages.
/**
 * It calls
 * navigator_interfaces__msg__Navigate__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigator_interfaces
void
navigator_interfaces__msg__Navigate__Sequence__fini(navigator_interfaces__msg__Navigate__Sequence * array);

/// Create array of msg/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * navigator_interfaces__msg__Navigate__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_navigator_interfaces
navigator_interfaces__msg__Navigate__Sequence *
navigator_interfaces__msg__Navigate__Sequence__create(size_t size);

/// Destroy array of msg/Navigate messages.
/**
 * It calls
 * navigator_interfaces__msg__Navigate__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigator_interfaces
void
navigator_interfaces__msg__Navigate__Sequence__destroy(navigator_interfaces__msg__Navigate__Sequence * array);

/// Check for msg/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigator_interfaces
bool
navigator_interfaces__msg__Navigate__Sequence__are_equal(const navigator_interfaces__msg__Navigate__Sequence * lhs, const navigator_interfaces__msg__Navigate__Sequence * rhs);

/// Copy an array of msg/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_navigator_interfaces
bool
navigator_interfaces__msg__Navigate__Sequence__copy(
  const navigator_interfaces__msg__Navigate__Sequence * input,
  navigator_interfaces__msg__Navigate__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NAVIGATOR_INTERFACES__MSG__DETAIL__NAVIGATE__FUNCTIONS_H_
