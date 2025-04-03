// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from iw_interfaces:msg/Chessboard.idl
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
#include "iw_interfaces/msg/detail/chessboard__struct.h"
#include "iw_interfaces/msg/detail/chessboard__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "iw_interfaces/msg/detail/architecture__functions.h"
#include "iw_interfaces/msg/detail/robot__functions.h"
#include "iw_interfaces/msg/detail/terrain__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool iw_interfaces__msg__robot__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * iw_interfaces__msg__robot__convert_to_py(void * raw_ros_message);
bool iw_interfaces__msg__terrain__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * iw_interfaces__msg__terrain__convert_to_py(void * raw_ros_message);
bool iw_interfaces__msg__architecture__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * iw_interfaces__msg__architecture__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool iw_interfaces__msg__chessboard__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("iw_interfaces.msg._chessboard.Chessboard", full_classname_dest, 40) == 0);
  }
  iw_interfaces__msg__Chessboard * ros_message = _ros_message;
  {  // faction
    PyObject * field = PyObject_GetAttrString(_pymsg, "faction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->faction = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // initialed
    PyObject * field = PyObject_GetAttrString(_pymsg, "initialed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->initialed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->timestamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'robots'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!iw_interfaces__msg__Robot__Sequence__init(&(ros_message->robots), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create iw_interfaces__msg__Robot__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    iw_interfaces__msg__Robot * dest = ros_message->robots.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!iw_interfaces__msg__robot__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // terrains
    PyObject * field = PyObject_GetAttrString(_pymsg, "terrains");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'terrains'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!iw_interfaces__msg__Terrain__Sequence__init(&(ros_message->terrains), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create iw_interfaces__msg__Terrain__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    iw_interfaces__msg__Terrain * dest = ros_message->terrains.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!iw_interfaces__msg__terrain__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // architectures
    PyObject * field = PyObject_GetAttrString(_pymsg, "architectures");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'architectures'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!iw_interfaces__msg__Architecture__Sequence__init(&(ros_message->architectures), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create iw_interfaces__msg__Architecture__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    iw_interfaces__msg__Architecture * dest = ros_message->architectures.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!iw_interfaces__msg__architecture__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * iw_interfaces__msg__chessboard__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Chessboard */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("iw_interfaces.msg._chessboard");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Chessboard");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  iw_interfaces__msg__Chessboard * ros_message = (iw_interfaces__msg__Chessboard *)raw_ros_message;
  {  // faction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->faction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "faction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initialed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->initialed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initialed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->timestamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robots
    PyObject * field = NULL;
    size_t size = ros_message->robots.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    iw_interfaces__msg__Robot * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->robots.data[i]);
      PyObject * pyitem = iw_interfaces__msg__robot__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // terrains
    PyObject * field = NULL;
    size_t size = ros_message->terrains.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    iw_interfaces__msg__Terrain * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->terrains.data[i]);
      PyObject * pyitem = iw_interfaces__msg__terrain__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "terrains", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // architectures
    PyObject * field = NULL;
    size_t size = ros_message->architectures.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    iw_interfaces__msg__Architecture * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->architectures.data[i]);
      PyObject * pyitem = iw_interfaces__msg__architecture__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "architectures", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
