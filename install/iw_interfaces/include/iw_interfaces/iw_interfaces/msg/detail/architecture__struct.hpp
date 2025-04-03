// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iw_interfaces:msg/Architecture.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__ARCHITECTURE__STRUCT_HPP_
#define IW_INTERFACES__MSG__DETAIL__ARCHITECTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vertices'
#include "iw_interfaces/msg/detail/plane_coordinate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iw_interfaces__msg__Architecture __attribute__((deprecated))
#else
# define DEPRECATED__iw_interfaces__msg__Architecture __declspec(deprecated)
#endif

namespace iw_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Architecture_
{
  using Type = Architecture_<ContainerAllocator>;

  explicit Architecture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->hp = 0ul;
      this->faction = 0ul;
    }
  }

  explicit Architecture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->hp = 0ul;
      this->faction = 0ul;
    }
  }

  // field types and members
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;
  using _vertices_type =
    std::vector<iw_interfaces::msg::PlaneCoordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<iw_interfaces::msg::PlaneCoordinate_<ContainerAllocator>>>;
  _vertices_type vertices;
  using _hp_type =
    uint32_t;
  _hp_type hp;
  using _faction_type =
    uint32_t;
  _faction_type faction;

  // setters for named parameter idiom
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__vertices(
    const std::vector<iw_interfaces::msg::PlaneCoordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<iw_interfaces::msg::PlaneCoordinate_<ContainerAllocator>>> & _arg)
  {
    this->vertices = _arg;
    return *this;
  }
  Type & set__hp(
    const uint32_t & _arg)
  {
    this->hp = _arg;
    return *this;
  }
  Type & set__faction(
    const uint32_t & _arg)
  {
    this->faction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iw_interfaces::msg::Architecture_<ContainerAllocator> *;
  using ConstRawPtr =
    const iw_interfaces::msg::Architecture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iw_interfaces::msg::Architecture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iw_interfaces::msg::Architecture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iw_interfaces::msg::Architecture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iw_interfaces::msg::Architecture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iw_interfaces::msg::Architecture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iw_interfaces::msg::Architecture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iw_interfaces::msg::Architecture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iw_interfaces::msg::Architecture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iw_interfaces__msg__Architecture
    std::shared_ptr<iw_interfaces::msg::Architecture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iw_interfaces__msg__Architecture
    std::shared_ptr<iw_interfaces::msg::Architecture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Architecture_ & other) const
  {
    if (this->label != other.label) {
      return false;
    }
    if (this->vertices != other.vertices) {
      return false;
    }
    if (this->hp != other.hp) {
      return false;
    }
    if (this->faction != other.faction) {
      return false;
    }
    return true;
  }
  bool operator!=(const Architecture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Architecture_

// alias to use template instance with default allocator
using Architecture =
  iw_interfaces::msg::Architecture_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iw_interfaces

#endif  // IW_INTERFACES__MSG__DETAIL__ARCHITECTURE__STRUCT_HPP_
