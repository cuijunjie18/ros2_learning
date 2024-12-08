// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_add_interfaces:srv/Calculator.idl
// generated code does not contain a copyright notice

#ifndef MY_ADD_INTERFACES__SRV__DETAIL__CALCULATOR__TRAITS_HPP_
#define MY_ADD_INTERFACES__SRV__DETAIL__CALCULATOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_add_interfaces/srv/detail/calculator__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_add_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Calculator_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: my_ans
  {
    out << "my_ans: ";
    rosidl_generator_traits::value_to_yaml(msg.my_ans, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Calculator_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: my_ans
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "my_ans: ";
    rosidl_generator_traits::value_to_yaml(msg.my_ans, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Calculator_Request & msg, bool use_flow_style = false)
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

}  // namespace my_add_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_add_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_add_interfaces::srv::Calculator_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_add_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_add_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_add_interfaces::srv::Calculator_Request & msg)
{
  return my_add_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_add_interfaces::srv::Calculator_Request>()
{
  return "my_add_interfaces::srv::Calculator_Request";
}

template<>
inline const char * name<my_add_interfaces::srv::Calculator_Request>()
{
  return "my_add_interfaces/srv/Calculator_Request";
}

template<>
struct has_fixed_size<my_add_interfaces::srv::Calculator_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_add_interfaces::srv::Calculator_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_add_interfaces::srv::Calculator_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_add_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Calculator_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: flag
  {
    out << "flag: ";
    rosidl_generator_traits::value_to_yaml(msg.flag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Calculator_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag: ";
    rosidl_generator_traits::value_to_yaml(msg.flag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Calculator_Response & msg, bool use_flow_style = false)
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

}  // namespace my_add_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_add_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_add_interfaces::srv::Calculator_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_add_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_add_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_add_interfaces::srv::Calculator_Response & msg)
{
  return my_add_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_add_interfaces::srv::Calculator_Response>()
{
  return "my_add_interfaces::srv::Calculator_Response";
}

template<>
inline const char * name<my_add_interfaces::srv::Calculator_Response>()
{
  return "my_add_interfaces/srv/Calculator_Response";
}

template<>
struct has_fixed_size<my_add_interfaces::srv::Calculator_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_add_interfaces::srv::Calculator_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_add_interfaces::srv::Calculator_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_add_interfaces::srv::Calculator>()
{
  return "my_add_interfaces::srv::Calculator";
}

template<>
inline const char * name<my_add_interfaces::srv::Calculator>()
{
  return "my_add_interfaces/srv/Calculator";
}

template<>
struct has_fixed_size<my_add_interfaces::srv::Calculator>
  : std::integral_constant<
    bool,
    has_fixed_size<my_add_interfaces::srv::Calculator_Request>::value &&
    has_fixed_size<my_add_interfaces::srv::Calculator_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_add_interfaces::srv::Calculator>
  : std::integral_constant<
    bool,
    has_bounded_size<my_add_interfaces::srv::Calculator_Request>::value &&
    has_bounded_size<my_add_interfaces::srv::Calculator_Response>::value
  >
{
};

template<>
struct is_service<my_add_interfaces::srv::Calculator>
  : std::true_type
{
};

template<>
struct is_service_request<my_add_interfaces::srv::Calculator_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_add_interfaces::srv::Calculator_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_ADD_INTERFACES__SRV__DETAIL__CALCULATOR__TRAITS_HPP_
