// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from as2_msgs:msg/MissionUpdate.idl
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
#include "as2_msgs/msg/detail/mission_update__struct.h"
#include "as2_msgs/msg/detail/mission_update__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool as2_msgs__msg__mission_update__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("as2_msgs.msg._mission_update.MissionUpdate", full_classname_dest, 42) == 0);
  }
  as2_msgs__msg__MissionUpdate * ros_message = _ros_message;
  {  // drone_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "drone_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->drone_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // mission_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mission_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // item_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "item_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->item_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // action
    PyObject * field = PyObject_GetAttrString(_pymsg, "action");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->action = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mission
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mission, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * as2_msgs__msg__mission_update__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MissionUpdate */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("as2_msgs.msg._mission_update");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MissionUpdate");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  as2_msgs__msg__MissionUpdate * ros_message = (as2_msgs__msg__MissionUpdate *)raw_ros_message;
  {  // drone_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->drone_id.data,
      strlen(ros_message->drone_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "drone_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mission_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mission_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // item_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->item_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "item_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // action
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->action);
    {
      int rc = PyObject_SetAttrString(_pymessage, "action", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mission
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mission.data,
      strlen(ros_message->mission.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
