// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocar_interfaces:action/Motor.idl
// generated code does not contain a copyright notice
#include "robocar_interfaces/action/detail/motor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robocar_interfaces__action__Motor_Goal__init(robocar_interfaces__action__Motor_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // reverse
  // duty_cycle
  return true;
}

void
robocar_interfaces__action__Motor_Goal__fini(robocar_interfaces__action__Motor_Goal * msg)
{
  if (!msg) {
    return;
  }
  // reverse
  // duty_cycle
}

bool
robocar_interfaces__action__Motor_Goal__are_equal(const robocar_interfaces__action__Motor_Goal * lhs, const robocar_interfaces__action__Motor_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reverse
  if (lhs->reverse != rhs->reverse) {
    return false;
  }
  // duty_cycle
  if (lhs->duty_cycle != rhs->duty_cycle) {
    return false;
  }
  return true;
}

bool
robocar_interfaces__action__Motor_Goal__copy(
  const robocar_interfaces__action__Motor_Goal * input,
  robocar_interfaces__action__Motor_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // reverse
  output->reverse = input->reverse;
  // duty_cycle
  output->duty_cycle = input->duty_cycle;
  return true;
}

robocar_interfaces__action__Motor_Goal *
robocar_interfaces__action__Motor_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_Goal * msg = (robocar_interfaces__action__Motor_Goal *)allocator.allocate(sizeof(robocar_interfaces__action__Motor_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocar_interfaces__action__Motor_Goal));
  bool success = robocar_interfaces__action__Motor_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocar_interfaces__action__Motor_Goal__destroy(robocar_interfaces__action__Motor_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocar_interfaces__action__Motor_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocar_interfaces__action__Motor_Goal__Sequence__init(robocar_interfaces__action__Motor_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_Goal * data = NULL;

  if (size) {
    data = (robocar_interfaces__action__Motor_Goal *)allocator.zero_allocate(size, sizeof(robocar_interfaces__action__Motor_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocar_interfaces__action__Motor_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocar_interfaces__action__Motor_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robocar_interfaces__action__Motor_Goal__Sequence__fini(robocar_interfaces__action__Motor_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robocar_interfaces__action__Motor_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robocar_interfaces__action__Motor_Goal__Sequence *
robocar_interfaces__action__Motor_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_Goal__Sequence * array = (robocar_interfaces__action__Motor_Goal__Sequence *)allocator.allocate(sizeof(robocar_interfaces__action__Motor_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocar_interfaces__action__Motor_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocar_interfaces__action__Motor_Goal__Sequence__destroy(robocar_interfaces__action__Motor_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocar_interfaces__action__Motor_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocar_interfaces__action__Motor_Goal__Sequence__are_equal(const robocar_interfaces__action__Motor_Goal__Sequence * lhs, const robocar_interfaces__action__Motor_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocar_interfaces__action__Motor_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocar_interfaces__action__Motor_Goal__Sequence__copy(
  const robocar_interfaces__action__Motor_Goal__Sequence * input,
  robocar_interfaces__action__Motor_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocar_interfaces__action__Motor_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robocar_interfaces__action__Motor_Goal * data =
      (robocar_interfaces__action__Motor_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocar_interfaces__action__Motor_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robocar_interfaces__action__Motor_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robocar_interfaces__action__Motor_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
robocar_interfaces__action__Motor_Result__init(robocar_interfaces__action__Motor_Result * msg)
{
  if (!msg) {
    return false;
  }
  // direction_changed
  // duty_cycle_change
  return true;
}

void
robocar_interfaces__action__Motor_Result__fini(robocar_interfaces__action__Motor_Result * msg)
{
  if (!msg) {
    return;
  }
  // direction_changed
  // duty_cycle_change
}

bool
robocar_interfaces__action__Motor_Result__are_equal(const robocar_interfaces__action__Motor_Result * lhs, const robocar_interfaces__action__Motor_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction_changed
  if (lhs->direction_changed != rhs->direction_changed) {
    return false;
  }
  // duty_cycle_change
  if (lhs->duty_cycle_change != rhs->duty_cycle_change) {
    return false;
  }
  return true;
}

bool
robocar_interfaces__action__Motor_Result__copy(
  const robocar_interfaces__action__Motor_Result * input,
  robocar_interfaces__action__Motor_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // direction_changed
  output->direction_changed = input->direction_changed;
  // duty_cycle_change
  output->duty_cycle_change = input->duty_cycle_change;
  return true;
}

robocar_interfaces__action__Motor_Result *
robocar_interfaces__action__Motor_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_Result * msg = (robocar_interfaces__action__Motor_Result *)allocator.allocate(sizeof(robocar_interfaces__action__Motor_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocar_interfaces__action__Motor_Result));
  bool success = robocar_interfaces__action__Motor_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocar_interfaces__action__Motor_Result__destroy(robocar_interfaces__action__Motor_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocar_interfaces__action__Motor_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocar_interfaces__action__Motor_Result__Sequence__init(robocar_interfaces__action__Motor_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_Result * data = NULL;

  if (size) {
    data = (robocar_interfaces__action__Motor_Result *)allocator.zero_allocate(size, sizeof(robocar_interfaces__action__Motor_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocar_interfaces__action__Motor_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocar_interfaces__action__Motor_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robocar_interfaces__action__Motor_Result__Sequence__fini(robocar_interfaces__action__Motor_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robocar_interfaces__action__Motor_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robocar_interfaces__action__Motor_Result__Sequence *
robocar_interfaces__action__Motor_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_Result__Sequence * array = (robocar_interfaces__action__Motor_Result__Sequence *)allocator.allocate(sizeof(robocar_interfaces__action__Motor_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocar_interfaces__action__Motor_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocar_interfaces__action__Motor_Result__Sequence__destroy(robocar_interfaces__action__Motor_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocar_interfaces__action__Motor_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocar_interfaces__action__Motor_Result__Sequence__are_equal(const robocar_interfaces__action__Motor_Result__Sequence * lhs, const robocar_interfaces__action__Motor_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocar_interfaces__action__Motor_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocar_interfaces__action__Motor_Result__Sequence__copy(
  const robocar_interfaces__action__Motor_Result__Sequence * input,
  robocar_interfaces__action__Motor_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocar_interfaces__action__Motor_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robocar_interfaces__action__Motor_Result * data =
      (robocar_interfaces__action__Motor_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocar_interfaces__action__Motor_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robocar_interfaces__action__Motor_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robocar_interfaces__action__Motor_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
robocar_interfaces__action__Motor_Feedback__init(robocar_interfaces__action__Motor_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
robocar_interfaces__action__Motor_Feedback__fini(robocar_interfaces__action__Motor_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
robocar_interfaces__action__Motor_Feedback__are_equal(const robocar_interfaces__action__Motor_Feedback * lhs, const robocar_interfaces__action__Motor_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
robocar_interfaces__action__Motor_Feedback__copy(
  const robocar_interfaces__action__Motor_Feedback * input,
  robocar_interfaces__action__Motor_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

robocar_interfaces__action__Motor_Feedback *
robocar_interfaces__action__Motor_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_Feedback * msg = (robocar_interfaces__action__Motor_Feedback *)allocator.allocate(sizeof(robocar_interfaces__action__Motor_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocar_interfaces__action__Motor_Feedback));
  bool success = robocar_interfaces__action__Motor_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocar_interfaces__action__Motor_Feedback__destroy(robocar_interfaces__action__Motor_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocar_interfaces__action__Motor_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocar_interfaces__action__Motor_Feedback__Sequence__init(robocar_interfaces__action__Motor_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_Feedback * data = NULL;

  if (size) {
    data = (robocar_interfaces__action__Motor_Feedback *)allocator.zero_allocate(size, sizeof(robocar_interfaces__action__Motor_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocar_interfaces__action__Motor_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocar_interfaces__action__Motor_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robocar_interfaces__action__Motor_Feedback__Sequence__fini(robocar_interfaces__action__Motor_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robocar_interfaces__action__Motor_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robocar_interfaces__action__Motor_Feedback__Sequence *
robocar_interfaces__action__Motor_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_Feedback__Sequence * array = (robocar_interfaces__action__Motor_Feedback__Sequence *)allocator.allocate(sizeof(robocar_interfaces__action__Motor_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocar_interfaces__action__Motor_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocar_interfaces__action__Motor_Feedback__Sequence__destroy(robocar_interfaces__action__Motor_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocar_interfaces__action__Motor_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocar_interfaces__action__Motor_Feedback__Sequence__are_equal(const robocar_interfaces__action__Motor_Feedback__Sequence * lhs, const robocar_interfaces__action__Motor_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocar_interfaces__action__Motor_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocar_interfaces__action__Motor_Feedback__Sequence__copy(
  const robocar_interfaces__action__Motor_Feedback__Sequence * input,
  robocar_interfaces__action__Motor_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocar_interfaces__action__Motor_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robocar_interfaces__action__Motor_Feedback * data =
      (robocar_interfaces__action__Motor_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocar_interfaces__action__Motor_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robocar_interfaces__action__Motor_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robocar_interfaces__action__Motor_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "robocar_interfaces/action/detail/motor__functions.h"

bool
robocar_interfaces__action__Motor_SendGoal_Request__init(robocar_interfaces__action__Motor_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robocar_interfaces__action__Motor_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!robocar_interfaces__action__Motor_Goal__init(&msg->goal)) {
    robocar_interfaces__action__Motor_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
robocar_interfaces__action__Motor_SendGoal_Request__fini(robocar_interfaces__action__Motor_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  robocar_interfaces__action__Motor_Goal__fini(&msg->goal);
}

bool
robocar_interfaces__action__Motor_SendGoal_Request__are_equal(const robocar_interfaces__action__Motor_SendGoal_Request * lhs, const robocar_interfaces__action__Motor_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!robocar_interfaces__action__Motor_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
robocar_interfaces__action__Motor_SendGoal_Request__copy(
  const robocar_interfaces__action__Motor_SendGoal_Request * input,
  robocar_interfaces__action__Motor_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!robocar_interfaces__action__Motor_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

robocar_interfaces__action__Motor_SendGoal_Request *
robocar_interfaces__action__Motor_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_SendGoal_Request * msg = (robocar_interfaces__action__Motor_SendGoal_Request *)allocator.allocate(sizeof(robocar_interfaces__action__Motor_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocar_interfaces__action__Motor_SendGoal_Request));
  bool success = robocar_interfaces__action__Motor_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocar_interfaces__action__Motor_SendGoal_Request__destroy(robocar_interfaces__action__Motor_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocar_interfaces__action__Motor_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocar_interfaces__action__Motor_SendGoal_Request__Sequence__init(robocar_interfaces__action__Motor_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_SendGoal_Request * data = NULL;

  if (size) {
    data = (robocar_interfaces__action__Motor_SendGoal_Request *)allocator.zero_allocate(size, sizeof(robocar_interfaces__action__Motor_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocar_interfaces__action__Motor_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocar_interfaces__action__Motor_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robocar_interfaces__action__Motor_SendGoal_Request__Sequence__fini(robocar_interfaces__action__Motor_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robocar_interfaces__action__Motor_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robocar_interfaces__action__Motor_SendGoal_Request__Sequence *
robocar_interfaces__action__Motor_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_SendGoal_Request__Sequence * array = (robocar_interfaces__action__Motor_SendGoal_Request__Sequence *)allocator.allocate(sizeof(robocar_interfaces__action__Motor_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocar_interfaces__action__Motor_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocar_interfaces__action__Motor_SendGoal_Request__Sequence__destroy(robocar_interfaces__action__Motor_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocar_interfaces__action__Motor_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocar_interfaces__action__Motor_SendGoal_Request__Sequence__are_equal(const robocar_interfaces__action__Motor_SendGoal_Request__Sequence * lhs, const robocar_interfaces__action__Motor_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocar_interfaces__action__Motor_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocar_interfaces__action__Motor_SendGoal_Request__Sequence__copy(
  const robocar_interfaces__action__Motor_SendGoal_Request__Sequence * input,
  robocar_interfaces__action__Motor_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocar_interfaces__action__Motor_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robocar_interfaces__action__Motor_SendGoal_Request * data =
      (robocar_interfaces__action__Motor_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocar_interfaces__action__Motor_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robocar_interfaces__action__Motor_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robocar_interfaces__action__Motor_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
robocar_interfaces__action__Motor_SendGoal_Response__init(robocar_interfaces__action__Motor_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    robocar_interfaces__action__Motor_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
robocar_interfaces__action__Motor_SendGoal_Response__fini(robocar_interfaces__action__Motor_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
robocar_interfaces__action__Motor_SendGoal_Response__are_equal(const robocar_interfaces__action__Motor_SendGoal_Response * lhs, const robocar_interfaces__action__Motor_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
robocar_interfaces__action__Motor_SendGoal_Response__copy(
  const robocar_interfaces__action__Motor_SendGoal_Response * input,
  robocar_interfaces__action__Motor_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

robocar_interfaces__action__Motor_SendGoal_Response *
robocar_interfaces__action__Motor_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_SendGoal_Response * msg = (robocar_interfaces__action__Motor_SendGoal_Response *)allocator.allocate(sizeof(robocar_interfaces__action__Motor_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocar_interfaces__action__Motor_SendGoal_Response));
  bool success = robocar_interfaces__action__Motor_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocar_interfaces__action__Motor_SendGoal_Response__destroy(robocar_interfaces__action__Motor_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocar_interfaces__action__Motor_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocar_interfaces__action__Motor_SendGoal_Response__Sequence__init(robocar_interfaces__action__Motor_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_SendGoal_Response * data = NULL;

  if (size) {
    data = (robocar_interfaces__action__Motor_SendGoal_Response *)allocator.zero_allocate(size, sizeof(robocar_interfaces__action__Motor_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocar_interfaces__action__Motor_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocar_interfaces__action__Motor_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robocar_interfaces__action__Motor_SendGoal_Response__Sequence__fini(robocar_interfaces__action__Motor_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robocar_interfaces__action__Motor_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robocar_interfaces__action__Motor_SendGoal_Response__Sequence *
robocar_interfaces__action__Motor_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_SendGoal_Response__Sequence * array = (robocar_interfaces__action__Motor_SendGoal_Response__Sequence *)allocator.allocate(sizeof(robocar_interfaces__action__Motor_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocar_interfaces__action__Motor_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocar_interfaces__action__Motor_SendGoal_Response__Sequence__destroy(robocar_interfaces__action__Motor_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocar_interfaces__action__Motor_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocar_interfaces__action__Motor_SendGoal_Response__Sequence__are_equal(const robocar_interfaces__action__Motor_SendGoal_Response__Sequence * lhs, const robocar_interfaces__action__Motor_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocar_interfaces__action__Motor_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocar_interfaces__action__Motor_SendGoal_Response__Sequence__copy(
  const robocar_interfaces__action__Motor_SendGoal_Response__Sequence * input,
  robocar_interfaces__action__Motor_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocar_interfaces__action__Motor_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robocar_interfaces__action__Motor_SendGoal_Response * data =
      (robocar_interfaces__action__Motor_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocar_interfaces__action__Motor_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robocar_interfaces__action__Motor_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robocar_interfaces__action__Motor_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
robocar_interfaces__action__Motor_GetResult_Request__init(robocar_interfaces__action__Motor_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robocar_interfaces__action__Motor_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
robocar_interfaces__action__Motor_GetResult_Request__fini(robocar_interfaces__action__Motor_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
robocar_interfaces__action__Motor_GetResult_Request__are_equal(const robocar_interfaces__action__Motor_GetResult_Request * lhs, const robocar_interfaces__action__Motor_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
robocar_interfaces__action__Motor_GetResult_Request__copy(
  const robocar_interfaces__action__Motor_GetResult_Request * input,
  robocar_interfaces__action__Motor_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

robocar_interfaces__action__Motor_GetResult_Request *
robocar_interfaces__action__Motor_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_GetResult_Request * msg = (robocar_interfaces__action__Motor_GetResult_Request *)allocator.allocate(sizeof(robocar_interfaces__action__Motor_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocar_interfaces__action__Motor_GetResult_Request));
  bool success = robocar_interfaces__action__Motor_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocar_interfaces__action__Motor_GetResult_Request__destroy(robocar_interfaces__action__Motor_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocar_interfaces__action__Motor_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocar_interfaces__action__Motor_GetResult_Request__Sequence__init(robocar_interfaces__action__Motor_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_GetResult_Request * data = NULL;

  if (size) {
    data = (robocar_interfaces__action__Motor_GetResult_Request *)allocator.zero_allocate(size, sizeof(robocar_interfaces__action__Motor_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocar_interfaces__action__Motor_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocar_interfaces__action__Motor_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robocar_interfaces__action__Motor_GetResult_Request__Sequence__fini(robocar_interfaces__action__Motor_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robocar_interfaces__action__Motor_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robocar_interfaces__action__Motor_GetResult_Request__Sequence *
robocar_interfaces__action__Motor_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_GetResult_Request__Sequence * array = (robocar_interfaces__action__Motor_GetResult_Request__Sequence *)allocator.allocate(sizeof(robocar_interfaces__action__Motor_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocar_interfaces__action__Motor_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocar_interfaces__action__Motor_GetResult_Request__Sequence__destroy(robocar_interfaces__action__Motor_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocar_interfaces__action__Motor_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocar_interfaces__action__Motor_GetResult_Request__Sequence__are_equal(const robocar_interfaces__action__Motor_GetResult_Request__Sequence * lhs, const robocar_interfaces__action__Motor_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocar_interfaces__action__Motor_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocar_interfaces__action__Motor_GetResult_Request__Sequence__copy(
  const robocar_interfaces__action__Motor_GetResult_Request__Sequence * input,
  robocar_interfaces__action__Motor_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocar_interfaces__action__Motor_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robocar_interfaces__action__Motor_GetResult_Request * data =
      (robocar_interfaces__action__Motor_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocar_interfaces__action__Motor_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robocar_interfaces__action__Motor_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robocar_interfaces__action__Motor_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "robocar_interfaces/action/detail/motor__functions.h"

bool
robocar_interfaces__action__Motor_GetResult_Response__init(robocar_interfaces__action__Motor_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!robocar_interfaces__action__Motor_Result__init(&msg->result)) {
    robocar_interfaces__action__Motor_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
robocar_interfaces__action__Motor_GetResult_Response__fini(robocar_interfaces__action__Motor_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  robocar_interfaces__action__Motor_Result__fini(&msg->result);
}

bool
robocar_interfaces__action__Motor_GetResult_Response__are_equal(const robocar_interfaces__action__Motor_GetResult_Response * lhs, const robocar_interfaces__action__Motor_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!robocar_interfaces__action__Motor_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
robocar_interfaces__action__Motor_GetResult_Response__copy(
  const robocar_interfaces__action__Motor_GetResult_Response * input,
  robocar_interfaces__action__Motor_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!robocar_interfaces__action__Motor_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

robocar_interfaces__action__Motor_GetResult_Response *
robocar_interfaces__action__Motor_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_GetResult_Response * msg = (robocar_interfaces__action__Motor_GetResult_Response *)allocator.allocate(sizeof(robocar_interfaces__action__Motor_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocar_interfaces__action__Motor_GetResult_Response));
  bool success = robocar_interfaces__action__Motor_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocar_interfaces__action__Motor_GetResult_Response__destroy(robocar_interfaces__action__Motor_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocar_interfaces__action__Motor_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocar_interfaces__action__Motor_GetResult_Response__Sequence__init(robocar_interfaces__action__Motor_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_GetResult_Response * data = NULL;

  if (size) {
    data = (robocar_interfaces__action__Motor_GetResult_Response *)allocator.zero_allocate(size, sizeof(robocar_interfaces__action__Motor_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocar_interfaces__action__Motor_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocar_interfaces__action__Motor_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robocar_interfaces__action__Motor_GetResult_Response__Sequence__fini(robocar_interfaces__action__Motor_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robocar_interfaces__action__Motor_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robocar_interfaces__action__Motor_GetResult_Response__Sequence *
robocar_interfaces__action__Motor_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_GetResult_Response__Sequence * array = (robocar_interfaces__action__Motor_GetResult_Response__Sequence *)allocator.allocate(sizeof(robocar_interfaces__action__Motor_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocar_interfaces__action__Motor_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocar_interfaces__action__Motor_GetResult_Response__Sequence__destroy(robocar_interfaces__action__Motor_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocar_interfaces__action__Motor_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocar_interfaces__action__Motor_GetResult_Response__Sequence__are_equal(const robocar_interfaces__action__Motor_GetResult_Response__Sequence * lhs, const robocar_interfaces__action__Motor_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocar_interfaces__action__Motor_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocar_interfaces__action__Motor_GetResult_Response__Sequence__copy(
  const robocar_interfaces__action__Motor_GetResult_Response__Sequence * input,
  robocar_interfaces__action__Motor_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocar_interfaces__action__Motor_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robocar_interfaces__action__Motor_GetResult_Response * data =
      (robocar_interfaces__action__Motor_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocar_interfaces__action__Motor_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robocar_interfaces__action__Motor_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robocar_interfaces__action__Motor_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "robocar_interfaces/action/detail/motor__functions.h"

bool
robocar_interfaces__action__Motor_FeedbackMessage__init(robocar_interfaces__action__Motor_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robocar_interfaces__action__Motor_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!robocar_interfaces__action__Motor_Feedback__init(&msg->feedback)) {
    robocar_interfaces__action__Motor_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
robocar_interfaces__action__Motor_FeedbackMessage__fini(robocar_interfaces__action__Motor_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  robocar_interfaces__action__Motor_Feedback__fini(&msg->feedback);
}

bool
robocar_interfaces__action__Motor_FeedbackMessage__are_equal(const robocar_interfaces__action__Motor_FeedbackMessage * lhs, const robocar_interfaces__action__Motor_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!robocar_interfaces__action__Motor_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
robocar_interfaces__action__Motor_FeedbackMessage__copy(
  const robocar_interfaces__action__Motor_FeedbackMessage * input,
  robocar_interfaces__action__Motor_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!robocar_interfaces__action__Motor_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

robocar_interfaces__action__Motor_FeedbackMessage *
robocar_interfaces__action__Motor_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_FeedbackMessage * msg = (robocar_interfaces__action__Motor_FeedbackMessage *)allocator.allocate(sizeof(robocar_interfaces__action__Motor_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocar_interfaces__action__Motor_FeedbackMessage));
  bool success = robocar_interfaces__action__Motor_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocar_interfaces__action__Motor_FeedbackMessage__destroy(robocar_interfaces__action__Motor_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocar_interfaces__action__Motor_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocar_interfaces__action__Motor_FeedbackMessage__Sequence__init(robocar_interfaces__action__Motor_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_FeedbackMessage * data = NULL;

  if (size) {
    data = (robocar_interfaces__action__Motor_FeedbackMessage *)allocator.zero_allocate(size, sizeof(robocar_interfaces__action__Motor_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocar_interfaces__action__Motor_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocar_interfaces__action__Motor_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robocar_interfaces__action__Motor_FeedbackMessage__Sequence__fini(robocar_interfaces__action__Motor_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robocar_interfaces__action__Motor_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robocar_interfaces__action__Motor_FeedbackMessage__Sequence *
robocar_interfaces__action__Motor_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocar_interfaces__action__Motor_FeedbackMessage__Sequence * array = (robocar_interfaces__action__Motor_FeedbackMessage__Sequence *)allocator.allocate(sizeof(robocar_interfaces__action__Motor_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocar_interfaces__action__Motor_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocar_interfaces__action__Motor_FeedbackMessage__Sequence__destroy(robocar_interfaces__action__Motor_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocar_interfaces__action__Motor_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocar_interfaces__action__Motor_FeedbackMessage__Sequence__are_equal(const robocar_interfaces__action__Motor_FeedbackMessage__Sequence * lhs, const robocar_interfaces__action__Motor_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocar_interfaces__action__Motor_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocar_interfaces__action__Motor_FeedbackMessage__Sequence__copy(
  const robocar_interfaces__action__Motor_FeedbackMessage__Sequence * input,
  robocar_interfaces__action__Motor_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocar_interfaces__action__Motor_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robocar_interfaces__action__Motor_FeedbackMessage * data =
      (robocar_interfaces__action__Motor_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocar_interfaces__action__Motor_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robocar_interfaces__action__Motor_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robocar_interfaces__action__Motor_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
