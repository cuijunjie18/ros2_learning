// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_add_interfaces:srv/Calculator.idl
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
#include "my_add_interfaces/srv/detail/calculator__struct.h"
#include "my_add_interfaces/srv/detail/calculator__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_add_interfaces__srv__calculator__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("my_add_interfaces.srv._calculator.Calculator_Request", full_classname_dest, 52) == 0);
  }
  my_add_interfaces__srv__Calculator_Request * ros_message = _ros_message;
  {  // my_ans
    PyObject * field = PyObject_GetAttrString(_pymsg, "my_ans");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->my_ans = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_add_interfaces__srv__calculator__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Calculator_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_add_interfaces.srv._calculator");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Calculator_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_add_interfaces__srv__Calculator_Request * ros_message = (my_add_interfaces__srv__Calculator_Request *)raw_ros_message;
  {  // my_ans
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->my_ans);
    {
      int rc = PyObject_SetAttrString(_pymessage, "my_ans", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "my_add_interfaces/srv/detail/calculator__struct.h"
// already included above
// #include "my_add_interfaces/srv/detail/calculator__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_add_interfaces__srv__calculator__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("my_add_interfaces.srv._calculator.Calculator_Response", full_classname_dest, 53) == 0);
  }
  my_add_interfaces__srv__Calculator_Response * ros_message = _ros_message;
  {  // flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_add_interfaces__srv__calculator__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Calculator_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_add_interfaces.srv._calculator");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Calculator_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_add_interfaces__srv__Calculator_Response * ros_message = (my_add_interfaces__srv__Calculator_Response *)raw_ros_message;
  {  // flag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
