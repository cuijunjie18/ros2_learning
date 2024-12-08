// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_add_interfaces:msg/MyAdd.idl
// generated code does not contain a copyright notice

#ifndef MY_ADD_INTERFACES__MSG__DETAIL__MY_ADD__STRUCT_H_
#define MY_ADD_INTERFACES__MSG__DETAIL__MY_ADD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MyAdd in the package my_add_interfaces.
/**
  * 第一个操作数
 */
typedef struct my_add_interfaces__msg__MyAdd
{
  int64_t a;
  /// 第二个操作数
  int64_t b;
} my_add_interfaces__msg__MyAdd;

// Struct for a sequence of my_add_interfaces__msg__MyAdd.
typedef struct my_add_interfaces__msg__MyAdd__Sequence
{
  my_add_interfaces__msg__MyAdd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_add_interfaces__msg__MyAdd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ADD_INTERFACES__MSG__DETAIL__MY_ADD__STRUCT_H_
