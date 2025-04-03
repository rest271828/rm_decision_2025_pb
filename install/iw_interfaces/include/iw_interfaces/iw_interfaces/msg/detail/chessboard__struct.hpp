// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iw_interfaces:msg/Chessboard.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__CHESSBOARD__STRUCT_HPP_
#define IW_INTERFACES__MSG__DETAIL__CHESSBOARD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'robots'
#include "iw_interfaces/msg/detail/robot__struct.hpp"
// Member 'terrains'
#include "iw_interfaces/msg/detail/terrain__struct.hpp"
// Member 'architectures'
#include "iw_interfaces/msg/detail/architecture__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iw_interfaces__msg__Chessboard __attribute__((deprecated))
#else
# define DEPRECATED__iw_interfaces__msg__Chessboard __declspec(deprecated)
#endif

namespace iw_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Chessboard_
{
  using Type = Chessboard_<ContainerAllocator>;

  explicit Chessboard_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->faction = 0ul;
      this->initialed = false;
    }
  }

  explicit Chessboard_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->faction = 0ul;
      this->initialed = false;
    }
  }

  // field types and members
  using _faction_type =
    uint32_t;
  _faction_type faction;
  using _initialed_type =
    bool;
  _initialed_type initialed;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _robots_type =
    std::vector<iw_interfaces::msg::Robot_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<iw_interfaces::msg::Robot_<ContainerAllocator>>>;
  _robots_type robots;
  using _terrains_type =
    std::vector<iw_interfaces::msg::Terrain_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<iw_interfaces::msg::Terrain_<ContainerAllocator>>>;
  _terrains_type terrains;
  using _architectures_type =
    std::vector<iw_interfaces::msg::Architecture_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<iw_interfaces::msg::Architecture_<ContainerAllocator>>>;
  _architectures_type architectures;

  // setters for named parameter idiom
  Type & set__faction(
    const uint32_t & _arg)
  {
    this->faction = _arg;
    return *this;
  }
  Type & set__initialed(
    const bool & _arg)
  {
    this->initialed = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__robots(
    const std::vector<iw_interfaces::msg::Robot_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<iw_interfaces::msg::Robot_<ContainerAllocator>>> & _arg)
  {
    this->robots = _arg;
    return *this;
  }
  Type & set__terrains(
    const std::vector<iw_interfaces::msg::Terrain_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<iw_interfaces::msg::Terrain_<ContainerAllocator>>> & _arg)
  {
    this->terrains = _arg;
    return *this;
  }
  Type & set__architectures(
    const std::vector<iw_interfaces::msg::Architecture_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<iw_interfaces::msg::Architecture_<ContainerAllocator>>> & _arg)
  {
    this->architectures = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iw_interfaces::msg::Chessboard_<ContainerAllocator> *;
  using ConstRawPtr =
    const iw_interfaces::msg::Chessboard_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iw_interfaces::msg::Chessboard_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iw_interfaces::msg::Chessboard_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iw_interfaces::msg::Chessboard_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iw_interfaces::msg::Chessboard_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iw_interfaces::msg::Chessboard_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iw_interfaces::msg::Chessboard_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iw_interfaces::msg::Chessboard_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iw_interfaces::msg::Chessboard_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iw_interfaces__msg__Chessboard
    std::shared_ptr<iw_interfaces::msg::Chessboard_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iw_interfaces__msg__Chessboard
    std::shared_ptr<iw_interfaces::msg::Chessboard_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Chessboard_ & other) const
  {
    if (this->faction != other.faction) {
      return false;
    }
    if (this->initialed != other.initialed) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->robots != other.robots) {
      return false;
    }
    if (this->terrains != other.terrains) {
      return false;
    }
    if (this->architectures != other.architectures) {
      return false;
    }
    return true;
  }
  bool operator!=(const Chessboard_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Chessboard_

// alias to use template instance with default allocator
using Chessboard =
  iw_interfaces::msg::Chessboard_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iw_interfaces

#endif  // IW_INTERFACES__MSG__DETAIL__CHESSBOARD__STRUCT_HPP_
