# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_decision_interfaces:msg/ReceiveSerial.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReceiveSerial(type):
    """Metaclass of message 'ReceiveSerial'."""

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
                'rm_decision_interfaces.msg.ReceiveSerial')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__receive_serial
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__receive_serial
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__receive_serial
            cls._TYPE_SUPPORT = module.type_support_msg__msg__receive_serial
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__receive_serial

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReceiveSerial(metaclass=Metaclass_ReceiveSerial):
    """Message class 'ReceiveSerial'."""

    __slots__ = [
        '_color',
        '_time',
        '_red_1',
        '_red_2',
        '_red_3',
        '_red_4',
        '_red_5',
        '_red_7',
        '_red_outpost_hp',
        '_red_base_hp',
        '_blue_1',
        '_blue_2',
        '_blue_3',
        '_blue_4',
        '_blue_5',
        '_blue_7',
        '_blue_outpost_hp',
        '_blue_base_hp',
        '_self_hp',
        '_base_hp',
        '_rfid_status',
        '_event_data',
        '_supply_robot_id',
        '_supply_projectile_num',
    ]

    _fields_and_field_types = {
        'color': 'uint8',
        'time': 'double',
        'red_1': 'uint16',
        'red_2': 'uint16',
        'red_3': 'uint16',
        'red_4': 'uint16',
        'red_5': 'uint16',
        'red_7': 'uint16',
        'red_outpost_hp': 'uint16',
        'red_base_hp': 'uint16',
        'blue_1': 'uint16',
        'blue_2': 'uint16',
        'blue_3': 'uint16',
        'blue_4': 'uint16',
        'blue_5': 'uint16',
        'blue_7': 'uint16',
        'blue_outpost_hp': 'uint16',
        'blue_base_hp': 'uint16',
        'self_hp': 'uint16',
        'base_hp': 'uint16',
        'rfid_status': 'uint32',
        'event_data': 'uint8',
        'supply_robot_id': 'uint8',
        'supply_projectile_num': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.color = kwargs.get('color', int())
        self.time = kwargs.get('time', float())
        self.red_1 = kwargs.get('red_1', int())
        self.red_2 = kwargs.get('red_2', int())
        self.red_3 = kwargs.get('red_3', int())
        self.red_4 = kwargs.get('red_4', int())
        self.red_5 = kwargs.get('red_5', int())
        self.red_7 = kwargs.get('red_7', int())
        self.red_outpost_hp = kwargs.get('red_outpost_hp', int())
        self.red_base_hp = kwargs.get('red_base_hp', int())
        self.blue_1 = kwargs.get('blue_1', int())
        self.blue_2 = kwargs.get('blue_2', int())
        self.blue_3 = kwargs.get('blue_3', int())
        self.blue_4 = kwargs.get('blue_4', int())
        self.blue_5 = kwargs.get('blue_5', int())
        self.blue_7 = kwargs.get('blue_7', int())
        self.blue_outpost_hp = kwargs.get('blue_outpost_hp', int())
        self.blue_base_hp = kwargs.get('blue_base_hp', int())
        self.self_hp = kwargs.get('self_hp', int())
        self.base_hp = kwargs.get('base_hp', int())
        self.rfid_status = kwargs.get('rfid_status', int())
        self.event_data = kwargs.get('event_data', int())
        self.supply_robot_id = kwargs.get('supply_robot_id', int())
        self.supply_projectile_num = kwargs.get('supply_projectile_num', int())

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
        if self.color != other.color:
            return False
        if self.time != other.time:
            return False
        if self.red_1 != other.red_1:
            return False
        if self.red_2 != other.red_2:
            return False
        if self.red_3 != other.red_3:
            return False
        if self.red_4 != other.red_4:
            return False
        if self.red_5 != other.red_5:
            return False
        if self.red_7 != other.red_7:
            return False
        if self.red_outpost_hp != other.red_outpost_hp:
            return False
        if self.red_base_hp != other.red_base_hp:
            return False
        if self.blue_1 != other.blue_1:
            return False
        if self.blue_2 != other.blue_2:
            return False
        if self.blue_3 != other.blue_3:
            return False
        if self.blue_4 != other.blue_4:
            return False
        if self.blue_5 != other.blue_5:
            return False
        if self.blue_7 != other.blue_7:
            return False
        if self.blue_outpost_hp != other.blue_outpost_hp:
            return False
        if self.blue_base_hp != other.blue_base_hp:
            return False
        if self.self_hp != other.self_hp:
            return False
        if self.base_hp != other.base_hp:
            return False
        if self.rfid_status != other.rfid_status:
            return False
        if self.event_data != other.event_data:
            return False
        if self.supply_robot_id != other.supply_robot_id:
            return False
        if self.supply_projectile_num != other.supply_projectile_num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time = value

    @builtins.property
    def red_1(self):
        """Message field 'red_1'."""
        return self._red_1

    @red_1.setter
    def red_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_1' field must be an unsigned integer in [0, 65535]"
        self._red_1 = value

    @builtins.property
    def red_2(self):
        """Message field 'red_2'."""
        return self._red_2

    @red_2.setter
    def red_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_2' field must be an unsigned integer in [0, 65535]"
        self._red_2 = value

    @builtins.property
    def red_3(self):
        """Message field 'red_3'."""
        return self._red_3

    @red_3.setter
    def red_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_3' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_3' field must be an unsigned integer in [0, 65535]"
        self._red_3 = value

    @builtins.property
    def red_4(self):
        """Message field 'red_4'."""
        return self._red_4

    @red_4.setter
    def red_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_4' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_4' field must be an unsigned integer in [0, 65535]"
        self._red_4 = value

    @builtins.property
    def red_5(self):
        """Message field 'red_5'."""
        return self._red_5

    @red_5.setter
    def red_5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_5' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_5' field must be an unsigned integer in [0, 65535]"
        self._red_5 = value

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
    def blue_1(self):
        """Message field 'blue_1'."""
        return self._blue_1

    @blue_1.setter
    def blue_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_1' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_1' field must be an unsigned integer in [0, 65535]"
        self._blue_1 = value

    @builtins.property
    def blue_2(self):
        """Message field 'blue_2'."""
        return self._blue_2

    @blue_2.setter
    def blue_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_2' field must be an unsigned integer in [0, 65535]"
        self._blue_2 = value

    @builtins.property
    def blue_3(self):
        """Message field 'blue_3'."""
        return self._blue_3

    @blue_3.setter
    def blue_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_3' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_3' field must be an unsigned integer in [0, 65535]"
        self._blue_3 = value

    @builtins.property
    def blue_4(self):
        """Message field 'blue_4'."""
        return self._blue_4

    @blue_4.setter
    def blue_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_4' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_4' field must be an unsigned integer in [0, 65535]"
        self._blue_4 = value

    @builtins.property
    def blue_5(self):
        """Message field 'blue_5'."""
        return self._blue_5

    @blue_5.setter
    def blue_5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_5' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_5' field must be an unsigned integer in [0, 65535]"
        self._blue_5 = value

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
    def self_hp(self):
        """Message field 'self_hp'."""
        return self._self_hp

    @self_hp.setter
    def self_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'self_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'self_hp' field must be an unsigned integer in [0, 65535]"
        self._self_hp = value

    @builtins.property
    def base_hp(self):
        """Message field 'base_hp'."""
        return self._base_hp

    @base_hp.setter
    def base_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'base_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'base_hp' field must be an unsigned integer in [0, 65535]"
        self._base_hp = value

    @builtins.property
    def rfid_status(self):
        """Message field 'rfid_status'."""
        return self._rfid_status

    @rfid_status.setter
    def rfid_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rfid_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rfid_status' field must be an unsigned integer in [0, 4294967295]"
        self._rfid_status = value

    @builtins.property
    def event_data(self):
        """Message field 'event_data'."""
        return self._event_data

    @event_data.setter
    def event_data(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'event_data' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'event_data' field must be an unsigned integer in [0, 255]"
        self._event_data = value

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
