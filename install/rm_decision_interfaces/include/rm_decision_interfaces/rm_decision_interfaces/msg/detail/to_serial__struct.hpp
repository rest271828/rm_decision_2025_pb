// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_decision_interfaces:msg/ToSerial.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__TO_SERIAL__STRUCT_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__TO_SERIAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_decision_interfaces__msg__ToSerial __attribute__((deprecated))
#else
# define DEPRECATED__rm_decision_interfaces__msg__ToSerial __declspec(deprecated)
#endif

namespace rm_decision_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ToSerial_
{
  using Type = ToSerial_<ContainerAllocator>;

  explicit ToSerial_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sentry_cmd = 0ul;
      this->shangpo = false;
      this->diff_yaw = 0.0f;
    }
  }

  explicit ToSerial_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sentry_cmd = 0ul;
      this->shangpo = false;
      this->diff_yaw = 0.0f;
    }
  }

  // field types and members
  using _sentry_cmd_type =
    uint32_t;
  _sentry_cmd_type sentry_cmd;
  using _shangpo_type =
    bool;
  _shangpo_type shangpo;
  using _diff_yaw_type =
    float;
  _diff_yaw_type diff_yaw;

  // setters for named parameter idiom
  Type & set__sentry_cmd(
    const uint32_t & _arg)
  {
    this->sentry_cmd = _arg;
    return *this;
  }
  Type & set__shangpo(
    const bool & _arg)
  {
    this->shangpo = _arg;
    return *this;
  }
  Type & set__diff_yaw(
    const float & _arg)
  {
    this->diff_yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_decision_interfaces::msg::ToSerial_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_decision_interfaces::msg::ToSerial_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_decision_interfaces::msg::ToSerial_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_decision_interfaces::msg::ToSerial_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_decision_interfaces::msg::ToSerial_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_decision_interfaces::msg::ToSerial_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_decision_interfaces::msg::ToSerial_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_decision_interfaces::msg::ToSerial_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_decision_interfaces::msg::ToSerial_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_decision_interfaces::msg::ToSerial_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_decision_interfaces__msg__ToSerial
    std::shared_ptr<rm_decision_interfaces::msg::ToSerial_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_decision_interfaces__msg__ToSerial
    std::shared_ptr<rm_decision_interfaces::msg::ToSerial_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ToSerial_ & other) const
  {
    if (this->sentry_cmd != other.sentry_cmd) {
      return false;
    }
    if (this->shangpo != other.shangpo) {
      return false;
    }
    if (this->diff_yaw != other.diff_yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const ToSerial_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ToSerial_

// alias to use template instance with default allocator
using ToSerial =
  rm_decision_interfaces::msg::ToSerial_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_decision_interfaces

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__TO_SERIAL__STRUCT_HPP_
