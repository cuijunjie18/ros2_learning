// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_ros2_interfaces:srv/MoveRobot.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_INTERFACES__SRV__DETAIL__MOVE_ROBOT__TRAITS_HPP_
#define MY_ROS2_INTERFACES__SRV__DETAIL__MOVE_ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_ros2_interfaces/srv/detail/move_robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_ros2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveRobot_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveRobot_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_ros2_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_ros2_interfaces::srv::MoveRobot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_ros2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_ros2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_ros2_interfaces::srv::MoveRobot_Request & msg)
{
  return my_ros2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_ros2_interfaces::srv::MoveRobot_Request>()
{
  return "my_ros2_interfaces::srv::MoveRobot_Request";
}

template<>
inline const char * name<my_ros2_interfaces::srv::MoveRobot_Request>()
{
  return "my_ros2_interfaces/srv/MoveRobot_Request";
}

template<>
struct has_fixed_size<my_ros2_interfaces::srv::MoveRobot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_ros2_interfaces::srv::MoveRobot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_ros2_interfaces::srv::MoveRobot_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_ros2_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveRobot_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    rosidl_generator_traits::value_to_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveRobot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const MoveRobot_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace my_ros2_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_ros2_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_ros2_interfaces::srv::MoveRobot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_ros2_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_ros2_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_ros2_interfaces::srv::MoveRobot_Response & msg)
{
  return my_ros2_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_ros2_interfaces::srv::MoveRobot_Response>()
{
  return "my_ros2_interfaces::srv::MoveRobot_Response";
}

template<>
inline const char * name<my_ros2_interfaces::srv::MoveRobot_Response>()
{
  return "my_ros2_interfaces/srv/MoveRobot_Response";
}

template<>
struct has_fixed_size<my_ros2_interfaces::srv::MoveRobot_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_ros2_interfaces::srv::MoveRobot_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_ros2_interfaces::srv::MoveRobot_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_ros2_interfaces::srv::MoveRobot>()
{
  return "my_ros2_interfaces::srv::MoveRobot";
}

template<>
inline const char * name<my_ros2_interfaces::srv::MoveRobot>()
{
  return "my_ros2_interfaces/srv/MoveRobot";
}

template<>
struct has_fixed_size<my_ros2_interfaces::srv::MoveRobot>
  : std::integral_constant<
    bool,
    has_fixed_size<my_ros2_interfaces::srv::MoveRobot_Request>::value &&
    has_fixed_size<my_ros2_interfaces::srv::MoveRobot_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_ros2_interfaces::srv::MoveRobot>
  : std::integral_constant<
    bool,
    has_bounded_size<my_ros2_interfaces::srv::MoveRobot_Request>::value &&
    has_bounded_size<my_ros2_interfaces::srv::MoveRobot_Response>::value
  >
{
};

template<>
struct is_service<my_ros2_interfaces::srv::MoveRobot>
  : std::true_type
{
};

template<>
struct is_service_request<my_ros2_interfaces::srv::MoveRobot_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_ros2_interfaces::srv::MoveRobot_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_ROS2_INTERFACES__SRV__DETAIL__MOVE_ROBOT__TRAITS_HPP_
