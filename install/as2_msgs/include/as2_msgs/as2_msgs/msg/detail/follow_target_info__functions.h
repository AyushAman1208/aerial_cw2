// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from as2_msgs:msg/FollowTargetInfo.idl
// generated code does not contain a copyright notice

#ifndef AS2_MSGS__MSG__DETAIL__FOLLOW_TARGET_INFO__FUNCTIONS_H_
#define AS2_MSGS__MSG__DETAIL__FOLLOW_TARGET_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "as2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "as2_msgs/msg/detail/follow_target_info__struct.h"

/// Initialize msg/FollowTargetInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * as2_msgs__msg__FollowTargetInfo
 * )) before or use
 * as2_msgs__msg__FollowTargetInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
bool
as2_msgs__msg__FollowTargetInfo__init(as2_msgs__msg__FollowTargetInfo * msg);

/// Finalize msg/FollowTargetInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
void
as2_msgs__msg__FollowTargetInfo__fini(as2_msgs__msg__FollowTargetInfo * msg);

/// Create msg/FollowTargetInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * as2_msgs__msg__FollowTargetInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
as2_msgs__msg__FollowTargetInfo *
as2_msgs__msg__FollowTargetInfo__create();

/// Destroy msg/FollowTargetInfo message.
/**
 * It calls
 * as2_msgs__msg__FollowTargetInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
void
as2_msgs__msg__FollowTargetInfo__destroy(as2_msgs__msg__FollowTargetInfo * msg);

/// Check for msg/FollowTargetInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
bool
as2_msgs__msg__FollowTargetInfo__are_equal(const as2_msgs__msg__FollowTargetInfo * lhs, const as2_msgs__msg__FollowTargetInfo * rhs);

/// Copy a msg/FollowTargetInfo message.
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
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
bool
as2_msgs__msg__FollowTargetInfo__copy(
  const as2_msgs__msg__FollowTargetInfo * input,
  as2_msgs__msg__FollowTargetInfo * output);

/// Initialize array of msg/FollowTargetInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * as2_msgs__msg__FollowTargetInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
bool
as2_msgs__msg__FollowTargetInfo__Sequence__init(as2_msgs__msg__FollowTargetInfo__Sequence * array, size_t size);

/// Finalize array of msg/FollowTargetInfo messages.
/**
 * It calls
 * as2_msgs__msg__FollowTargetInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
void
as2_msgs__msg__FollowTargetInfo__Sequence__fini(as2_msgs__msg__FollowTargetInfo__Sequence * array);

/// Create array of msg/FollowTargetInfo messages.
/**
 * It allocates the memory for the array and calls
 * as2_msgs__msg__FollowTargetInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
as2_msgs__msg__FollowTargetInfo__Sequence *
as2_msgs__msg__FollowTargetInfo__Sequence__create(size_t size);

/// Destroy array of msg/FollowTargetInfo messages.
/**
 * It calls
 * as2_msgs__msg__FollowTargetInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
void
as2_msgs__msg__FollowTargetInfo__Sequence__destroy(as2_msgs__msg__FollowTargetInfo__Sequence * array);

/// Check for msg/FollowTargetInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
bool
as2_msgs__msg__FollowTargetInfo__Sequence__are_equal(const as2_msgs__msg__FollowTargetInfo__Sequence * lhs, const as2_msgs__msg__FollowTargetInfo__Sequence * rhs);

/// Copy an array of msg/FollowTargetInfo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
bool
as2_msgs__msg__FollowTargetInfo__Sequence__copy(
  const as2_msgs__msg__FollowTargetInfo__Sequence * input,
  as2_msgs__msg__FollowTargetInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AS2_MSGS__MSG__DETAIL__FOLLOW_TARGET_INFO__FUNCTIONS_H_
