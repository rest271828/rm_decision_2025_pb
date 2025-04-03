// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from iw_interfaces:msg/Prism.idl
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
#include "iw_interfaces/msg/detail/prism__struct.h"
#include "iw_interfaces/msg/detail/prism__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_stamped__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool iw_interfaces__msg__prism__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
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
    assert(strncmp("iw_interfaces.msg._prism.Prism", full_classname_dest, 30) == 0);
  }
  iw_interfaces__msg__Prism * ros_message = _ros_message;
  {  // self_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "self_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->self_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // self_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "self_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->self_hp = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // self_ammo
    PyObject * field = PyObject_GetAttrString(_pymsg, "self_ammo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->self_ammo = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // self_shooter_heat
    PyObject * field = PyObject_GetAttrString(_pymsg, "self_shooter_heat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->self_shooter_heat = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // self_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "self_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_stamped__convert_from_py(field, &ros_message->self_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // track_tracking
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_tracking");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->track_tracking = (Py_True == field);
    Py_DECREF(field);
  }
  {  // track_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->track_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // track_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->track_hp = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // track_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_stamped__convert_from_py(field, &ros_message->track_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // game_game_start
    PyObject * field = PyObject_GetAttrString(_pymsg, "game_game_start");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->game_game_start = (Py_True == field);
    Py_DECREF(field);
  }
  {  // game_buy_ammo_ordered
    PyObject * field = PyObject_GetAttrString(_pymsg, "game_buy_ammo_ordered");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->game_buy_ammo_ordered = (Py_True == field);
    Py_DECREF(field);
  }
  {  // game_coins
    PyObject * field = PyObject_GetAttrString(_pymsg, "game_coins");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->game_coins = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // game_projectile_allowance
    PyObject * field = PyObject_GetAttrString(_pymsg, "game_projectile_allowance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->game_projectile_allowance = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // call_target_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "call_target_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->call_target_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // call_target_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "call_target_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->call_target_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // call_is_called
    PyObject * field = PyObject_GetAttrString(_pymsg, "call_is_called");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->call_is_called = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * iw_interfaces__msg__prism__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Prism */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("iw_interfaces.msg._prism");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Prism");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  iw_interfaces__msg__Prism * ros_message = (iw_interfaces__msg__Prism *)raw_ros_message;
  {  // self_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->self_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "self_id", field);
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
  {  // self_ammo
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->self_ammo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "self_ammo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // self_shooter_heat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->self_shooter_heat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "self_shooter_heat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // self_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_stamped__convert_to_py(&ros_message->self_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "self_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_tracking
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->track_tracking ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_tracking", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->track_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->track_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_stamped__convert_to_py(&ros_message->track_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // game_game_start
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->game_game_start ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "game_game_start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // game_buy_ammo_ordered
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->game_buy_ammo_ordered ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "game_buy_ammo_ordered", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // game_coins
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->game_coins);
    {
      int rc = PyObject_SetAttrString(_pymessage, "game_coins", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // game_projectile_allowance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->game_projectile_allowance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "game_projectile_allowance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // call_target_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->call_target_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "call_target_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // call_target_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->call_target_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "call_target_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // call_is_called
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->call_is_called ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "call_is_called", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
