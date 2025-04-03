// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rm_decision_interfaces:msg/FromSerial.idl
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
#include "rm_decision_interfaces/msg/detail/from_serial__struct.h"
#include "rm_decision_interfaces/msg/detail/from_serial__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rm_decision_interfaces__msg__from_serial__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("rm_decision_interfaces.msg._from_serial.FromSerial", full_classname_dest, 50) == 0);
  }
  rm_decision_interfaces__msg__FromSerial * ros_message = _ros_message;
  {  // gamestart
    PyObject * field = PyObject_GetAttrString(_pymsg, "gamestart");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gamestart = (Py_True == field);
    Py_DECREF(field);
  }
  {  // color
    PyObject * field = PyObject_GetAttrString(_pymsg, "color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->color = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // projectile_allowance_17mm
    PyObject * field = PyObject_GetAttrString(_pymsg, "projectile_allowance_17mm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->projectile_allowance_17mm = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // remaining_gold_coin
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_gold_coin");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remaining_gold_coin = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // supply_robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_robot_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->supply_robot_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // supply_projectile_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_projectile_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->supply_projectile_num = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_7
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_7");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_7 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_outpost_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_outpost_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_outpost_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_base_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_base_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_base_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_7
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_7");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_7 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_outpost_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_outpost_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_outpost_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_base_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_base_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_base_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // target_pos_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_pos_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_pos_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_pos_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_pos_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_pos_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cmd_key
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_key");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cmd_key = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rm_decision_interfaces__msg__from_serial__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FromSerial */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rm_decision_interfaces.msg._from_serial");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FromSerial");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rm_decision_interfaces__msg__FromSerial * ros_message = (rm_decision_interfaces__msg__FromSerial *)raw_ros_message;
  {  // gamestart
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gamestart ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gamestart", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // color
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // projectile_allowance_17mm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->projectile_allowance_17mm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "projectile_allowance_17mm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remaining_gold_coin
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->remaining_gold_coin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_gold_coin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supply_robot_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->supply_robot_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supply_projectile_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->supply_projectile_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_projectile_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_7
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_outpost_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_outpost_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_outpost_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_base_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_base_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_base_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_7
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_outpost_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_outpost_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_outpost_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_base_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_base_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_base_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_pos_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_pos_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_pos_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_pos_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_pos_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_pos_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_key
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cmd_key);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_key", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
