// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sabertooth_msg:msg/SpeedVals.idl
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
#include "sabertooth_msg/msg/detail/speed_vals__struct.h"
#include "sabertooth_msg/msg/detail/speed_vals__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sabertooth_msg__msg__speed_vals__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("sabertooth_msg.msg._speed_vals.SpeedVals", full_classname_dest, 40) == 0);
  }
  sabertooth_msg__msg__SpeedVals * ros_message = _ros_message;
  {  // front_left_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_left_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_left_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // front_right_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_right_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_right_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // back_left_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "back_left_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->back_left_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // back_right_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "back_right_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->back_right_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sabertooth_msg__msg__speed_vals__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpeedVals */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sabertooth_msg.msg._speed_vals");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpeedVals");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sabertooth_msg__msg__SpeedVals * ros_message = (sabertooth_msg__msg__SpeedVals *)raw_ros_message;
  {  // front_left_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->front_left_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_left_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_right_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->front_right_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_right_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // back_left_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->back_left_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "back_left_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // back_right_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->back_right_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "back_right_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
