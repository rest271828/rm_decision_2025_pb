// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_decision_interfaces:msg/FromSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__FROM_SERIAL__STRUCT_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__FROM_SERIAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_decision_interfaces__msg__FromSerial __attribute__((deprecated))
#else
# define DEPRECATED__rm_decision_interfaces__msg__FromSerial __declspec(deprecated)
#endif

namespace rm_decision_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FromSerial_
{
  using Type = FromSerial_<ContainerAllocator>;

  explicit FromSerial_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gamestart = false;
      this->color = 0;
      this->projectile_allowance_17mm = 0;
      this->remaining_gold_coin = 0;
      this->supply_robot_id = 0;
      this->supply_projectile_num = 0;
      this->red_7 = 0;
      this->red_outpost_hp = 0;
      this->red_base_hp = 0;
      this->blue_7 = 0;
      this->blue_outpost_hp = 0;
      this->blue_base_hp = 0;
      this->target_pos_x = 0.0f;
      this->target_pos_y = 0.0f;
      this->cmd_key = 0;
    }
  }

  explicit FromSerial_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gamestart = false;
      this->color = 0;
      this->projectile_allowance_17mm = 0;
      this->remaining_gold_coin = 0;
      this->supply_robot_id = 0;
      this->supply_projectile_num = 0;
      this->red_7 = 0;
      this->red_outpost_hp = 0;
      this->red_base_hp = 0;
      this->blue_7 = 0;
      this->blue_outpost_hp = 0;
      this->blue_base_hp = 0;
      this->target_pos_x = 0.0f;
      this->target_pos_y = 0.0f;
      this->cmd_key = 0;
    }
  }

  // field types and members
  using _gamestart_type =
    bool;
  _gamestart_type gamestart;
  using _color_type =
    uint8_t;
  _color_type color;
  using _projectile_allowance_17mm_type =
    uint16_t;
  _projectile_allowance_17mm_type projectile_allowance_17mm;
  using _remaining_gold_coin_type =
    uint16_t;
  _remaining_gold_coin_type remaining_gold_coin;
  using _supply_robot_id_type =
    uint8_t;
  _supply_robot_id_type supply_robot_id;
  using _supply_projectile_num_type =
    uint8_t;
  _supply_projectile_num_type supply_projectile_num;
  using _red_7_type =
    uint16_t;
  _red_7_type red_7;
  using _red_outpost_hp_type =
    uint16_t;
  _red_outpost_hp_type red_outpost_hp;
  using _red_base_hp_type =
    uint16_t;
  _red_base_hp_type red_base_hp;
  using _blue_7_type =
    uint16_t;
  _blue_7_type blue_7;
  using _blue_outpost_hp_type =
    uint16_t;
  _blue_outpost_hp_type blue_outpost_hp;
  using _blue_base_hp_type =
    uint16_t;
  _blue_base_hp_type blue_base_hp;
  using _target_pos_x_type =
    float;
  _target_pos_x_type target_pos_x;
  using _target_pos_y_type =
    float;
  _target_pos_y_type target_pos_y;
  using _cmd_key_type =
    uint8_t;
  _cmd_key_type cmd_key;

  // setters for named parameter idiom
  Type & set__gamestart(
    const bool & _arg)
  {
    this->gamestart = _arg;
    return *this;
  }
  Type & set__color(
    const uint8_t & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__projectile_allowance_17mm(
    const uint16_t & _arg)
  {
    this->projectile_allowance_17mm = _arg;
    return *this;
  }
  Type & set__remaining_gold_coin(
    const uint16_t & _arg)
  {
    this->remaining_gold_coin = _arg;
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
  Type & set__target_pos_x(
    const float & _arg)
  {
    this->target_pos_x = _arg;
    return *this;
  }
  Type & set__target_pos_y(
    const float & _arg)
  {
    this->target_pos_y = _arg;
    return *this;
  }
  Type & set__cmd_key(
    const uint8_t & _arg)
  {
    this->cmd_key = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_decision_interfaces::msg::FromSerial_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_decision_interfaces::msg::FromSerial_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_decision_interfaces::msg::FromSerial_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_decision_interfaces::msg::FromSerial_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_decision_interfaces::msg::FromSerial_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_decision_interfaces::msg::FromSerial_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_decision_interfaces::msg::FromSerial_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_decision_interfaces::msg::FromSerial_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_decision_interfaces::msg::FromSerial_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_decision_interfaces::msg::FromSerial_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_decision_interfaces__msg__FromSerial
    std::shared_ptr<rm_decision_interfaces::msg::FromSerial_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_decision_interfaces__msg__FromSerial
    std::shared_ptr<rm_decision_interfaces::msg::FromSerial_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FromSerial_ & other) const
  {
    if (this->gamestart != other.gamestart) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->projectile_allowance_17mm != other.projectile_allowance_17mm) {
      return false;
    }
    if (this->remaining_gold_coin != other.remaining_gold_coin) {
      return false;
    }
    if (this->supply_robot_id != other.supply_robot_id) {
      return false;
    }
    if (this->supply_projectile_num != other.supply_projectile_num) {
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
    if (this->blue_7 != other.blue_7) {
      return false;
    }
    if (this->blue_outpost_hp != other.blue_outpost_hp) {
      return false;
    }
    if (this->blue_base_hp != other.blue_base_hp) {
      return false;
    }
    if (this->target_pos_x != other.target_pos_x) {
      return false;
    }
    if (this->target_pos_y != other.target_pos_y) {
      return false;
    }
    if (this->cmd_key != other.cmd_key) {
      return false;
    }
    return true;
  }
  bool operator!=(const FromSerial_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FromSerial_

// alias to use template instance with default allocator
using FromSerial =
  rm_decision_interfaces::msg::FromSerial_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_decision_interfaces

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__FROM_SERIAL__STRUCT_HPP_
