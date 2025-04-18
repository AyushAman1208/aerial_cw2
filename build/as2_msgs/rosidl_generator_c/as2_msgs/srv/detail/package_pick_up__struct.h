// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from as2_msgs:srv/PackagePickUp.idl
// generated code does not contain a copyright notice

#ifndef AS2_MSGS__SRV__DETAIL__PACKAGE_PICK_UP__STRUCT_H_
#define AS2_MSGS__SRV__DETAIL__PACKAGE_PICK_UP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'speed_limit'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in srv/PackagePickUp in the package as2_msgs.
typedef struct as2_msgs__srv__PackagePickUp_Request
{
  /// Flag to enable pickup
  bool enable;
  /// speed limit (m/s)
  geometry_msgs__msg__Twist speed_limit;
} as2_msgs__srv__PackagePickUp_Request;

// Struct for a sequence of as2_msgs__srv__PackagePickUp_Request.
typedef struct as2_msgs__srv__PackagePickUp_Request__Sequence
{
  as2_msgs__srv__PackagePickUp_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} as2_msgs__srv__PackagePickUp_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PackagePickUp in the package as2_msgs.
typedef struct as2_msgs__srv__PackagePickUp_Response
{
  /// whether it could be started or not
  bool success;
} as2_msgs__srv__PackagePickUp_Response;

// Struct for a sequence of as2_msgs__srv__PackagePickUp_Response.
typedef struct as2_msgs__srv__PackagePickUp_Response__Sequence
{
  as2_msgs__srv__PackagePickUp_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} as2_msgs__srv__PackagePickUp_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AS2_MSGS__SRV__DETAIL__PACKAGE_PICK_UP__STRUCT_H_
