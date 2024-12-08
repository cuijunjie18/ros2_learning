// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_add_interfaces:msg/MyAdd.idl
// generated code does not contain a copyright notice

#ifndef MY_ADD_INTERFACES__MSG__DETAIL__MY_ADD__FUNCTIONS_H_
#define MY_ADD_INTERFACES__MSG__DETAIL__MY_ADD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_add_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "my_add_interfaces/msg/detail/my_add__struct.h"

/// Initialize msg/MyAdd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_add_interfaces__msg__MyAdd
 * )) before or use
 * my_add_interfaces__msg__MyAdd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_add_interfaces
bool
my_add_interfaces__msg__MyAdd__init(my_add_interfaces__msg__MyAdd * msg);

/// Finalize msg/MyAdd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_add_interfaces
void
my_add_interfaces__msg__MyAdd__fini(my_add_interfaces__msg__MyAdd * msg);

/// Create msg/MyAdd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_add_interfaces__msg__MyAdd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_add_interfaces
my_add_interfaces__msg__MyAdd *
my_add_interfaces__msg__MyAdd__create();

/// Destroy msg/MyAdd message.
/**
 * It calls
 * my_add_interfaces__msg__MyAdd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_add_interfaces
void
my_add_interfaces__msg__MyAdd__destroy(my_add_interfaces__msg__MyAdd * msg);

/// Check for msg/MyAdd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_add_interfaces
bool
my_add_interfaces__msg__MyAdd__are_equal(const my_add_interfaces__msg__MyAdd * lhs, const my_add_interfaces__msg__MyAdd * rhs);

/// Copy a msg/MyAdd message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_add_interfaces
bool
my_add_interfaces__msg__MyAdd__copy(
  const my_add_interfaces__msg__MyAdd * input,
  my_add_interfaces__msg__MyAdd * output);

/// Initialize array of msg/MyAdd messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_add_interfaces__msg__MyAdd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_add_interfaces
bool
my_add_interfaces__msg__MyAdd__Sequence__init(my_add_interfaces__msg__MyAdd__Sequence * array, size_t size);

/// Finalize array of msg/MyAdd messages.
/**
 * It calls
 * my_add_interfaces__msg__MyAdd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_add_interfaces
void
my_add_interfaces__msg__MyAdd__Sequence__fini(my_add_interfaces__msg__MyAdd__Sequence * array);

/// Create array of msg/MyAdd messages.
/**
 * It allocates the memory for the array and calls
 * my_add_interfaces__msg__MyAdd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_add_interfaces
my_add_interfaces__msg__MyAdd__Sequence *
my_add_interfaces__msg__MyAdd__Sequence__create(size_t size);

/// Destroy array of msg/MyAdd messages.
/**
 * It calls
 * my_add_interfaces__msg__MyAdd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_add_interfaces
void
my_add_interfaces__msg__MyAdd__Sequence__destroy(my_add_interfaces__msg__MyAdd__Sequence * array);

/// Check for msg/MyAdd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_add_interfaces
bool
my_add_interfaces__msg__MyAdd__Sequence__are_equal(const my_add_interfaces__msg__MyAdd__Sequence * lhs, const my_add_interfaces__msg__MyAdd__Sequence * rhs);

/// Copy an array of msg/MyAdd messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_add_interfaces
bool
my_add_interfaces__msg__MyAdd__Sequence__copy(
  const my_add_interfaces__msg__MyAdd__Sequence * input,
  my_add_interfaces__msg__MyAdd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_ADD_INTERFACES__MSG__DETAIL__MY_ADD__FUNCTIONS_H_
