// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_interfaces:msg/Objective.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__OBJECTIVE__TRAITS_HPP_
#define RM_INTERFACES__MSG__DETAIL__OBJECTIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_interfaces/msg/detail/objective__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pts'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Objective & msg,
  std::ostream & out)
{
  out << "{";
  // member: pts
  {
    if (msg.pts.size() == 0) {
      out << "pts: []";
    } else {
      out << "pts: [";
      size_t pending_items = msg.pts.size();
      for (auto item : msg.pts) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Objective & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pts.size() == 0) {
      out << "pts: []\n";
    } else {
      out << "pts:\n";
      for (auto item : msg.pts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Objective & msg, bool use_flow_style = false)
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

}  // namespace rm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_interfaces::msg::Objective & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_interfaces::msg::Objective & msg)
{
  return rm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_interfaces::msg::Objective>()
{
  return "rm_interfaces::msg::Objective";
}

template<>
inline const char * name<rm_interfaces::msg::Objective>()
{
  return "rm_interfaces/msg/Objective";
}

template<>
struct has_fixed_size<rm_interfaces::msg::Objective>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<rm_interfaces::msg::Objective>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<rm_interfaces::msg::Objective>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_INTERFACES__MSG__DETAIL__OBJECTIVE__TRAITS_HPP_
