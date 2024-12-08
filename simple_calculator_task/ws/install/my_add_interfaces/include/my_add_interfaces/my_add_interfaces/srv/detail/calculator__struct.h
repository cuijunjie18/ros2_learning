// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_add_interfaces:srv/Calculator.idl
// generated code does not contain a copyright notice

#ifndef MY_ADD_INTERFACES__SRV__DETAIL__CALCULATOR__STRUCT_H_
#define MY_ADD_INTERFACES__SRV__DETAIL__CALCULATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Calculator in the package my_add_interfaces.
typedef struct my_add_interfaces__srv__Calculator_Request
{
  int64_t my_ans;
} my_add_interfaces__srv__Calculator_Request;

// Struct for a sequence of my_add_interfaces__srv__Calculator_Request.
typedef struct my_add_interfaces__srv__Calculator_Request__Sequence
{
  my_add_interfaces__srv__Calculator_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_add_interfaces__srv__Calculator_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Calculator in the package my_add_interfaces.
typedef struct my_add_interfaces__srv__Calculator_Response
{
  /// 评判标准
  bool flag;
} my_add_interfaces__srv__Calculator_Response;

// Struct for a sequence of my_add_interfaces__srv__Calculator_Response.
typedef struct my_add_interfaces__srv__Calculator_Response__Sequence
{
  my_add_interfaces__srv__Calculator_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_add_interfaces__srv__Calculator_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ADD_INTERFACES__SRV__DETAIL__CALCULATOR__STRUCT_H_
