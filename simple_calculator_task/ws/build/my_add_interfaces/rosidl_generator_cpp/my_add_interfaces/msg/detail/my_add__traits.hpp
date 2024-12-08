// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_add_interfaces:msg/MyAdd.idl
// generated code does not contain a copyright notice

#ifndef MY_ADD_INTERFACES__MSG__DETAIL__MY_ADD__TRAITS_HPP_
#define MY_ADD_INTERFACES__MSG__DETAIL__MY_ADD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_add_interfaces/msg/detail/my_add__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_add_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MyAdd & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyAdd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyAdd & msg, bool use_flow_style = false)
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

}  // namespace my_add_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_add_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_add_interfaces::msg::MyAdd & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_add_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_add_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_add_interfaces::msg::MyAdd & msg)
{
  return my_add_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_add_interfaces::msg::MyAdd>()
{
  return "my_add_interfaces::msg::MyAdd";
}

template<>
inline const char * name<my_add_interfaces::msg::MyAdd>()
{
  return "my_add_interfaces/msg/MyAdd";
}

template<>
struct has_fixed_size<my_add_interfaces::msg::MyAdd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_add_interfaces::msg::MyAdd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_add_interfaces::msg::MyAdd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_ADD_INTERFACES__MSG__DETAIL__MY_ADD__TRAITS_HPP_
