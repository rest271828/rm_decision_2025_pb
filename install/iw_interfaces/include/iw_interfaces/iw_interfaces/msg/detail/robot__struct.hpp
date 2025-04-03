// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iw_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_HPP_
#define IW_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iw_interfaces__msg__Robot __attribute__((deprecated))
#else
# define DEPRECATED__iw_interfaces__msg__Robot __declspec(deprecated)
#endif

namespace iw_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Robot_
{
  using Type = Robot_<ContainerAllocator>;

  explicit Robot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->faction = 0ul;
      this->id = 0ul;
      this->hp = 0ul;
      this->level = 0ul;
      this->attack = false;
      this->missing = false;
    }
  }

  explicit Robot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->faction = 0ul;
      this->id = 0ul;
      this->hp = 0ul;
      this->level = 0ul;
      this->attack = false;
      this->missing = false;
    }
  }

  // field types and members
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;
  using _faction_type =
    uint32_t;
  _faction_type faction;
  using _id_type =
    uint32_t;
  _id_type id;
  using _pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_type pose;
  using _hp_type =
    uint32_t;
  _hp_type hp;
  using _level_type =
    uint32_t;
  _level_type level;
  using _attack_type =
    bool;
  _attack_type attack;
  using _missing_type =
    bool;
  _missing_type missing;

  // setters for named parameter idiom
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__faction(
    const uint32_t & _arg)
  {
    this->faction = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__hp(
    const uint32_t & _arg)
  {
    this->hp = _arg;
    return *this;
  }
  Type & set__level(
    const uint32_t & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__attack(
    const bool & _arg)
  {
    this->attack = _arg;
    return *this;
  }
  Type & set__missing(
    const bool & _arg)
  {
    this->missing = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iw_interfaces::msg::Robot_<ContainerAllocator> *;
  using ConstRawPtr =
    const iw_interfaces::msg::Robot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iw_interfaces::msg::Robot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iw_interfaces::msg::Robot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iw_interfaces::msg::Robot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iw_interfaces::msg::Robot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iw_interfaces::msg::Robot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iw_interfaces::msg::Robot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iw_interfaces::msg::Robot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iw_interfaces::msg::Robot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iw_interfaces__msg__Robot
    std::shared_ptr<iw_interfaces::msg::Robot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iw_interfaces__msg__Robot
    std::shared_ptr<iw_interfaces::msg::Robot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robot_ & other) const
  {
    if (this->label != other.label) {
      return false;
    }
    if (this->faction != other.faction) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->hp != other.hp) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    if (this->attack != other.attack) {
      return false;
    }
    if (this->missing != other.missing) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robot_

// alias to use template instance with default allocator
using Robot =
  iw_interfaces::msg::Robot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iw_interfaces

#endif  // IW_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_HPP_
