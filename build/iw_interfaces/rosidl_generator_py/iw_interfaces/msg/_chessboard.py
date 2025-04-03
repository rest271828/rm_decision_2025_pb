# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iw_interfaces:msg/Chessboard.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Chessboard(type):
    """Metaclass of message 'Chessboard'."""

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
            module = import_type_support('iw_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'iw_interfaces.msg.Chessboard')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__chessboard
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__chessboard
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__chessboard
            cls._TYPE_SUPPORT = module.type_support_msg__msg__chessboard
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__chessboard

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from iw_interfaces.msg import Architecture
            if Architecture.__class__._TYPE_SUPPORT is None:
                Architecture.__class__.__import_type_support__()

            from iw_interfaces.msg import Robot
            if Robot.__class__._TYPE_SUPPORT is None:
                Robot.__class__.__import_type_support__()

            from iw_interfaces.msg import Terrain
            if Terrain.__class__._TYPE_SUPPORT is None:
                Terrain.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Chessboard(metaclass=Metaclass_Chessboard):
    """Message class 'Chessboard'."""

    __slots__ = [
        '_faction',
        '_initialed',
        '_timestamp',
        '_robots',
        '_terrains',
        '_architectures',
    ]

    _fields_and_field_types = {
        'faction': 'uint32',
        'initialed': 'boolean',
        'timestamp': 'builtin_interfaces/Time',
        'robots': 'sequence<iw_interfaces/Robot>',
        'terrains': 'sequence<iw_interfaces/Terrain>',
        'architectures': 'sequence<iw_interfaces/Architecture>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['iw_interfaces', 'msg'], 'Robot')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['iw_interfaces', 'msg'], 'Terrain')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['iw_interfaces', 'msg'], 'Architecture')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.faction = kwargs.get('faction', int())
        self.initialed = kwargs.get('initialed', bool())
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.robots = kwargs.get('robots', [])
        self.terrains = kwargs.get('terrains', [])
        self.architectures = kwargs.get('architectures', [])

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
        if self.faction != other.faction:
            return False
        if self.initialed != other.initialed:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.robots != other.robots:
            return False
        if self.terrains != other.terrains:
            return False
        if self.architectures != other.architectures:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def faction(self):
        """Message field 'faction'."""
        return self._faction

    @faction.setter
    def faction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'faction' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'faction' field must be an unsigned integer in [0, 4294967295]"
        self._faction = value

    @builtins.property
    def initialed(self):
        """Message field 'initialed'."""
        return self._initialed

    @initialed.setter
    def initialed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'initialed' field must be of type 'bool'"
        self._initialed = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

    @builtins.property
    def robots(self):
        """Message field 'robots'."""
        return self._robots

    @robots.setter
    def robots(self, value):
        if __debug__:
            from iw_interfaces.msg import Robot
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Robot) for v in value) and
                 True), \
                "The 'robots' field must be a set or sequence and each value of type 'Robot'"
        self._robots = value

    @builtins.property
    def terrains(self):
        """Message field 'terrains'."""
        return self._terrains

    @terrains.setter
    def terrains(self, value):
        if __debug__:
            from iw_interfaces.msg import Terrain
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Terrain) for v in value) and
                 True), \
                "The 'terrains' field must be a set or sequence and each value of type 'Terrain'"
        self._terrains = value

    @builtins.property
    def architectures(self):
        """Message field 'architectures'."""
        return self._architectures

    @architectures.setter
    def architectures(self, value):
        if __debug__:
            from iw_interfaces.msg import Architecture
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Architecture) for v in value) and
                 True), \
                "The 'architectures' field must be a set or sequence and each value of type 'Architecture'"
        self._architectures = value
