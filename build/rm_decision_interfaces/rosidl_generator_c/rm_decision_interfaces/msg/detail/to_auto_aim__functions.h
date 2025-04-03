// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rm_decision_interfaces:msg/ToAutoAim.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__TO_AUTO_AIM__FUNCTIONS_H_
#define RM_DECISION_INTERFACES__MSG__DETAIL__TO_AUTO_AIM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rm_decision_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "rm_decision_interfaces/msg/detail/to_auto_aim__struct.h"

/// Initialize msg/ToAutoAim message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rm_decision_interfaces__msg__ToAutoAim
 * )) before or use
 * rm_decision_interfaces__msg__ToAutoAim__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
bool
rm_decision_interfaces__msg__ToAutoAim__init(rm_decision_interfaces__msg__ToAutoAim * msg);

/// Finalize msg/ToAutoAim message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
void
rm_decision_interfaces__msg__ToAutoAim__fini(rm_decision_interfaces__msg__ToAutoAim * msg);

/// Create msg/ToAutoAim message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rm_decision_interfaces__msg__ToAutoAim__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
rm_decision_interfaces__msg__ToAutoAim *
rm_decision_interfaces__msg__ToAutoAim__create();

/// Destroy msg/ToAutoAim message.
/**
 * It calls
 * rm_decision_interfaces__msg__ToAutoAim__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
void
rm_decision_interfaces__msg__ToAutoAim__destroy(rm_decision_interfaces__msg__ToAutoAim * msg);

/// Check for msg/ToAutoAim message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
bool
rm_decision_interfaces__msg__ToAutoAim__are_equal(const rm_decision_interfaces__msg__ToAutoAim * lhs, const rm_decision_interfaces__msg__ToAutoAim * rhs);

/// Copy a msg/ToAutoAim message.
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
ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
bool
rm_decision_interfaces__msg__ToAutoAim__copy(
  const rm_decision_interfaces__msg__ToAutoAim * input,
  rm_decision_interfaces__msg__ToAutoAim * output);

/// Initialize array of msg/ToAutoAim messages.
/**
 * It allocates the memory for the number of elements and calls
 * rm_decision_interfaces__msg__ToAutoAim__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
bool
rm_decision_interfaces__msg__ToAutoAim__Sequence__init(rm_decision_interfaces__msg__ToAutoAim__Sequence * array, size_t size);

/// Finalize array of msg/ToAutoAim messages.
/**
 * It calls
 * rm_decision_interfaces__msg__ToAutoAim__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
void
rm_decision_interfaces__msg__ToAutoAim__Sequence__fini(rm_decision_interfaces__msg__ToAutoAim__Sequence * array);

/// Create array of msg/ToAutoAim messages.
/**
 * It allocates the memory for the array and calls
 * rm_decision_interfaces__msg__ToAutoAim__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
rm_decision_interfaces__msg__ToAutoAim__Sequence *
rm_decision_interfaces__msg__ToAutoAim__Sequence__create(size_t size);

/// Destroy array of msg/ToAutoAim messages.
/**
 * It calls
 * rm_decision_interfaces__msg__ToAutoAim__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
void
rm_decision_interfaces__msg__ToAutoAim__Sequence__destroy(rm_decision_interfaces__msg__ToAutoAim__Sequence * array);

/// Check for msg/ToAutoAim message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
bool
rm_decision_interfaces__msg__ToAutoAim__Sequence__are_equal(const rm_decision_interfaces__msg__ToAutoAim__Sequence * lhs, const rm_decision_interfaces__msg__ToAutoAim__Sequence * rhs);

/// Copy an array of msg/ToAutoAim messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rm_decision_interfaces
bool
rm_decision_interfaces__msg__ToAutoAim__Sequence__copy(
  const rm_decision_interfaces__msg__ToAutoAim__Sequence * input,
  rm_decision_interfaces__msg__ToAutoAim__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__TO_AUTO_AIM__FUNCTIONS_H_
