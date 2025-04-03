// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rm_decision_interfaces:msg/ReceiveSerial.idl
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
#include "rm_decision_interfaces/msg/detail/receive_serial__struct.h"
#include "rm_decision_interfaces/msg/detail/receive_serial__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rm_decision_interfaces__msg__receive_serial__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("rm_decision_interfaces.msg._receive_serial.ReceiveSerial", full_classname_dest, 56) == 0);
  }
  rm_decision_interfaces__msg__ReceiveSerial * ros_message = _ros_message;
  {  // color
    PyObject * field = PyObject_GetAttrString(_pymsg, "color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->color = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // time
    PyObject * field = PyObject_GetAttrString(_pymsg, "time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // red_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_2 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_3 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_4 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_5 = (uint16_t)PyLong_AsUnsignedLong(field);
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
  {  // blue_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_2 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_3 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_4 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_5 = (uint16_t)PyLong_AsUnsignedLong(field);
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
  {  // self_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "self_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->self_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // base_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->base_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rfid_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "rfid_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rfid_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // event_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "event_data");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->event_data = (uint8_t)PyLong_AsUnsignedLong(field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rm_decision_interfaces__msg__receive_serial__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ReceiveSerial */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rm_decision_interfaces.msg._receive_serial");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ReceiveSerial");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rm_decision_interfaces__msg__ReceiveSerial * ros_message = (rm_decision_interfaces__msg__ReceiveSerial *)raw_ros_message;
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
  {  // time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_5", field);
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
  {  // blue_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_5", field);
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
  {  // self_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->self_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "self_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->base_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rfid_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rfid_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rfid_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // event_data
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->event_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "event_data", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
