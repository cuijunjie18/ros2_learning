// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_ros2_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
#define MY_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_ros2_interfaces/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_ros2_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    rosidl_generator_traits::value_to_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose: ";
    rosidl_generator_traits::value_to_yaml(msg.pose, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_ros2_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_ros2_interfaces::msg::RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_ros2_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_ros2_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_ros2_interfaces::msg::RobotStatus & msg)
{
  return my_ros2_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_ros2_interfaces::msg::RobotStatus>()
{
  return "my_ros2_interfaces::msg::RobotStatus";
}

template<>
inline const char * name<my_ros2_interfaces::msg::RobotStatus>()
{
  return "my_ros2_interfaces/msg/RobotStatus";
}

template<>
struct has_fixed_size<my_ros2_interfaces::msg::RobotStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_ros2_interfaces::msg::RobotStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_ros2_interfaces::msg::RobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
