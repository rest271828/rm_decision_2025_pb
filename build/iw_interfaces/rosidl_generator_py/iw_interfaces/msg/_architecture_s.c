// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from iw_interfaces:msg/Architecture.idl
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
#include "iw_interfaces/msg/detail/architecture__struct.h"
#include "iw_interfaces/msg/detail/architecture__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "iw_interfaces/msg/detail/plane_coordinate__functions.h"
// end nested array functions include
bool iw_interfaces__msg__plane_coordinate__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * iw_interfaces__msg__plane_coordinate__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool iw_interfaces__msg__architecture__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("iw_interfaces.msg._architecture.Architecture", full_classname_dest, 44) == 0);
  }
  iw_interfaces__msg__Architecture * ros_message = _ros_message;
  {  // label
    PyObject * field = PyObject_GetAttrString(_pymsg, "label");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->label, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // vertices
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertices");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'vertices'");
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
    if (!iw_interfaces__msg__PlaneCoordinate__Sequence__init(&(ros_message->vertices), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create iw_interfaces__msg__PlaneCoordinate__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    iw_interfaces__msg__PlaneCoordinate * dest = ros_message->vertices.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!iw_interfaces__msg__plane_coordinate__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hp = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // faction
    PyObject * field = PyObject_GetAttrString(_pymsg, "faction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->faction = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * iw_interfaces__msg__architecture__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Architecture */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("iw_interfaces.msg._architecture");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Architecture");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  iw_interfaces__msg__Architecture * ros_message = (iw_interfaces__msg__Architecture *)raw_ros_message;
  {  // label
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->label.data,
      strlen(ros_message->label.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "label", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertices
    PyObject * field = NULL;
    size_t size = ros_message->vertices.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    iw_interfaces__msg__PlaneCoordinate * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->vertices.data[i]);
      PyObject * pyitem = iw_interfaces__msg__plane_coordinate__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "vertices", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
