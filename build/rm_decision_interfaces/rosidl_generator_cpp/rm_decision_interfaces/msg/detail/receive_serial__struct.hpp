// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_decision_interfaces:msg/ReceiveSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__RECEIVE_SERIAL__STRUCT_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__RECEIVE_SERIAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_decision_interfaces__msg__ReceiveSerial __attribute__((deprecated))
#else
# define DEPRECATED__rm_decision_interfaces__msg__ReceiveSerial __declspec(deprecated)
#endif

namespace rm_decision_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReceiveSerial_
{
  using Type = ReceiveSerial_<ContainerAllocator>;

  explicit ReceiveSerial_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0;
      this->time = 0.0;
      this->red_1 = 0;
      this->red_2 = 0;
      this->red_3 = 0;
      this->red_4 = 0;
      this->red_5 = 0;
      this->red_7 = 0;
      this->red_outpost_hp = 0;
      this->red_base_hp = 0;
      this->blue_1 = 0;
      this->blue_2 = 0;
      this->blue_3 = 0;
      this->blue_4 = 0;
      this->blue_5 = 0;
      this->blue_7 = 0;
      this->blue_outpost_hp = 0;
      this->blue_base_hp = 0;
      this->self_hp = 0;
      this->base_hp = 0;
      this->rfid_status = 0ul;
      this->event_data = 0;
      this->supply_robot_id = 0;
      this->supply_projectile_num = 0;
    }
  }

  explicit ReceiveSerial_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0;
      this->time = 0.0;
      this->red_1 = 0;
      this->red_2 = 0;
      this->red_3 = 0;
      this->red_4 = 0;
      this->red_5 = 0;
      this->red_7 = 0;
      this->red_outpost_hp = 0;
      this->red_base_hp = 0;
      this->blue_1 = 0;
      this->blue_2 = 0;
      this->blue_3 = 0;
      this->blue_4 = 0;
      this->blue_5 = 0;
      this->blue_7 = 0;
      this->blue_outpost_hp = 0;
      this->blue_base_hp = 0;
      this->self_hp = 0;
      this->base_hp = 0;
      this->rfid_status = 0ul;
      this->event_data = 0;
      this->supply_robot_id = 0;
      this->supply_projectile_num = 0;
    }
  }

  // field types and members
  using _color_type =
    uint8_t;
  _color_type color;
  using _time_type =
    double;
  _time_type time;
  using _red_1_type =
    uint16_t;
  _red_1_type red_1;
  using _red_2_type =
    uint16_t;
  _red_2_type red_2;
  using _red_3_type =
    uint16_t;
  _red_3_type red_3;
  using _red_4_type =
    uint16_t;
  _red_4_type red_4;
  using _red_5_type =
    uint16_t;
  _red_5_type red_5;
  using _red_7_type =
    uint16_t;
  _red_7_type red_7;
  using _red_outpost_hp_type =
    uint16_t;
  _red_outpost_hp_type red_outpost_hp;
  using _red_base_hp_type =
    uint16_t;
  _red_base_hp_type red_base_hp;
  using _blue_1_type =
    uint16_t;
  _blue_1_type blue_1;
  using _blue_2_type =
    uint16_t;
  _blue_2_type blue_2;
  using _blue_3_type =
    uint16_t;
  _blue_3_type blue_3;
  using _blue_4_type =
    uint16_t;
  _blue_4_type blue_4;
  using _blue_5_type =
    uint16_t;
  _blue_5_type blue_5;
  using _blue_7_type =
    uint16_t;
  _blue_7_type blue_7;
  using _blue_outpost_hp_type =
    uint16_t;
  _blue_outpost_hp_type blue_outpost_hp;
  using _blue_base_hp_type =
    uint16_t;
  _blue_base_hp_type blue_base_hp;
  using _self_hp_type =
    uint16_t;
  _self_hp_type self_hp;
  using _base_hp_type =
    uint16_t;
  _base_hp_type base_hp;
  using _rfid_status_type =
    uint32_t;
  _rfid_status_type rfid_status;
  using _event_data_type =
    uint8_t;
  _event_data_type event_data;
  using _supply_robot_id_type =
    uint8_t;
  _supply_robot_id_type supply_robot_id;
  using _supply_projectile_num_type =
    uint8_t;
  _supply_projectile_num_type supply_projectile_num;

  // setters for named parameter idiom
  Type & set__color(
    const uint8_t & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__red_1(
    const uint16_t & _arg)
  {
    this->red_1 = _arg;
    return *this;
  }
  Type & set__red_2(
    const uint16_t & _arg)
  {
    this->red_2 = _arg;
    return *this;
  }
  Type & set__red_3(
    const uint16_t & _arg)
  {
    this->red_3 = _arg;
    return *this;
  }
  Type & set__red_4(
    const uint16_t & _arg)
  {
    this->red_4 = _arg;
    return *this;
  }
  Type & set__red_5(
    const uint16_t & _arg)
  {
    this->red_5 = _arg;
    return *this;
  }
  Type & set__red_7(
    const uint16_t & _arg)
  {
    this->red_7 = _arg;
    return *this;
  }
  Type & set__red_outpost_hp(
    const uint16_t & _arg)
  {
    this->red_outpost_hp = _arg;
    return *this;
  }
  Type & set__red_base_hp(
    const uint16_t & _arg)
  {
    this->red_base_hp = _arg;
    return *this;
  }
  Type & set__blue_1(
    const uint16_t & _arg)
  {
    this->blue_1 = _arg;
    return *this;
  }
  Type & set__blue_2(
    const uint16_t & _arg)
  {
    this->blue_2 = _arg;
    return *this;
  }
  Type & set__blue_3(
    const uint16_t & _arg)
  {
    this->blue_3 = _arg;
    return *this;
  }
  Type & set__blue_4(
    const uint16_t & _arg)
  {
    this->blue_4 = _arg;
    return *this;
  }
  Type & set__blue_5(
    const uint16_t & _arg)
  {
    this->blue_5 = _arg;
    return *this;
  }
  Type & set__blue_7(
    const uint16_t & _arg)
  {
    this->blue_7 = _arg;
    return *this;
  }
  Type & set__blue_outpost_hp(
    const uint16_t & _arg)
  {
    this->blue_outpost_hp = _arg;
    return *this;
  }
  Type & set__blue_base_hp(
    const uint16_t & _arg)
  {
    this->blue_base_hp = _arg;
    return *this;
  }
  Type & set__self_hp(
    const uint16_t & _arg)
  {
    this->self_hp = _arg;
    return *this;
  }
  Type & set__base_hp(
    const uint16_t & _arg)
  {
    this->base_hp = _arg;
    return *this;
  }
  Type & set__rfid_status(
    const uint32_t & _arg)
  {
    this->rfid_status = _arg;
    return *this;
  }
  Type & set__event_data(
    const uint8_t & _arg)
  {
    this->event_data = _arg;
    return *this;
  }
  Type & set__supply_robot_id(
    const uint8_t & _arg)
  {
    this->supply_robot_id = _arg;
    return *this;
  }
  Type & set__supply_projectile_num(
    const uint8_t & _arg)
  {
    this->supply_projectile_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_decision_interfaces::msg::ReceiveSerial_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_decision_interfaces::msg::ReceiveSerial_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_decision_interfaces::msg::ReceiveSerial_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_decision_interfaces::msg::ReceiveSerial_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_decision_interfaces::msg::ReceiveSerial_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_decision_interfaces::msg::ReceiveSerial_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_decision_interfaces::msg::ReceiveSerial_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_decision_interfaces::msg::ReceiveSerial_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_decision_interfaces::msg::ReceiveSerial_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_decision_interfaces::msg::ReceiveSerial_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_decision_interfaces__msg__ReceiveSerial
    std::shared_ptr<rm_decision_interfaces::msg::ReceiveSerial_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_decision_interfaces__msg__ReceiveSerial
    std::shared_ptr<rm_decision_interfaces::msg::ReceiveSerial_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReceiveSerial_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->red_1 != other.red_1) {
      return false;
    }
    if (this->red_2 != other.red_2) {
      return false;
    }
    if (this->red_3 != other.red_3) {
      return false;
    }
    if (this->red_4 != other.red_4) {
      return false;
    }
    if (this->red_5 != other.red_5) {
      return false;
    }
    if (this->red_7 != other.red_7) {
      return false;
    }
    if (this->red_outpost_hp != other.red_outpost_hp) {
      return false;
    }
    if (this->red_base_hp != other.red_base_hp) {
      return false;
    }
    if (this->blue_1 != other.blue_1) {
      return false;
    }
    if (this->blue_2 != other.blue_2) {
      return false;
    }
    if (this->blue_3 != other.blue_3) {
      return false;
    }
    if (this->blue_4 != other.blue_4) {
      return false;
    }
    if (this->blue_5 != other.blue_5) {
      return false;
    }
    if (this->blue_7 != other.blue_7) {
      return false;
    }
    if (this->blue_outpost_hp != other.blue_outpost_hp) {
      return false;
    }
    if (this->blue_base_hp != other.blue_base_hp) {
      return false;
    }
    if (this->self_hp != other.self_hp) {
      return false;
    }
    if (this->base_hp != other.base_hp) {
      return false;
    }
    if (this->rfid_status != other.rfid_status) {
      return false;
    }
    if (this->event_data != other.event_data) {
      return false;
    }
    if (this->supply_robot_id != other.supply_robot_id) {
      return false;
    }
    if (this->supply_projectile_num != other.supply_projectile_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReceiveSerial_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReceiveSerial_

// alias to use template instance with default allocator
using ReceiveSerial =
  rm_decision_interfaces::msg::ReceiveSerial_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_decision_interfaces

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__RECEIVE_SERIAL__STRUCT_HPP_
