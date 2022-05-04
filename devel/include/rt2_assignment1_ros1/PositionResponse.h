// Generated by gencpp from file rt2_assignment1_ros1/PositionResponse.msg
// DO NOT EDIT!


#ifndef RT2_ASSIGNMENT1_ROS1_MESSAGE_POSITIONRESPONSE_H
#define RT2_ASSIGNMENT1_ROS1_MESSAGE_POSITIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rt2_assignment1_ros1
{
template <class ContainerAllocator>
struct PositionResponse_
{
  typedef PositionResponse_<ContainerAllocator> Type;

  PositionResponse_()
    : ok(false)  {
    }
  PositionResponse_(const ContainerAllocator& _alloc)
    : ok(false)  {
  (void)_alloc;
    }



   typedef uint8_t _ok_type;
  _ok_type ok;





  typedef boost::shared_ptr< ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PositionResponse_

typedef ::rt2_assignment1_ros1::PositionResponse_<std::allocator<void> > PositionResponse;

typedef boost::shared_ptr< ::rt2_assignment1_ros1::PositionResponse > PositionResponsePtr;
typedef boost::shared_ptr< ::rt2_assignment1_ros1::PositionResponse const> PositionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator1> & lhs, const ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator2> & rhs)
{
  return lhs.ok == rhs.ok;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator1> & lhs, const ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rt2_assignment1_ros1

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f6da3883749771fac40d6deb24a8c02";
  }

  static const char* value(const ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f6da3883749771fULL;
  static const uint64_t static_value2 = 0xac40d6deb24a8c02ULL;
};

template<class ContainerAllocator>
struct DataType< ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rt2_assignment1_ros1/PositionResponse";
  }

  static const char* value(const ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool ok\n"
"\n"
;
  }

  static const char* value(const ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ok);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PositionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rt2_assignment1_ros1::PositionResponse_<ContainerAllocator>& v)
  {
    s << indent << "ok: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ok);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RT2_ASSIGNMENT1_ROS1_MESSAGE_POSITIONRESPONSE_H
