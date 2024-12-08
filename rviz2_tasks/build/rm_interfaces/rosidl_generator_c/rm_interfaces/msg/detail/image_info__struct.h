// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:msg/ImageInfo.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__IMAGE_INFO__STRUCT_H_
#define RM_INTERFACES__MSG__DETAIL__IMAGE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'detect_point'
#include "rm_interfaces/msg/detail/objective__struct.h"

/// Struct defined in msg/ImageInfo in the package rm_interfaces.
typedef struct rm_interfaces__msg__ImageInfo
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__Image image;
  rm_interfaces__msg__Objective detect_point;
} rm_interfaces__msg__ImageInfo;

// Struct for a sequence of rm_interfaces__msg__ImageInfo.
typedef struct rm_interfaces__msg__ImageInfo__Sequence
{
  rm_interfaces__msg__ImageInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__msg__ImageInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__MSG__DETAIL__IMAGE_INFO__STRUCT_H_
