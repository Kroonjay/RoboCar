// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocar_interfaces:action/Motor.idl
// generated code does not contain a copyright notice

#ifndef ROBOCAR_INTERFACES__ACTION__DETAIL__MOTOR__STRUCT_H_
#define ROBOCAR_INTERFACES__ACTION__DETAIL__MOTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Motor in the package robocar_interfaces.
typedef struct robocar_interfaces__action__Motor_Goal
{
  bool reverse;
  uint16_t duty_cycle;
} robocar_interfaces__action__Motor_Goal;

// Struct for a sequence of robocar_interfaces__action__Motor_Goal.
typedef struct robocar_interfaces__action__Motor_Goal__Sequence
{
  robocar_interfaces__action__Motor_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocar_interfaces__action__Motor_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Motor in the package robocar_interfaces.
typedef struct robocar_interfaces__action__Motor_Result
{
  bool direction_changed;
  uint16_t duty_cycle_change;
} robocar_interfaces__action__Motor_Result;

// Struct for a sequence of robocar_interfaces__action__Motor_Result.
typedef struct robocar_interfaces__action__Motor_Result__Sequence
{
  robocar_interfaces__action__Motor_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocar_interfaces__action__Motor_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Motor in the package robocar_interfaces.
typedef struct robocar_interfaces__action__Motor_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} robocar_interfaces__action__Motor_Feedback;

// Struct for a sequence of robocar_interfaces__action__Motor_Feedback.
typedef struct robocar_interfaces__action__Motor_Feedback__Sequence
{
  robocar_interfaces__action__Motor_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocar_interfaces__action__Motor_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robocar_interfaces/action/detail/motor__struct.h"

/// Struct defined in action/Motor in the package robocar_interfaces.
typedef struct robocar_interfaces__action__Motor_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robocar_interfaces__action__Motor_Goal goal;
} robocar_interfaces__action__Motor_SendGoal_Request;

// Struct for a sequence of robocar_interfaces__action__Motor_SendGoal_Request.
typedef struct robocar_interfaces__action__Motor_SendGoal_Request__Sequence
{
  robocar_interfaces__action__Motor_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocar_interfaces__action__Motor_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Motor in the package robocar_interfaces.
typedef struct robocar_interfaces__action__Motor_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robocar_interfaces__action__Motor_SendGoal_Response;

// Struct for a sequence of robocar_interfaces__action__Motor_SendGoal_Response.
typedef struct robocar_interfaces__action__Motor_SendGoal_Response__Sequence
{
  robocar_interfaces__action__Motor_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocar_interfaces__action__Motor_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Motor in the package robocar_interfaces.
typedef struct robocar_interfaces__action__Motor_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robocar_interfaces__action__Motor_GetResult_Request;

// Struct for a sequence of robocar_interfaces__action__Motor_GetResult_Request.
typedef struct robocar_interfaces__action__Motor_GetResult_Request__Sequence
{
  robocar_interfaces__action__Motor_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocar_interfaces__action__Motor_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robocar_interfaces/action/detail/motor__struct.h"

/// Struct defined in action/Motor in the package robocar_interfaces.
typedef struct robocar_interfaces__action__Motor_GetResult_Response
{
  int8_t status;
  robocar_interfaces__action__Motor_Result result;
} robocar_interfaces__action__Motor_GetResult_Response;

// Struct for a sequence of robocar_interfaces__action__Motor_GetResult_Response.
typedef struct robocar_interfaces__action__Motor_GetResult_Response__Sequence
{
  robocar_interfaces__action__Motor_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocar_interfaces__action__Motor_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robocar_interfaces/action/detail/motor__struct.h"

/// Struct defined in action/Motor in the package robocar_interfaces.
typedef struct robocar_interfaces__action__Motor_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robocar_interfaces__action__Motor_Feedback feedback;
} robocar_interfaces__action__Motor_FeedbackMessage;

// Struct for a sequence of robocar_interfaces__action__Motor_FeedbackMessage.
typedef struct robocar_interfaces__action__Motor_FeedbackMessage__Sequence
{
  robocar_interfaces__action__Motor_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocar_interfaces__action__Motor_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCAR_INTERFACES__ACTION__DETAIL__MOTOR__STRUCT_H_
