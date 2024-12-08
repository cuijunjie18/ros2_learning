// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_add_interfaces:msg/MyAdd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_add_interfaces/msg/detail/my_add__rosidl_typesupport_introspection_c.h"
#include "my_add_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_add_interfaces/msg/detail/my_add__functions.h"
#include "my_add_interfaces/msg/detail/my_add__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void my_add_interfaces__msg__MyAdd__rosidl_typesupport_introspection_c__MyAdd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_add_interfaces__msg__MyAdd__init(message_memory);
}

void my_add_interfaces__msg__MyAdd__rosidl_typesupport_introspection_c__MyAdd_fini_function(void * message_memory)
{
  my_add_interfaces__msg__MyAdd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_add_interfaces__msg__MyAdd__rosidl_typesupport_introspection_c__MyAdd_message_member_array[2] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_add_interfaces__msg__MyAdd, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_add_interfaces__msg__MyAdd, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_add_interfaces__msg__MyAdd__rosidl_typesupport_introspection_c__MyAdd_message_members = {
  "my_add_interfaces__msg",  // message namespace
  "MyAdd",  // message name
  2,  // number of fields
  sizeof(my_add_interfaces__msg__MyAdd),
  my_add_interfaces__msg__MyAdd__rosidl_typesupport_introspection_c__MyAdd_message_member_array,  // message members
  my_add_interfaces__msg__MyAdd__rosidl_typesupport_introspection_c__MyAdd_init_function,  // function to initialize message memory (memory has to be allocated)
  my_add_interfaces__msg__MyAdd__rosidl_typesupport_introspection_c__MyAdd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_add_interfaces__msg__MyAdd__rosidl_typesupport_introspection_c__MyAdd_message_type_support_handle = {
  0,
  &my_add_interfaces__msg__MyAdd__rosidl_typesupport_introspection_c__MyAdd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_add_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_add_interfaces, msg, MyAdd)() {
  if (!my_add_interfaces__msg__MyAdd__rosidl_typesupport_introspection_c__MyAdd_message_type_support_handle.typesupport_identifier) {
    my_add_interfaces__msg__MyAdd__rosidl_typesupport_introspection_c__MyAdd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_add_interfaces__msg__MyAdd__rosidl_typesupport_introspection_c__MyAdd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
