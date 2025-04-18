// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from as2_msgs:msg/PoseStampedWithIDArray.idl
// generated code does not contain a copyright notice

#ifndef AS2_MSGS__MSG__DETAIL__POSE_STAMPED_WITH_ID_ARRAY__FUNCTIONS_H_
#define AS2_MSGS__MSG__DETAIL__POSE_STAMPED_WITH_ID_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "as2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "as2_msgs/msg/detail/pose_stamped_with_id_array__struct.h"

/// Initialize msg/PoseStampedWithIDArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * as2_msgs__msg__PoseStampedWithIDArray
 * )) before or use
 * as2_msgs__msg__PoseStampedWithIDArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
bool
as2_msgs__msg__PoseStampedWithIDArray__init(as2_msgs__msg__PoseStampedWithIDArray * msg);

/// Finalize msg/PoseStampedWithIDArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
void
as2_msgs__msg__PoseStampedWithIDArray__fini(as2_msgs__msg__PoseStampedWithIDArray * msg);

/// Create msg/PoseStampedWithIDArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * as2_msgs__msg__PoseStampedWithIDArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
as2_msgs__msg__PoseStampedWithIDArray *
as2_msgs__msg__PoseStampedWithIDArray__create();

/// Destroy msg/PoseStampedWithIDArray message.
/**
 * It calls
 * as2_msgs__msg__PoseStampedWithIDArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
void
as2_msgs__msg__PoseStampedWithIDArray__destroy(as2_msgs__msg__PoseStampedWithIDArray * msg);

/// Check for msg/PoseStampedWithIDArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
bool
as2_msgs__msg__PoseStampedWithIDArray__are_equal(const as2_msgs__msg__PoseStampedWithIDArray * lhs, const as2_msgs__msg__PoseStampedWithIDArray * rhs);

/// Copy a msg/PoseStampedWithIDArray message.
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
as2_msgs__msg__PoseStampedWithIDArray__copy(
  const as2_msgs__msg__PoseStampedWithIDArray * input,
  as2_msgs__msg__PoseStampedWithIDArray * output);

/// Initialize array of msg/PoseStampedWithIDArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * as2_msgs__msg__PoseStampedWithIDArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
bool
as2_msgs__msg__PoseStampedWithIDArray__Sequence__init(as2_msgs__msg__PoseStampedWithIDArray__Sequence * array, size_t size);

/// Finalize array of msg/PoseStampedWithIDArray messages.
/**
 * It calls
 * as2_msgs__msg__PoseStampedWithIDArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
void
as2_msgs__msg__PoseStampedWithIDArray__Sequence__fini(as2_msgs__msg__PoseStampedWithIDArray__Sequence * array);

/// Create array of msg/PoseStampedWithIDArray messages.
/**
 * It allocates the memory for the array and calls
 * as2_msgs__msg__PoseStampedWithIDArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
as2_msgs__msg__PoseStampedWithIDArray__Sequence *
as2_msgs__msg__PoseStampedWithIDArray__Sequence__create(size_t size);

/// Destroy array of msg/PoseStampedWithIDArray messages.
/**
 * It calls
 * as2_msgs__msg__PoseStampedWithIDArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
void
as2_msgs__msg__PoseStampedWithIDArray__Sequence__destroy(as2_msgs__msg__PoseStampedWithIDArray__Sequence * array);

/// Check for msg/PoseStampedWithIDArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_as2_msgs
bool
as2_msgs__msg__PoseStampedWithIDArray__Sequence__are_equal(const as2_msgs__msg__PoseStampedWithIDArray__Sequence * lhs, const as2_msgs__msg__PoseStampedWithIDArray__Sequence * rhs);

/// Copy an array of msg/PoseStampedWithIDArray messages.
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
as2_msgs__msg__PoseStampedWithIDArray__Sequence__copy(
  const as2_msgs__msg__PoseStampedWithIDArray__Sequence * input,
  as2_msgs__msg__PoseStampedWithIDArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AS2_MSGS__MSG__DETAIL__POSE_STAMPED_WITH_ID_ARRAY__FUNCTIONS_H_
