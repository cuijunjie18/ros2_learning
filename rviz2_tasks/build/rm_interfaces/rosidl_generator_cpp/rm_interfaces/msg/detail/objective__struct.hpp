// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_interfaces:msg/Objective.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__OBJECTIVE__STRUCT_HPP_
#define RM_INTERFACES__MSG__DETAIL__OBJECTIVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pts'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_interfaces__msg__Objective __attribute__((deprecated))
#else
# define DEPRECATED__rm_interfaces__msg__Objective __declspec(deprecated)
#endif

namespace rm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Objective_
{
  using Type = Objective_<ContainerAllocator>;

  explicit Objective_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pts.fill(geometry_msgs::msg::Point_<ContainerAllocator>{_init});
    }
  }

  explicit Objective_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pts(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pts.fill(geometry_msgs::msg::Point_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _pts_type =
    std::array<geometry_msgs::msg::Point_<ContainerAllocator>, 5>;
  _pts_type pts;

  // setters for named parameter idiom
  Type & set__pts(
    const std::array<geometry_msgs::msg::Point_<ContainerAllocator>, 5> & _arg)
  {
    this->pts = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t R =
    0u;
  static constexpr uint8_t G =
    255u;
  static constexpr uint8_t B =
    0u;

  // pointer types
  using RawPtr =
    rm_interfaces::msg::Objective_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_interfaces::msg::Objective_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_interfaces::msg::Objective_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_interfaces::msg::Objective_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::Objective_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::Objective_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::Objective_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::Objective_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_interfaces::msg::Objective_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_interfaces::msg::Objective_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_interfaces__msg__Objective
    std::shared_ptr<rm_interfaces::msg::Objective_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_interfaces__msg__Objective
    std::shared_ptr<rm_interfaces::msg::Objective_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Objective_ & other) const
  {
    if (this->pts != other.pts) {
      return false;
    }
    return true;
  }
  bool operator!=(const Objective_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Objective_

// alias to use template instance with default allocator
using Objective =
  rm_interfaces::msg::Objective_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Objective_<ContainerAllocator>::R;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Objective_<ContainerAllocator>::G;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Objective_<ContainerAllocator>::B;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__OBJECTIVE__STRUCT_HPP_
