// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rm_decision_interfaces:msg/ToSerial.idl
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
#include "rm_decision_interfaces/msg/detail/to_serial__struct.h"
#include "rm_decision_interfaces/msg/detail/to_serial__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rm_decision_interfaces__msg__to_serial__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("rm_decision_interfaces.msg._to_serial.ToSerial", full_classname_dest, 46) == 0);
  }
  rm_decision_interfaces__msg__ToSerial * ros_message = _ros_message;
  {  // sentry_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "sentry_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sentry_cmd = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shangpo
    PyObject * field = PyObject_GetAttrString(_pymsg, "shangpo");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->shangpo = (Py_True == field);
    Py_DECREF(field);
  }
  {  // diff_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "diff_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->diff_yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rm_decision_interfaces__msg__to_serial__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ToSerial */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rm_decision_interfaces.msg._to_serial");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ToSerial");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rm_decision_interfaces__msg__ToSerial * ros_message = (rm_decision_interfaces__msg__ToSerial *)raw_ros_message;
  {  // sentry_cmd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sentry_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sentry_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shangpo
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->shangpo ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shangpo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diff_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->diff_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diff_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
