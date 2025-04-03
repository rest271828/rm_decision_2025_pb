# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_decision_interfaces:msg/FromSerial.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FromSerial(type):
    """Metaclass of message 'FromSerial'."""

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
            module = import_type_support('rm_decision_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rm_decision_interfaces.msg.FromSerial')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__from_serial
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__from_serial
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__from_serial
            cls._TYPE_SUPPORT = module.type_support_msg__msg__from_serial
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__from_serial

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FromSerial(metaclass=Metaclass_FromSerial):
    """Message class 'FromSerial'."""

    __slots__ = [
        '_gamestart',
        '_color',
        '_projectile_allowance_17mm',
        '_remaining_gold_coin',
        '_supply_robot_id',
        '_supply_projectile_num',
        '_red_7',
        '_red_outpost_hp',
        '_red_base_hp',
        '_blue_7',
        '_blue_outpost_hp',
        '_blue_base_hp',
        '_target_pos_x',
        '_target_pos_y',
        '_cmd_key',
    ]

    _fields_and_field_types = {
        'gamestart': 'boolean',
        'color': 'uint8',
        'projectile_allowance_17mm': 'uint16',
        'remaining_gold_coin': 'uint16',
        'supply_robot_id': 'uint8',
        'supply_projectile_num': 'uint8',
        'red_7': 'uint16',
        'red_outpost_hp': 'uint16',
        'red_base_hp': 'uint16',
        'blue_7': 'uint16',
        'blue_outpost_hp': 'uint16',
        'blue_base_hp': 'uint16',
        'target_pos_x': 'float',
        'target_pos_y': 'float',
        'cmd_key': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.gamestart = kwargs.get('gamestart', bool())
        self.color = kwargs.get('color', int())
        self.projectile_allowance_17mm = kwargs.get('projectile_allowance_17mm', int())
        self.remaining_gold_coin = kwargs.get('remaining_gold_coin', int())
        self.supply_robot_id = kwargs.get('supply_robot_id', int())
        self.supply_projectile_num = kwargs.get('supply_projectile_num', int())
        self.red_7 = kwargs.get('red_7', int())
        self.red_outpost_hp = kwargs.get('red_outpost_hp', int())
        self.red_base_hp = kwargs.get('red_base_hp', int())
        self.blue_7 = kwargs.get('blue_7', int())
        self.blue_outpost_hp = kwargs.get('blue_outpost_hp', int())
        self.blue_base_hp = kwargs.get('blue_base_hp', int())
        self.target_pos_x = kwargs.get('target_pos_x', float())
        self.target_pos_y = kwargs.get('target_pos_y', float())
        self.cmd_key = kwargs.get('cmd_key', int())

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
        if self.gamestart != other.gamestart:
            return False
        if self.color != other.color:
            return False
        if self.projectile_allowance_17mm != other.projectile_allowance_17mm:
            return False
        if self.remaining_gold_coin != other.remaining_gold_coin:
            return False
        if self.supply_robot_id != other.supply_robot_id:
            return False
        if self.supply_projectile_num != other.supply_projectile_num:
            return False
        if self.red_7 != other.red_7:
            return False
        if self.red_outpost_hp != other.red_outpost_hp:
            return False
        if self.red_base_hp != other.red_base_hp:
            return False
        if self.blue_7 != other.blue_7:
            return False
        if self.blue_outpost_hp != other.blue_outpost_hp:
            return False
        if self.blue_base_hp != other.blue_base_hp:
            return False
        if self.target_pos_x != other.target_pos_x:
            return False
        if self.target_pos_y != other.target_pos_y:
            return False
        if self.cmd_key != other.cmd_key:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def gamestart(self):
        """Message field 'gamestart'."""
        return self._gamestart

    @gamestart.setter
    def gamestart(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gamestart' field must be of type 'bool'"
        self._gamestart = value

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'color' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'color' field must be an unsigned integer in [0, 255]"
        self._color = value

    @builtins.property
    def projectile_allowance_17mm(self):
        """Message field 'projectile_allowance_17mm'."""
        return self._projectile_allowance_17mm

    @projectile_allowance_17mm.setter
    def projectile_allowance_17mm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'projectile_allowance_17mm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'projectile_allowance_17mm' field must be an unsigned integer in [0, 65535]"
        self._projectile_allowance_17mm = value

    @builtins.property
    def remaining_gold_coin(self):
        """Message field 'remaining_gold_coin'."""
        return self._remaining_gold_coin

    @remaining_gold_coin.setter
    def remaining_gold_coin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remaining_gold_coin' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'remaining_gold_coin' field must be an unsigned integer in [0, 65535]"
        self._remaining_gold_coin = value

    @builtins.property
    def supply_robot_id(self):
        """Message field 'supply_robot_id'."""
        return self._supply_robot_id

    @supply_robot_id.setter
    def supply_robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'supply_robot_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'supply_robot_id' field must be an unsigned integer in [0, 255]"
        self._supply_robot_id = value

    @builtins.property
    def supply_projectile_num(self):
        """Message field 'supply_projectile_num'."""
        return self._supply_projectile_num

    @supply_projectile_num.setter
    def supply_projectile_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'supply_projectile_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'supply_projectile_num' field must be an unsigned integer in [0, 255]"
        self._supply_projectile_num = value

    @builtins.property
    def red_7(self):
        """Message field 'red_7'."""
        return self._red_7

    @red_7.setter
    def red_7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_7' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_7' field must be an unsigned integer in [0, 65535]"
        self._red_7 = value

    @builtins.property
    def red_outpost_hp(self):
        """Message field 'red_outpost_hp'."""
        return self._red_outpost_hp

    @red_outpost_hp.setter
    def red_outpost_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_outpost_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_outpost_hp' field must be an unsigned integer in [0, 65535]"
        self._red_outpost_hp = value

    @builtins.property
    def red_base_hp(self):
        """Message field 'red_base_hp'."""
        return self._red_base_hp

    @red_base_hp.setter
    def red_base_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_base_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_base_hp' field must be an unsigned integer in [0, 65535]"
        self._red_base_hp = value

    @builtins.property
    def blue_7(self):
        """Message field 'blue_7'."""
        return self._blue_7

    @blue_7.setter
    def blue_7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_7' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_7' field must be an unsigned integer in [0, 65535]"
        self._blue_7 = value

    @builtins.property
    def blue_outpost_hp(self):
        """Message field 'blue_outpost_hp'."""
        return self._blue_outpost_hp

    @blue_outpost_hp.setter
    def blue_outpost_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_outpost_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_outpost_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_outpost_hp = value

    @builtins.property
    def blue_base_hp(self):
        """Message field 'blue_base_hp'."""
        return self._blue_base_hp

    @blue_base_hp.setter
    def blue_base_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_base_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_base_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_base_hp = value

    @builtins.property
    def target_pos_x(self):
        """Message field 'target_pos_x'."""
        return self._target_pos_x

    @target_pos_x.setter
    def target_pos_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_pos_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_pos_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_pos_x = value

    @builtins.property
    def target_pos_y(self):
        """Message field 'target_pos_y'."""
        return self._target_pos_y

    @target_pos_y.setter
    def target_pos_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_pos_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_pos_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_pos_y = value

    @builtins.property
    def cmd_key(self):
        """Message field 'cmd_key'."""
        return self._cmd_key

    @cmd_key.setter
    def cmd_key(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_key' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cmd_key' field must be an unsigned integer in [0, 255]"
        self._cmd_key = value
