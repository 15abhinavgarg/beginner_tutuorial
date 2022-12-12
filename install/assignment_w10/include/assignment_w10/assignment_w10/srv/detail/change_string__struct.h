// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assignment_w10:srv/ChangeString.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT_W10__SRV__DETAIL__CHANGE_STRING__STRUCT_H_
#define ASSIGNMENT_W10__SRV__DETAIL__CHANGE_STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ChangeString in the package assignment_w10.
typedef struct assignment_w10__srv__ChangeString_Request
{
  rosidl_runtime_c__String input;
} assignment_w10__srv__ChangeString_Request;

// Struct for a sequence of assignment_w10__srv__ChangeString_Request.
typedef struct assignment_w10__srv__ChangeString_Request__Sequence
{
  assignment_w10__srv__ChangeString_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment_w10__srv__ChangeString_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'output'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ChangeString in the package assignment_w10.
typedef struct assignment_w10__srv__ChangeString_Response
{
  rosidl_runtime_c__String output;
} assignment_w10__srv__ChangeString_Response;

// Struct for a sequence of assignment_w10__srv__ChangeString_Response.
typedef struct assignment_w10__srv__ChangeString_Response__Sequence
{
  assignment_w10__srv__ChangeString_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment_w10__srv__ChangeString_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSIGNMENT_W10__SRV__DETAIL__CHANGE_STRING__STRUCT_H_
