// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sabertooth_msg:msg/SpeedVals.idl
// generated code does not contain a copyright notice

#ifndef SABERTOOTH_MSG__MSG__DETAIL__SPEED_VALS__FUNCTIONS_H_
#define SABERTOOTH_MSG__MSG__DETAIL__SPEED_VALS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sabertooth_msg/msg/rosidl_generator_c__visibility_control.h"

#include "sabertooth_msg/msg/detail/speed_vals__struct.h"

/// Initialize msg/SpeedVals message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sabertooth_msg__msg__SpeedVals
 * )) before or use
 * sabertooth_msg__msg__SpeedVals__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sabertooth_msg
bool
sabertooth_msg__msg__SpeedVals__init(sabertooth_msg__msg__SpeedVals * msg);

/// Finalize msg/SpeedVals message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sabertooth_msg
void
sabertooth_msg__msg__SpeedVals__fini(sabertooth_msg__msg__SpeedVals * msg);

/// Create msg/SpeedVals message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sabertooth_msg__msg__SpeedVals__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sabertooth_msg
sabertooth_msg__msg__SpeedVals *
sabertooth_msg__msg__SpeedVals__create();

/// Destroy msg/SpeedVals message.
/**
 * It calls
 * sabertooth_msg__msg__SpeedVals__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sabertooth_msg
void
sabertooth_msg__msg__SpeedVals__destroy(sabertooth_msg__msg__SpeedVals * msg);

/// Check for msg/SpeedVals message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sabertooth_msg
bool
sabertooth_msg__msg__SpeedVals__are_equal(const sabertooth_msg__msg__SpeedVals * lhs, const sabertooth_msg__msg__SpeedVals * rhs);

/// Copy a msg/SpeedVals message.
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
ROSIDL_GENERATOR_C_PUBLIC_sabertooth_msg
bool
sabertooth_msg__msg__SpeedVals__copy(
  const sabertooth_msg__msg__SpeedVals * input,
  sabertooth_msg__msg__SpeedVals * output);

/// Initialize array of msg/SpeedVals messages.
/**
 * It allocates the memory for the number of elements and calls
 * sabertooth_msg__msg__SpeedVals__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sabertooth_msg
bool
sabertooth_msg__msg__SpeedVals__Sequence__init(sabertooth_msg__msg__SpeedVals__Sequence * array, size_t size);

/// Finalize array of msg/SpeedVals messages.
/**
 * It calls
 * sabertooth_msg__msg__SpeedVals__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sabertooth_msg
void
sabertooth_msg__msg__SpeedVals__Sequence__fini(sabertooth_msg__msg__SpeedVals__Sequence * array);

/// Create array of msg/SpeedVals messages.
/**
 * It allocates the memory for the array and calls
 * sabertooth_msg__msg__SpeedVals__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sabertooth_msg
sabertooth_msg__msg__SpeedVals__Sequence *
sabertooth_msg__msg__SpeedVals__Sequence__create(size_t size);

/// Destroy array of msg/SpeedVals messages.
/**
 * It calls
 * sabertooth_msg__msg__SpeedVals__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sabertooth_msg
void
sabertooth_msg__msg__SpeedVals__Sequence__destroy(sabertooth_msg__msg__SpeedVals__Sequence * array);

/// Check for msg/SpeedVals message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sabertooth_msg
bool
sabertooth_msg__msg__SpeedVals__Sequence__are_equal(const sabertooth_msg__msg__SpeedVals__Sequence * lhs, const sabertooth_msg__msg__SpeedVals__Sequence * rhs);

/// Copy an array of msg/SpeedVals messages.
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
ROSIDL_GENERATOR_C_PUBLIC_sabertooth_msg
bool
sabertooth_msg__msg__SpeedVals__Sequence__copy(
  const sabertooth_msg__msg__SpeedVals__Sequence * input,
  sabertooth_msg__msg__SpeedVals__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SABERTOOTH_MSG__MSG__DETAIL__SPEED_VALS__FUNCTIONS_H_
