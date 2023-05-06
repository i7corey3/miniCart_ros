# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sabertooth_msg:msg/SpeedVals.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpeedVals(type):
    """Metaclass of message 'SpeedVals'."""

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
            module = import_type_support('sabertooth_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sabertooth_msg.msg.SpeedVals')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__speed_vals
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__speed_vals
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__speed_vals
            cls._TYPE_SUPPORT = module.type_support_msg__msg__speed_vals
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__speed_vals

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpeedVals(metaclass=Metaclass_SpeedVals):
    """Message class 'SpeedVals'."""

    __slots__ = [
        '_front_left_speed',
        '_front_right_speed',
        '_back_left_speed',
        '_back_right_speed',
    ]

    _fields_and_field_types = {
        'front_left_speed': 'int32',
        'front_right_speed': 'int32',
        'back_left_speed': 'int32',
        'back_right_speed': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.front_left_speed = kwargs.get('front_left_speed', int())
        self.front_right_speed = kwargs.get('front_right_speed', int())
        self.back_left_speed = kwargs.get('back_left_speed', int())
        self.back_right_speed = kwargs.get('back_right_speed', int())

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
        if self.front_left_speed != other.front_left_speed:
            return False
        if self.front_right_speed != other.front_right_speed:
            return False
        if self.back_left_speed != other.back_left_speed:
            return False
        if self.back_right_speed != other.back_right_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def front_left_speed(self):
        """Message field 'front_left_speed'."""
        return self._front_left_speed

    @front_left_speed.setter
    def front_left_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_left_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'front_left_speed' field must be an integer in [-2147483648, 2147483647]"
        self._front_left_speed = value

    @property
    def front_right_speed(self):
        """Message field 'front_right_speed'."""
        return self._front_right_speed

    @front_right_speed.setter
    def front_right_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_right_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'front_right_speed' field must be an integer in [-2147483648, 2147483647]"
        self._front_right_speed = value

    @property
    def back_left_speed(self):
        """Message field 'back_left_speed'."""
        return self._back_left_speed

    @back_left_speed.setter
    def back_left_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'back_left_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'back_left_speed' field must be an integer in [-2147483648, 2147483647]"
        self._back_left_speed = value

    @property
    def back_right_speed(self):
        """Message field 'back_right_speed'."""
        return self._back_right_speed

    @back_right_speed.setter
    def back_right_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'back_right_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'back_right_speed' field must be an integer in [-2147483648, 2147483647]"
        self._back_right_speed = value
