// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sabertooth_msg:msg/MotorCommand.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "sabertooth_msg/msg/detail/motor_command__struct.h"
#include "sabertooth_msg/msg/detail/motor_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sabertooth_msg__msg__motor_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("sabertooth_msg.msg._motor_command.MotorCommand", full_classname_dest, 46) == 0);
  }
  sabertooth_msg__msg__MotorCommand * ros_message = _ros_message;
  {  // direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->direction = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // drive_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "drive_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drive_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // steer_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steer_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sabertooth_msg__msg__motor_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sabertooth_msg.msg._motor_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sabertooth_msg__msg__MotorCommand * ros_message = (sabertooth_msg__msg__MotorCommand *)raw_ros_message;
  {  // direction
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drive_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->drive_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drive_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->steer_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
