// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_add_interfaces:srv/Calculator.idl
// generated code does not contain a copyright notice

#ifndef MY_ADD_INTERFACES__SRV__DETAIL__CALCULATOR__STRUCT_HPP_
#define MY_ADD_INTERFACES__SRV__DETAIL__CALCULATOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_add_interfaces__srv__Calculator_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_add_interfaces__srv__Calculator_Request __declspec(deprecated)
#endif

namespace my_add_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Calculator_Request_
{
  using Type = Calculator_Request_<ContainerAllocator>;

  explicit Calculator_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->my_ans = 0ll;
    }
  }

  explicit Calculator_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->my_ans = 0ll;
    }
  }

  // field types and members
  using _my_ans_type =
    int64_t;
  _my_ans_type my_ans;

  // setters for named parameter idiom
  Type & set__my_ans(
    const int64_t & _arg)
  {
    this->my_ans = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_add_interfaces::srv::Calculator_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_add_interfaces::srv::Calculator_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_add_interfaces::srv::Calculator_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_add_interfaces::srv::Calculator_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_add_interfaces::srv::Calculator_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_add_interfaces::srv::Calculator_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_add_interfaces::srv::Calculator_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_add_interfaces::srv::Calculator_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_add_interfaces::srv::Calculator_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_add_interfaces::srv::Calculator_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_add_interfaces__srv__Calculator_Request
    std::shared_ptr<my_add_interfaces::srv::Calculator_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_add_interfaces__srv__Calculator_Request
    std::shared_ptr<my_add_interfaces::srv::Calculator_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calculator_Request_ & other) const
  {
    if (this->my_ans != other.my_ans) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calculator_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calculator_Request_

// alias to use template instance with default allocator
using Calculator_Request =
  my_add_interfaces::srv::Calculator_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_add_interfaces


#ifndef _WIN32
# define DEPRECATED__my_add_interfaces__srv__Calculator_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_add_interfaces__srv__Calculator_Response __declspec(deprecated)
#endif

namespace my_add_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Calculator_Response_
{
  using Type = Calculator_Response_<ContainerAllocator>;

  explicit Calculator_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = false;
    }
  }

  explicit Calculator_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = false;
    }
  }

  // field types and members
  using _flag_type =
    bool;
  _flag_type flag;

  // setters for named parameter idiom
  Type & set__flag(
    const bool & _arg)
  {
    this->flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_add_interfaces::srv::Calculator_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_add_interfaces::srv::Calculator_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_add_interfaces::srv::Calculator_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_add_interfaces::srv::Calculator_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_add_interfaces::srv::Calculator_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_add_interfaces::srv::Calculator_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_add_interfaces::srv::Calculator_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_add_interfaces::srv::Calculator_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_add_interfaces::srv::Calculator_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_add_interfaces::srv::Calculator_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_add_interfaces__srv__Calculator_Response
    std::shared_ptr<my_add_interfaces::srv::Calculator_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_add_interfaces__srv__Calculator_Response
    std::shared_ptr<my_add_interfaces::srv::Calculator_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Calculator_Response_ & other) const
  {
    if (this->flag != other.flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const Calculator_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Calculator_Response_

// alias to use template instance with default allocator
using Calculator_Response =
  my_add_interfaces::srv::Calculator_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_add_interfaces

namespace my_add_interfaces
{

namespace srv
{

struct Calculator
{
  using Request = my_add_interfaces::srv::Calculator_Request;
  using Response = my_add_interfaces::srv::Calculator_Response;
};

}  // namespace srv

}  // namespace my_add_interfaces

#endif  // MY_ADD_INTERFACES__SRV__DETAIL__CALCULATOR__STRUCT_HPP_
