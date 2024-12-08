// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_ros2_interfaces:srv/MoveRobot.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_INTERFACES__SRV__DETAIL__MOVE_ROBOT__STRUCT_H_
#define MY_ROS2_INTERFACES__SRV__DETAIL__MOVE_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/MoveRobot in the package my_ros2_interfaces.
typedef struct my_ros2_interfaces__srv__MoveRobot_Request
{
  float distance;
} my_ros2_interfaces__srv__MoveRobot_Request;

// Struct for a sequence of my_ros2_interfaces__srv__MoveRobot_Request.
typedef struct my_ros2_interfaces__srv__MoveRobot_Request__Sequence
{
  my_ros2_interfaces__srv__MoveRobot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_interfaces__srv__MoveRobot_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MoveRobot in the package my_ros2_interfaces.
typedef struct my_ros2_interfaces__srv__MoveRobot_Response
{
  float pose;
} my_ros2_interfaces__srv__MoveRobot_Response;

// Struct for a sequence of my_ros2_interfaces__srv__MoveRobot_Response.
typedef struct my_ros2_interfaces__srv__MoveRobot_Response__Sequence
{
  my_ros2_interfaces__srv__MoveRobot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_ros2_interfaces__srv__MoveRobot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROS2_INTERFACES__SRV__DETAIL__MOVE_ROBOT__STRUCT_H_
