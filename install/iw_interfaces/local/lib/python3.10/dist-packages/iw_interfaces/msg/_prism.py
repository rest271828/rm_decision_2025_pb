# generated from rosidl_generator_py/resource/_idl.py.em
# with input from iw_interfaces:msg/Prism.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Prism(type):
    """Metaclass of message 'Prism'."""

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
                'iw_interfaces.msg.Prism')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__prism
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__prism
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__prism
            cls._TYPE_SUPPORT = module.type_support_msg__msg__prism
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__prism

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Prism(metaclass=Metaclass_Prism):
    """Message class 'Prism'."""

    __slots__ = [
        '_self_id',
        '_self_hp',
        '_self_ammo',
        '_self_shooter_heat',
        '_self_pose',
        '_track_tracking',
        '_track_id',
        '_track_hp',
        '_track_pose',
        '_game_game_start',
        '_game_buy_ammo_ordered',
        '_game_coins',
        '_game_projectile_allowance',
        '_call_target_x',
        '_call_target_y',
        '_call_is_called',
    ]

    _fields_and_field_types = {
        'self_id': 'uint32',
        'self_hp': 'uint32',
        'self_ammo': 'uint32',
        'self_shooter_heat': 'uint32',
        'self_pose': 'geometry_msgs/PoseStamped',
        'track_tracking': 'boolean',
        'track_id': 'uint32',
        'track_hp': 'uint32',
        'track_pose': 'geometry_msgs/PoseStamped',
        'game_game_start': 'boolean',
        'game_buy_ammo_ordered': 'boolean',
        'game_coins': 'uint32',
        'game_projectile_allowance': 'uint32',
        'call_target_x': 'double',
        'call_target_y': 'double',
        'call_is_called': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.self_id = kwargs.get('self_id', int())
        self.self_hp = kwargs.get('self_hp', int())
        self.self_ammo = kwargs.get('self_ammo', int())
        self.self_shooter_heat = kwargs.get('self_shooter_heat', int())
        from geometry_msgs.msg import PoseStamped
        self.self_pose = kwargs.get('self_pose', PoseStamped())
        self.track_tracking = kwargs.get('track_tracking', bool())
        self.track_id = kwargs.get('track_id', int())
        self.track_hp = kwargs.get('track_hp', int())
        from geometry_msgs.msg import PoseStamped
        self.track_pose = kwargs.get('track_pose', PoseStamped())
        self.game_game_start = kwargs.get('game_game_start', bool())
        self.game_buy_ammo_ordered = kwargs.get('game_buy_ammo_ordered', bool())
        self.game_coins = kwargs.get('game_coins', int())
        self.game_projectile_allowance = kwargs.get('game_projectile_allowance', int())
        self.call_target_x = kwargs.get('call_target_x', float())
        self.call_target_y = kwargs.get('call_target_y', float())
        self.call_is_called = kwargs.get('call_is_called', bool())

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
        if self.self_id != other.self_id:
            return False
        if self.self_hp != other.self_hp:
            return False
        if self.self_ammo != other.self_ammo:
            return False
        if self.self_shooter_heat != other.self_shooter_heat:
            return False
        if self.self_pose != other.self_pose:
            return False
        if self.track_tracking != other.track_tracking:
            return False
        if self.track_id != other.track_id:
            return False
        if self.track_hp != other.track_hp:
            return False
        if self.track_pose != other.track_pose:
            return False
        if self.game_game_start != other.game_game_start:
            return False
        if self.game_buy_ammo_ordered != other.game_buy_ammo_ordered:
            return False
        if self.game_coins != other.game_coins:
            return False
        if self.game_projectile_allowance != other.game_projectile_allowance:
            return False
        if self.call_target_x != other.call_target_x:
            return False
        if self.call_target_y != other.call_target_y:
            return False
        if self.call_is_called != other.call_is_called:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def self_id(self):
        """Message field 'self_id'."""
        return self._self_id

    @self_id.setter
    def self_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'self_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'self_id' field must be an unsigned integer in [0, 4294967295]"
        self._self_id = value

    @builtins.property
    def self_hp(self):
        """Message field 'self_hp'."""
        return self._self_hp

    @self_hp.setter
    def self_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'self_hp' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'self_hp' field must be an unsigned integer in [0, 4294967295]"
        self._self_hp = value

    @builtins.property
    def self_ammo(self):
        """Message field 'self_ammo'."""
        return self._self_ammo

    @self_ammo.setter
    def self_ammo(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'self_ammo' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'self_ammo' field must be an unsigned integer in [0, 4294967295]"
        self._self_ammo = value

    @builtins.property
    def self_shooter_heat(self):
        """Message field 'self_shooter_heat'."""
        return self._self_shooter_heat

    @self_shooter_heat.setter
    def self_shooter_heat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'self_shooter_heat' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'self_shooter_heat' field must be an unsigned integer in [0, 4294967295]"
        self._self_shooter_heat = value

    @builtins.property
    def self_pose(self):
        """Message field 'self_pose'."""
        return self._self_pose

    @self_pose.setter
    def self_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'self_pose' field must be a sub message of type 'PoseStamped'"
        self._self_pose = value

    @builtins.property
    def track_tracking(self):
        """Message field 'track_tracking'."""
        return self._track_tracking

    @track_tracking.setter
    def track_tracking(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'track_tracking' field must be of type 'bool'"
        self._track_tracking = value

    @builtins.property
    def track_id(self):
        """Message field 'track_id'."""
        return self._track_id

    @track_id.setter
    def track_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'track_id' field must be an unsigned integer in [0, 4294967295]"
        self._track_id = value

    @builtins.property
    def track_hp(self):
        """Message field 'track_hp'."""
        return self._track_hp

    @track_hp.setter
    def track_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_hp' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'track_hp' field must be an unsigned integer in [0, 4294967295]"
        self._track_hp = value

    @builtins.property
    def track_pose(self):
        """Message field 'track_pose'."""
        return self._track_pose

    @track_pose.setter
    def track_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'track_pose' field must be a sub message of type 'PoseStamped'"
        self._track_pose = value

    @builtins.property
    def game_game_start(self):
        """Message field 'game_game_start'."""
        return self._game_game_start

    @game_game_start.setter
    def game_game_start(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'game_game_start' field must be of type 'bool'"
        self._game_game_start = value

    @builtins.property
    def game_buy_ammo_ordered(self):
        """Message field 'game_buy_ammo_ordered'."""
        return self._game_buy_ammo_ordered

    @game_buy_ammo_ordered.setter
    def game_buy_ammo_ordered(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'game_buy_ammo_ordered' field must be of type 'bool'"
        self._game_buy_ammo_ordered = value

    @builtins.property
    def game_coins(self):
        """Message field 'game_coins'."""
        return self._game_coins

    @game_coins.setter
    def game_coins(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'game_coins' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'game_coins' field must be an unsigned integer in [0, 4294967295]"
        self._game_coins = value

    @builtins.property
    def game_projectile_allowance(self):
        """Message field 'game_projectile_allowance'."""
        return self._game_projectile_allowance

    @game_projectile_allowance.setter
    def game_projectile_allowance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'game_projectile_allowance' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'game_projectile_allowance' field must be an unsigned integer in [0, 4294967295]"
        self._game_projectile_allowance = value

    @builtins.property
    def call_target_x(self):
        """Message field 'call_target_x'."""
        return self._call_target_x

    @call_target_x.setter
    def call_target_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'call_target_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'call_target_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._call_target_x = value

    @builtins.property
    def call_target_y(self):
        """Message field 'call_target_y'."""
        return self._call_target_y

    @call_target_y.setter
    def call_target_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'call_target_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'call_target_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._call_target_y = value

    @builtins.property
    def call_is_called(self):
        """Message field 'call_is_called'."""
        return self._call_is_called

    @call_is_called.setter
    def call_is_called(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'call_is_called' field must be of type 'bool'"
        self._call_is_called = value
