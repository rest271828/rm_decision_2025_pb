// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iw_interfaces:msg/Prism.idl
// generated code does not contain a copyright notice

#ifndef IW_INTERFACES__MSG__DETAIL__PRISM__STRUCT_HPP_
#define IW_INTERFACES__MSG__DETAIL__PRISM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'self_pose'
// Member 'track_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iw_interfaces__msg__Prism __attribute__((deprecated))
#else
# define DEPRECATED__iw_interfaces__msg__Prism __declspec(deprecated)
#endif

namespace iw_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Prism_
{
  using Type = Prism_<ContainerAllocator>;

  explicit Prism_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : self_pose(_init),
    track_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->self_id = 0ul;
      this->self_hp = 0ul;
      this->self_ammo = 0ul;
      this->self_shooter_heat = 0ul;
      this->track_tracking = false;
      this->track_id = 0ul;
      this->track_hp = 0ul;
      this->game_game_start = false;
      this->game_buy_ammo_ordered = false;
      this->game_coins = 0ul;
      this->game_projectile_allowance = 0ul;
      this->call_target_x = 0.0;
      this->call_target_y = 0.0;
      this->call_is_called = false;
    }
  }

  explicit Prism_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : self_pose(_alloc, _init),
    track_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->self_id = 0ul;
      this->self_hp = 0ul;
      this->self_ammo = 0ul;
      this->self_shooter_heat = 0ul;
      this->track_tracking = false;
      this->track_id = 0ul;
      this->track_hp = 0ul;
      this->game_game_start = false;
      this->game_buy_ammo_ordered = false;
      this->game_coins = 0ul;
      this->game_projectile_allowance = 0ul;
      this->call_target_x = 0.0;
      this->call_target_y = 0.0;
      this->call_is_called = false;
    }
  }

  // field types and members
  using _self_id_type =
    uint32_t;
  _self_id_type self_id;
  using _self_hp_type =
    uint32_t;
  _self_hp_type self_hp;
  using _self_ammo_type =
    uint32_t;
  _self_ammo_type self_ammo;
  using _self_shooter_heat_type =
    uint32_t;
  _self_shooter_heat_type self_shooter_heat;
  using _self_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _self_pose_type self_pose;
  using _track_tracking_type =
    bool;
  _track_tracking_type track_tracking;
  using _track_id_type =
    uint32_t;
  _track_id_type track_id;
  using _track_hp_type =
    uint32_t;
  _track_hp_type track_hp;
  using _track_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _track_pose_type track_pose;
  using _game_game_start_type =
    bool;
  _game_game_start_type game_game_start;
  using _game_buy_ammo_ordered_type =
    bool;
  _game_buy_ammo_ordered_type game_buy_ammo_ordered;
  using _game_coins_type =
    uint32_t;
  _game_coins_type game_coins;
  using _game_projectile_allowance_type =
    uint32_t;
  _game_projectile_allowance_type game_projectile_allowance;
  using _call_target_x_type =
    double;
  _call_target_x_type call_target_x;
  using _call_target_y_type =
    double;
  _call_target_y_type call_target_y;
  using _call_is_called_type =
    bool;
  _call_is_called_type call_is_called;

  // setters for named parameter idiom
  Type & set__self_id(
    const uint32_t & _arg)
  {
    this->self_id = _arg;
    return *this;
  }
  Type & set__self_hp(
    const uint32_t & _arg)
  {
    this->self_hp = _arg;
    return *this;
  }
  Type & set__self_ammo(
    const uint32_t & _arg)
  {
    this->self_ammo = _arg;
    return *this;
  }
  Type & set__self_shooter_heat(
    const uint32_t & _arg)
  {
    this->self_shooter_heat = _arg;
    return *this;
  }
  Type & set__self_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->self_pose = _arg;
    return *this;
  }
  Type & set__track_tracking(
    const bool & _arg)
  {
    this->track_tracking = _arg;
    return *this;
  }
  Type & set__track_id(
    const uint32_t & _arg)
  {
    this->track_id = _arg;
    return *this;
  }
  Type & set__track_hp(
    const uint32_t & _arg)
  {
    this->track_hp = _arg;
    return *this;
  }
  Type & set__track_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->track_pose = _arg;
    return *this;
  }
  Type & set__game_game_start(
    const bool & _arg)
  {
    this->game_game_start = _arg;
    return *this;
  }
  Type & set__game_buy_ammo_ordered(
    const bool & _arg)
  {
    this->game_buy_ammo_ordered = _arg;
    return *this;
  }
  Type & set__game_coins(
    const uint32_t & _arg)
  {
    this->game_coins = _arg;
    return *this;
  }
  Type & set__game_projectile_allowance(
    const uint32_t & _arg)
  {
    this->game_projectile_allowance = _arg;
    return *this;
  }
  Type & set__call_target_x(
    const double & _arg)
  {
    this->call_target_x = _arg;
    return *this;
  }
  Type & set__call_target_y(
    const double & _arg)
  {
    this->call_target_y = _arg;
    return *this;
  }
  Type & set__call_is_called(
    const bool & _arg)
  {
    this->call_is_called = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iw_interfaces::msg::Prism_<ContainerAllocator> *;
  using ConstRawPtr =
    const iw_interfaces::msg::Prism_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iw_interfaces::msg::Prism_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iw_interfaces::msg::Prism_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iw_interfaces::msg::Prism_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iw_interfaces::msg::Prism_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iw_interfaces::msg::Prism_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iw_interfaces::msg::Prism_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iw_interfaces::msg::Prism_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iw_interfaces::msg::Prism_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iw_interfaces__msg__Prism
    std::shared_ptr<iw_interfaces::msg::Prism_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iw_interfaces__msg__Prism
    std::shared_ptr<iw_interfaces::msg::Prism_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Prism_ & other) const
  {
    if (this->self_id != other.self_id) {
      return false;
    }
    if (this->self_hp != other.self_hp) {
      return false;
    }
    if (this->self_ammo != other.self_ammo) {
      return false;
    }
    if (this->self_shooter_heat != other.self_shooter_heat) {
      return false;
    }
    if (this->self_pose != other.self_pose) {
      return false;
    }
    if (this->track_tracking != other.track_tracking) {
      return false;
    }
    if (this->track_id != other.track_id) {
      return false;
    }
    if (this->track_hp != other.track_hp) {
      return false;
    }
    if (this->track_pose != other.track_pose) {
      return false;
    }
    if (this->game_game_start != other.game_game_start) {
      return false;
    }
    if (this->game_buy_ammo_ordered != other.game_buy_ammo_ordered) {
      return false;
    }
    if (this->game_coins != other.game_coins) {
      return false;
    }
    if (this->game_projectile_allowance != other.game_projectile_allowance) {
      return false;
    }
    if (this->call_target_x != other.call_target_x) {
      return false;
    }
    if (this->call_target_y != other.call_target_y) {
      return false;
    }
    if (this->call_is_called != other.call_is_called) {
      return false;
    }
    return true;
  }
  bool operator!=(const Prism_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Prism_

// alias to use template instance with default allocator
using Prism =
  iw_interfaces::msg::Prism_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iw_interfaces

#endif  // IW_INTERFACES__MSG__DETAIL__PRISM__STRUCT_HPP_
