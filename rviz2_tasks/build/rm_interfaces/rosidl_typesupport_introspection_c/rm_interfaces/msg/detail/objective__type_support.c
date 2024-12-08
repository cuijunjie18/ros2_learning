// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rm_interfaces:msg/Objective.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rm_interfaces/msg/detail/objective__rosidl_typesupport_introspection_c.h"
#include "rm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rm_interfaces/msg/detail/objective__functions.h"
#include "rm_interfaces/msg/detail/objective__struct.h"


// Include directives for member types
// Member `pts`
#include "geometry_msgs/msg/point.h"
// Member `pts`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__Objective_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rm_interfaces__msg__Objective__init(message_memory);
}

void rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__Objective_fini_function(void * message_memory)
{
  rm_interfaces__msg__Objective__fini(message_memory);
}

size_t rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__size_function__Objective__pts(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__get_const_function__Objective__pts(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point * member =
    (const geometry_msgs__msg__Point *)(untyped_member);
  return &member[index];
}

void * rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__get_function__Objective__pts(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point * member =
    (geometry_msgs__msg__Point *)(untyped_member);
  return &member[index];
}

void rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__fetch_function__Objective__pts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__get_const_function__Objective__pts(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__assign_function__Objective__pts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__get_function__Objective__pts(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__Objective_message_member_array[1] = {
  {
    "pts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(rm_interfaces__msg__Objective, pts),  // bytes offset in struct
    NULL,  // default value
    rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__size_function__Objective__pts,  // size() function pointer
    rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__get_const_function__Objective__pts,  // get_const(index) function pointer
    rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__get_function__Objective__pts,  // get(index) function pointer
    rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__fetch_function__Objective__pts,  // fetch(index, &value) function pointer
    rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__assign_function__Objective__pts,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__Objective_message_members = {
  "rm_interfaces__msg",  // message namespace
  "Objective",  // message name
  1,  // number of fields
  sizeof(rm_interfaces__msg__Objective),
  rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__Objective_message_member_array,  // message members
  rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__Objective_init_function,  // function to initialize message memory (memory has to be allocated)
  rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__Objective_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__Objective_message_type_support_handle = {
  0,
  &rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__Objective_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rm_interfaces, msg, Objective)() {
  rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__Objective_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__Objective_message_type_support_handle.typesupport_identifier) {
    rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__Objective_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rm_interfaces__msg__Objective__rosidl_typesupport_introspection_c__Objective_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
