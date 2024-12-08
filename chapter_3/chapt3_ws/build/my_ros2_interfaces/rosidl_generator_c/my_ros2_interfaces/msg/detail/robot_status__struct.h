// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_ros2_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define MY_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_MOVEING'.
enum
{
  my_ros2_interfaces__msg__RobotStatus__STATUS_MOVEING = 1ul
};

/// Constant 'STATUS_STOP'.
enum
{
  my_ros2_interfaces__msg__RobotStatus__STATUS_STOP = 1ul
};

/// Struct defined in msg/RobotStatus in the package my_ros2_interfaces.
typedef struct my_ros2_interfaces__msg__RobotStatus
{
  uint32_t status;
  float pose;
} my_ros2_interfaces__msg__RobotStatus;

// Struct for a sequence of my_ros2_interfaces__msg__RobotStatus.
typedef struct my_ros2_interfaces__msg__RobotStatus__Sequence
{
  my_ros2_interfaces__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_interfaces__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
