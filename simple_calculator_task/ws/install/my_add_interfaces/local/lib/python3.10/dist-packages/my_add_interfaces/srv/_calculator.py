# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_add_interfaces:srv/Calculator.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Calculator_Request(type):
    """Metaclass of message 'Calculator_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_add_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_add_interfaces.srv.Calculator_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__calculator__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__calculator__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__calculator__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__calculator__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__calculator__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Calculator_Request(metaclass=Metaclass_Calculator_Request):
    """Message class 'Calculator_Request'."""

    __slots__ = [
        '_my_ans',
    ]

    _fields_and_field_types = {
        'my_ans': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.my_ans = kwargs.get('my_ans', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.my_ans != other.my_ans:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def my_ans(self):
        """Message field 'my_ans'."""
        return self._my_ans

    @my_ans.setter
    def my_ans(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'my_ans' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'my_ans' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._my_ans = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Calculator_Response(type):
    """Metaclass of message 'Calculator_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_add_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_add_interfaces.srv.Calculator_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__calculator__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__calculator__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__calculator__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__calculator__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__calculator__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Calculator_Response(metaclass=Metaclass_Calculator_Response):
    """Message class 'Calculator_Response'."""

    __slots__ = [
        '_flag',
    ]

    _fields_and_field_types = {
        'flag': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.flag = kwargs.get('flag', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.flag != other.flag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def flag(self):
        """Message field 'flag'."""
        return self._flag

    @flag.setter
    def flag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag' field must be of type 'bool'"
        self._flag = value


class Metaclass_Calculator(type):
    """Metaclass of service 'Calculator'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_add_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_add_interfaces.srv.Calculator')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__calculator

            from my_add_interfaces.srv import _calculator
            if _calculator.Metaclass_Calculator_Request._TYPE_SUPPORT is None:
                _calculator.Metaclass_Calculator_Request.__import_type_support__()
            if _calculator.Metaclass_Calculator_Response._TYPE_SUPPORT is None:
                _calculator.Metaclass_Calculator_Response.__import_type_support__()


class Calculator(metaclass=Metaclass_Calculator):
    from my_add_interfaces.srv._calculator import Calculator_Request as Request
    from my_add_interfaces.srv._calculator import Calculator_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
