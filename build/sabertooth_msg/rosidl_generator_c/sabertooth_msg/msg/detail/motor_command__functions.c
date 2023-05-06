// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sabertooth_msg:msg/MotorCommand.idl
// generated code does not contain a copyright notice
#include "sabertooth_msg/msg/detail/motor_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sabertooth_msg__msg__MotorCommand__init(sabertooth_msg__msg__MotorCommand * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  // drive_speed
  // steer_speed
  return true;
}

void
sabertooth_msg__msg__MotorCommand__fini(sabertooth_msg__msg__MotorCommand * msg)
{
  if (!msg) {
    return;
  }
  // direction
  // drive_speed
  // steer_speed
}

bool
sabertooth_msg__msg__MotorCommand__are_equal(const sabertooth_msg__msg__MotorCommand * lhs, const sabertooth_msg__msg__MotorCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // drive_speed
  if (lhs->drive_speed != rhs->drive_speed) {
    return false;
  }
  // steer_speed
  if (lhs->steer_speed != rhs->steer_speed) {
    return false;
  }
  return true;
}

bool
sabertooth_msg__msg__MotorCommand__copy(
  const sabertooth_msg__msg__MotorCommand * input,
  sabertooth_msg__msg__MotorCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // direction
  output->direction = input->direction;
  // drive_speed
  output->drive_speed = input->drive_speed;
  // steer_speed
  output->steer_speed = input->steer_speed;
  return true;
}

sabertooth_msg__msg__MotorCommand *
sabertooth_msg__msg__MotorCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sabertooth_msg__msg__MotorCommand * msg = (sabertooth_msg__msg__MotorCommand *)allocator.allocate(sizeof(sabertooth_msg__msg__MotorCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sabertooth_msg__msg__MotorCommand));
  bool success = sabertooth_msg__msg__MotorCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sabertooth_msg__msg__MotorCommand__destroy(sabertooth_msg__msg__MotorCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sabertooth_msg__msg__MotorCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sabertooth_msg__msg__MotorCommand__Sequence__init(sabertooth_msg__msg__MotorCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sabertooth_msg__msg__MotorCommand * data = NULL;

  if (size) {
    data = (sabertooth_msg__msg__MotorCommand *)allocator.zero_allocate(size, sizeof(sabertooth_msg__msg__MotorCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sabertooth_msg__msg__MotorCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sabertooth_msg__msg__MotorCommand__fini(&data[i - 1]);
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
sabertooth_msg__msg__MotorCommand__Sequence__fini(sabertooth_msg__msg__MotorCommand__Sequence * array)
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
      sabertooth_msg__msg__MotorCommand__fini(&array->data[i]);
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

sabertooth_msg__msg__MotorCommand__Sequence *
sabertooth_msg__msg__MotorCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sabertooth_msg__msg__MotorCommand__Sequence * array = (sabertooth_msg__msg__MotorCommand__Sequence *)allocator.allocate(sizeof(sabertooth_msg__msg__MotorCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sabertooth_msg__msg__MotorCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sabertooth_msg__msg__MotorCommand__Sequence__destroy(sabertooth_msg__msg__MotorCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sabertooth_msg__msg__MotorCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sabertooth_msg__msg__MotorCommand__Sequence__are_equal(const sabertooth_msg__msg__MotorCommand__Sequence * lhs, const sabertooth_msg__msg__MotorCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sabertooth_msg__msg__MotorCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sabertooth_msg__msg__MotorCommand__Sequence__copy(
  const sabertooth_msg__msg__MotorCommand__Sequence * input,
  sabertooth_msg__msg__MotorCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sabertooth_msg__msg__MotorCommand);
    sabertooth_msg__msg__MotorCommand * data =
      (sabertooth_msg__msg__MotorCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sabertooth_msg__msg__MotorCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          sabertooth_msg__msg__MotorCommand__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sabertooth_msg__msg__MotorCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
