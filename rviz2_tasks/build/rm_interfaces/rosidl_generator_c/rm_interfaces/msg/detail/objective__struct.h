// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:msg/Objective.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__OBJECTIVE__STRUCT_H_
#define RM_INTERFACES__MSG__DETAIL__OBJECTIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'R'.
enum
{
  rm_interfaces__msg__Objective__R = 0
};

/// Constant 'G'.
enum
{
  rm_interfaces__msg__Objective__G = 255
};

/// Constant 'B'.
enum
{
  rm_interfaces__msg__Objective__B = 0
};

// Include directives for member types
// Member 'pts'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Objective in the package rm_interfaces.
/**
  * 待追踪点颜色信息(默认绿色)
 */
typedef struct rm_interfaces__msg__Objective
{
  /// 待最终点的位置pts为中心，其余为外接矩形顺时针位置
  geometry_msgs__msg__Point pts[5];
} rm_interfaces__msg__Objective;

// Struct for a sequence of rm_interfaces__msg__Objective.
typedef struct rm_interfaces__msg__Objective__Sequence
{
  rm_interfaces__msg__Objective * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__msg__Objective__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__MSG__DETAIL__OBJECTIVE__STRUCT_H_
