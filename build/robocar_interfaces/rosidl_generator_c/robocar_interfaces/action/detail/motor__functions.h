// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robocar_interfaces:action/Motor.idl
// generated code does not contain a copyright notice

#ifndef ROBOCAR_INTERFACES__ACTION__DETAIL__MOTOR__FUNCTIONS_H_
#define ROBOCAR_INTERFACES__ACTION__DETAIL__MOTOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robocar_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robocar_interfaces/action/detail/motor__struct.h"

/// Initialize action/Motor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robocar_interfaces__action__Motor_Goal
 * )) before or use
 * robocar_interfaces__action__Motor_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Goal__init(robocar_interfaces__action__Motor_Goal * msg);

/// Finalize action/Motor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_Goal__fini(robocar_interfaces__action__Motor_Goal * msg);

/// Create action/Motor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robocar_interfaces__action__Motor_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
robocar_interfaces__action__Motor_Goal *
robocar_interfaces__action__Motor_Goal__create();

/// Destroy action/Motor message.
/**
 * It calls
 * robocar_interfaces__action__Motor_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_Goal__destroy(robocar_interfaces__action__Motor_Goal * msg);

/// Check for action/Motor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Goal__are_equal(const robocar_interfaces__action__Motor_Goal * lhs, const robocar_interfaces__action__Motor_Goal * rhs);

/// Copy a action/Motor message.
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
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Goal__copy(
  const robocar_interfaces__action__Motor_Goal * input,
  robocar_interfaces__action__Motor_Goal * output);

/// Initialize array of action/Motor messages.
/**
 * It allocates the memory for the number of elements and calls
 * robocar_interfaces__action__Motor_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Goal__Sequence__init(robocar_interfaces__action__Motor_Goal__Sequence * array, size_t size);

/// Finalize array of action/Motor messages.
/**
 * It calls
 * robocar_interfaces__action__Motor_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_Goal__Sequence__fini(robocar_interfaces__action__Motor_Goal__Sequence * array);

/// Create array of action/Motor messages.
/**
 * It allocates the memory for the array and calls
 * robocar_interfaces__action__Motor_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
robocar_interfaces__action__Motor_Goal__Sequence *
robocar_interfaces__action__Motor_Goal__Sequence__create(size_t size);

/// Destroy array of action/Motor messages.
/**
 * It calls
 * robocar_interfaces__action__Motor_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_Goal__Sequence__destroy(robocar_interfaces__action__Motor_Goal__Sequence * array);

/// Check for action/Motor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Goal__Sequence__are_equal(const robocar_interfaces__action__Motor_Goal__Sequence * lhs, const robocar_interfaces__action__Motor_Goal__Sequence * rhs);

/// Copy an array of action/Motor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Goal__Sequence__copy(
  const robocar_interfaces__action__Motor_Goal__Sequence * input,
  robocar_interfaces__action__Motor_Goal__Sequence * output);

/// Initialize action/Motor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robocar_interfaces__action__Motor_Result
 * )) before or use
 * robocar_interfaces__action__Motor_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Result__init(robocar_interfaces__action__Motor_Result * msg);

/// Finalize action/Motor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_Result__fini(robocar_interfaces__action__Motor_Result * msg);

/// Create action/Motor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robocar_interfaces__action__Motor_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
robocar_interfaces__action__Motor_Result *
robocar_interfaces__action__Motor_Result__create();

/// Destroy action/Motor message.
/**
 * It calls
 * robocar_interfaces__action__Motor_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_Result__destroy(robocar_interfaces__action__Motor_Result * msg);

/// Check for action/Motor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Result__are_equal(const robocar_interfaces__action__Motor_Result * lhs, const robocar_interfaces__action__Motor_Result * rhs);

/// Copy a action/Motor message.
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
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Result__copy(
  const robocar_interfaces__action__Motor_Result * input,
  robocar_interfaces__action__Motor_Result * output);

/// Initialize array of action/Motor messages.
/**
 * It allocates the memory for the number of elements and calls
 * robocar_interfaces__action__Motor_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Result__Sequence__init(robocar_interfaces__action__Motor_Result__Sequence * array, size_t size);

/// Finalize array of action/Motor messages.
/**
 * It calls
 * robocar_interfaces__action__Motor_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_Result__Sequence__fini(robocar_interfaces__action__Motor_Result__Sequence * array);

/// Create array of action/Motor messages.
/**
 * It allocates the memory for the array and calls
 * robocar_interfaces__action__Motor_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
robocar_interfaces__action__Motor_Result__Sequence *
robocar_interfaces__action__Motor_Result__Sequence__create(size_t size);

/// Destroy array of action/Motor messages.
/**
 * It calls
 * robocar_interfaces__action__Motor_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_Result__Sequence__destroy(robocar_interfaces__action__Motor_Result__Sequence * array);

/// Check for action/Motor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Result__Sequence__are_equal(const robocar_interfaces__action__Motor_Result__Sequence * lhs, const robocar_interfaces__action__Motor_Result__Sequence * rhs);

/// Copy an array of action/Motor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Result__Sequence__copy(
  const robocar_interfaces__action__Motor_Result__Sequence * input,
  robocar_interfaces__action__Motor_Result__Sequence * output);

/// Initialize action/Motor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robocar_interfaces__action__Motor_Feedback
 * )) before or use
 * robocar_interfaces__action__Motor_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Feedback__init(robocar_interfaces__action__Motor_Feedback * msg);

/// Finalize action/Motor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_Feedback__fini(robocar_interfaces__action__Motor_Feedback * msg);

/// Create action/Motor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robocar_interfaces__action__Motor_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
robocar_interfaces__action__Motor_Feedback *
robocar_interfaces__action__Motor_Feedback__create();

/// Destroy action/Motor message.
/**
 * It calls
 * robocar_interfaces__action__Motor_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_Feedback__destroy(robocar_interfaces__action__Motor_Feedback * msg);

/// Check for action/Motor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Feedback__are_equal(const robocar_interfaces__action__Motor_Feedback * lhs, const robocar_interfaces__action__Motor_Feedback * rhs);

/// Copy a action/Motor message.
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
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Feedback__copy(
  const robocar_interfaces__action__Motor_Feedback * input,
  robocar_interfaces__action__Motor_Feedback * output);

/// Initialize array of action/Motor messages.
/**
 * It allocates the memory for the number of elements and calls
 * robocar_interfaces__action__Motor_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Feedback__Sequence__init(robocar_interfaces__action__Motor_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Motor messages.
/**
 * It calls
 * robocar_interfaces__action__Motor_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_Feedback__Sequence__fini(robocar_interfaces__action__Motor_Feedback__Sequence * array);

/// Create array of action/Motor messages.
/**
 * It allocates the memory for the array and calls
 * robocar_interfaces__action__Motor_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
robocar_interfaces__action__Motor_Feedback__Sequence *
robocar_interfaces__action__Motor_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Motor messages.
/**
 * It calls
 * robocar_interfaces__action__Motor_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_Feedback__Sequence__destroy(robocar_interfaces__action__Motor_Feedback__Sequence * array);

/// Check for action/Motor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Feedback__Sequence__are_equal(const robocar_interfaces__action__Motor_Feedback__Sequence * lhs, const robocar_interfaces__action__Motor_Feedback__Sequence * rhs);

/// Copy an array of action/Motor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_Feedback__Sequence__copy(
  const robocar_interfaces__action__Motor_Feedback__Sequence * input,
  robocar_interfaces__action__Motor_Feedback__Sequence * output);

/// Initialize action/Motor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robocar_interfaces__action__Motor_SendGoal_Request
 * )) before or use
 * robocar_interfaces__action__Motor_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_SendGoal_Request__init(robocar_interfaces__action__Motor_SendGoal_Request * msg);

/// Finalize action/Motor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_SendGoal_Request__fini(robocar_interfaces__action__Motor_SendGoal_Request * msg);

/// Create action/Motor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robocar_interfaces__action__Motor_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
robocar_interfaces__action__Motor_SendGoal_Request *
robocar_interfaces__action__Motor_SendGoal_Request__create();

/// Destroy action/Motor message.
/**
 * It calls
 * robocar_interfaces__action__Motor_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_SendGoal_Request__destroy(robocar_interfaces__action__Motor_SendGoal_Request * msg);

/// Check for action/Motor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_SendGoal_Request__are_equal(const robocar_interfaces__action__Motor_SendGoal_Request * lhs, const robocar_interfaces__action__Motor_SendGoal_Request * rhs);

/// Copy a action/Motor message.
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
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_SendGoal_Request__copy(
  const robocar_interfaces__action__Motor_SendGoal_Request * input,
  robocar_interfaces__action__Motor_SendGoal_Request * output);

/// Initialize array of action/Motor messages.
/**
 * It allocates the memory for the number of elements and calls
 * robocar_interfaces__action__Motor_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_SendGoal_Request__Sequence__init(robocar_interfaces__action__Motor_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Motor messages.
/**
 * It calls
 * robocar_interfaces__action__Motor_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_SendGoal_Request__Sequence__fini(robocar_interfaces__action__Motor_SendGoal_Request__Sequence * array);

/// Create array of action/Motor messages.
/**
 * It allocates the memory for the array and calls
 * robocar_interfaces__action__Motor_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
robocar_interfaces__action__Motor_SendGoal_Request__Sequence *
robocar_interfaces__action__Motor_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Motor messages.
/**
 * It calls
 * robocar_interfaces__action__Motor_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_SendGoal_Request__Sequence__destroy(robocar_interfaces__action__Motor_SendGoal_Request__Sequence * array);

/// Check for action/Motor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_SendGoal_Request__Sequence__are_equal(const robocar_interfaces__action__Motor_SendGoal_Request__Sequence * lhs, const robocar_interfaces__action__Motor_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Motor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_SendGoal_Request__Sequence__copy(
  const robocar_interfaces__action__Motor_SendGoal_Request__Sequence * input,
  robocar_interfaces__action__Motor_SendGoal_Request__Sequence * output);

/// Initialize action/Motor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robocar_interfaces__action__Motor_SendGoal_Response
 * )) before or use
 * robocar_interfaces__action__Motor_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_SendGoal_Response__init(robocar_interfaces__action__Motor_SendGoal_Response * msg);

/// Finalize action/Motor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_SendGoal_Response__fini(robocar_interfaces__action__Motor_SendGoal_Response * msg);

/// Create action/Motor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robocar_interfaces__action__Motor_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
robocar_interfaces__action__Motor_SendGoal_Response *
robocar_interfaces__action__Motor_SendGoal_Response__create();

/// Destroy action/Motor message.
/**
 * It calls
 * robocar_interfaces__action__Motor_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_SendGoal_Response__destroy(robocar_interfaces__action__Motor_SendGoal_Response * msg);

/// Check for action/Motor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_SendGoal_Response__are_equal(const robocar_interfaces__action__Motor_SendGoal_Response * lhs, const robocar_interfaces__action__Motor_SendGoal_Response * rhs);

/// Copy a action/Motor message.
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
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_SendGoal_Response__copy(
  const robocar_interfaces__action__Motor_SendGoal_Response * input,
  robocar_interfaces__action__Motor_SendGoal_Response * output);

/// Initialize array of action/Motor messages.
/**
 * It allocates the memory for the number of elements and calls
 * robocar_interfaces__action__Motor_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_SendGoal_Response__Sequence__init(robocar_interfaces__action__Motor_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Motor messages.
/**
 * It calls
 * robocar_interfaces__action__Motor_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_SendGoal_Response__Sequence__fini(robocar_interfaces__action__Motor_SendGoal_Response__Sequence * array);

/// Create array of action/Motor messages.
/**
 * It allocates the memory for the array and calls
 * robocar_interfaces__action__Motor_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
robocar_interfaces__action__Motor_SendGoal_Response__Sequence *
robocar_interfaces__action__Motor_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Motor messages.
/**
 * It calls
 * robocar_interfaces__action__Motor_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_SendGoal_Response__Sequence__destroy(robocar_interfaces__action__Motor_SendGoal_Response__Sequence * array);

/// Check for action/Motor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_SendGoal_Response__Sequence__are_equal(const robocar_interfaces__action__Motor_SendGoal_Response__Sequence * lhs, const robocar_interfaces__action__Motor_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Motor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_SendGoal_Response__Sequence__copy(
  const robocar_interfaces__action__Motor_SendGoal_Response__Sequence * input,
  robocar_interfaces__action__Motor_SendGoal_Response__Sequence * output);

/// Initialize action/Motor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robocar_interfaces__action__Motor_GetResult_Request
 * )) before or use
 * robocar_interfaces__action__Motor_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_GetResult_Request__init(robocar_interfaces__action__Motor_GetResult_Request * msg);

/// Finalize action/Motor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_GetResult_Request__fini(robocar_interfaces__action__Motor_GetResult_Request * msg);

/// Create action/Motor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robocar_interfaces__action__Motor_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
robocar_interfaces__action__Motor_GetResult_Request *
robocar_interfaces__action__Motor_GetResult_Request__create();

/// Destroy action/Motor message.
/**
 * It calls
 * robocar_interfaces__action__Motor_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_GetResult_Request__destroy(robocar_interfaces__action__Motor_GetResult_Request * msg);

/// Check for action/Motor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_GetResult_Request__are_equal(const robocar_interfaces__action__Motor_GetResult_Request * lhs, const robocar_interfaces__action__Motor_GetResult_Request * rhs);

/// Copy a action/Motor message.
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
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_GetResult_Request__copy(
  const robocar_interfaces__action__Motor_GetResult_Request * input,
  robocar_interfaces__action__Motor_GetResult_Request * output);

/// Initialize array of action/Motor messages.
/**
 * It allocates the memory for the number of elements and calls
 * robocar_interfaces__action__Motor_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_GetResult_Request__Sequence__init(robocar_interfaces__action__Motor_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Motor messages.
/**
 * It calls
 * robocar_interfaces__action__Motor_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_GetResult_Request__Sequence__fini(robocar_interfaces__action__Motor_GetResult_Request__Sequence * array);

/// Create array of action/Motor messages.
/**
 * It allocates the memory for the array and calls
 * robocar_interfaces__action__Motor_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
robocar_interfaces__action__Motor_GetResult_Request__Sequence *
robocar_interfaces__action__Motor_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Motor messages.
/**
 * It calls
 * robocar_interfaces__action__Motor_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_GetResult_Request__Sequence__destroy(robocar_interfaces__action__Motor_GetResult_Request__Sequence * array);

/// Check for action/Motor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_GetResult_Request__Sequence__are_equal(const robocar_interfaces__action__Motor_GetResult_Request__Sequence * lhs, const robocar_interfaces__action__Motor_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Motor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_GetResult_Request__Sequence__copy(
  const robocar_interfaces__action__Motor_GetResult_Request__Sequence * input,
  robocar_interfaces__action__Motor_GetResult_Request__Sequence * output);

/// Initialize action/Motor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robocar_interfaces__action__Motor_GetResult_Response
 * )) before or use
 * robocar_interfaces__action__Motor_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_GetResult_Response__init(robocar_interfaces__action__Motor_GetResult_Response * msg);

/// Finalize action/Motor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_GetResult_Response__fini(robocar_interfaces__action__Motor_GetResult_Response * msg);

/// Create action/Motor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robocar_interfaces__action__Motor_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
robocar_interfaces__action__Motor_GetResult_Response *
robocar_interfaces__action__Motor_GetResult_Response__create();

/// Destroy action/Motor message.
/**
 * It calls
 * robocar_interfaces__action__Motor_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_GetResult_Response__destroy(robocar_interfaces__action__Motor_GetResult_Response * msg);

/// Check for action/Motor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_GetResult_Response__are_equal(const robocar_interfaces__action__Motor_GetResult_Response * lhs, const robocar_interfaces__action__Motor_GetResult_Response * rhs);

/// Copy a action/Motor message.
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
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_GetResult_Response__copy(
  const robocar_interfaces__action__Motor_GetResult_Response * input,
  robocar_interfaces__action__Motor_GetResult_Response * output);

/// Initialize array of action/Motor messages.
/**
 * It allocates the memory for the number of elements and calls
 * robocar_interfaces__action__Motor_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_GetResult_Response__Sequence__init(robocar_interfaces__action__Motor_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Motor messages.
/**
 * It calls
 * robocar_interfaces__action__Motor_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_GetResult_Response__Sequence__fini(robocar_interfaces__action__Motor_GetResult_Response__Sequence * array);

/// Create array of action/Motor messages.
/**
 * It allocates the memory for the array and calls
 * robocar_interfaces__action__Motor_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
robocar_interfaces__action__Motor_GetResult_Response__Sequence *
robocar_interfaces__action__Motor_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Motor messages.
/**
 * It calls
 * robocar_interfaces__action__Motor_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_GetResult_Response__Sequence__destroy(robocar_interfaces__action__Motor_GetResult_Response__Sequence * array);

/// Check for action/Motor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_GetResult_Response__Sequence__are_equal(const robocar_interfaces__action__Motor_GetResult_Response__Sequence * lhs, const robocar_interfaces__action__Motor_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Motor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_GetResult_Response__Sequence__copy(
  const robocar_interfaces__action__Motor_GetResult_Response__Sequence * input,
  robocar_interfaces__action__Motor_GetResult_Response__Sequence * output);

/// Initialize action/Motor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robocar_interfaces__action__Motor_FeedbackMessage
 * )) before or use
 * robocar_interfaces__action__Motor_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_FeedbackMessage__init(robocar_interfaces__action__Motor_FeedbackMessage * msg);

/// Finalize action/Motor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_FeedbackMessage__fini(robocar_interfaces__action__Motor_FeedbackMessage * msg);

/// Create action/Motor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robocar_interfaces__action__Motor_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
robocar_interfaces__action__Motor_FeedbackMessage *
robocar_interfaces__action__Motor_FeedbackMessage__create();

/// Destroy action/Motor message.
/**
 * It calls
 * robocar_interfaces__action__Motor_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_FeedbackMessage__destroy(robocar_interfaces__action__Motor_FeedbackMessage * msg);

/// Check for action/Motor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_FeedbackMessage__are_equal(const robocar_interfaces__action__Motor_FeedbackMessage * lhs, const robocar_interfaces__action__Motor_FeedbackMessage * rhs);

/// Copy a action/Motor message.
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
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_FeedbackMessage__copy(
  const robocar_interfaces__action__Motor_FeedbackMessage * input,
  robocar_interfaces__action__Motor_FeedbackMessage * output);

/// Initialize array of action/Motor messages.
/**
 * It allocates the memory for the number of elements and calls
 * robocar_interfaces__action__Motor_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_FeedbackMessage__Sequence__init(robocar_interfaces__action__Motor_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Motor messages.
/**
 * It calls
 * robocar_interfaces__action__Motor_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_FeedbackMessage__Sequence__fini(robocar_interfaces__action__Motor_FeedbackMessage__Sequence * array);

/// Create array of action/Motor messages.
/**
 * It allocates the memory for the array and calls
 * robocar_interfaces__action__Motor_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
robocar_interfaces__action__Motor_FeedbackMessage__Sequence *
robocar_interfaces__action__Motor_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Motor messages.
/**
 * It calls
 * robocar_interfaces__action__Motor_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
void
robocar_interfaces__action__Motor_FeedbackMessage__Sequence__destroy(robocar_interfaces__action__Motor_FeedbackMessage__Sequence * array);

/// Check for action/Motor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_FeedbackMessage__Sequence__are_equal(const robocar_interfaces__action__Motor_FeedbackMessage__Sequence * lhs, const robocar_interfaces__action__Motor_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Motor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robocar_interfaces
bool
robocar_interfaces__action__Motor_FeedbackMessage__Sequence__copy(
  const robocar_interfaces__action__Motor_FeedbackMessage__Sequence * input,
  robocar_interfaces__action__Motor_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOCAR_INTERFACES__ACTION__DETAIL__MOTOR__FUNCTIONS_H_
