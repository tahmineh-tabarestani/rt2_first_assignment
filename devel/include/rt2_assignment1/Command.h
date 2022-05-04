// Generated by gencpp from file rt2_assignment1/Command.msg
// DO NOT EDIT!


#ifndef RT2_ASSIGNMENT1_MESSAGE_COMMAND_H
#define RT2_ASSIGNMENT1_MESSAGE_COMMAND_H

#include <ros/service_traits.h>


#include <rt2_assignment1/CommandRequest.h>
#include <rt2_assignment1/CommandResponse.h>


namespace rt2_assignment1
{

struct Command
{

typedef CommandRequest Request;
typedef CommandResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Command
} // namespace rt2_assignment1


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rt2_assignment1::Command > {
  static const char* value()
  {
    return "8d2fe1ada9945234c69964dd9f502541";
  }

  static const char* value(const ::rt2_assignment1::Command&) { return value(); }
};

template<>
struct DataType< ::rt2_assignment1::Command > {
  static const char* value()
  {
    return "rt2_assignment1/Command";
  }

  static const char* value(const ::rt2_assignment1::Command&) { return value(); }
};


// service_traits::MD5Sum< ::rt2_assignment1::CommandRequest> should match
// service_traits::MD5Sum< ::rt2_assignment1::Command >
template<>
struct MD5Sum< ::rt2_assignment1::CommandRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rt2_assignment1::Command >::value();
  }
  static const char* value(const ::rt2_assignment1::CommandRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rt2_assignment1::CommandRequest> should match
// service_traits::DataType< ::rt2_assignment1::Command >
template<>
struct DataType< ::rt2_assignment1::CommandRequest>
{
  static const char* value()
  {
    return DataType< ::rt2_assignment1::Command >::value();
  }
  static const char* value(const ::rt2_assignment1::CommandRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rt2_assignment1::CommandResponse> should match
// service_traits::MD5Sum< ::rt2_assignment1::Command >
template<>
struct MD5Sum< ::rt2_assignment1::CommandResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rt2_assignment1::Command >::value();
  }
  static const char* value(const ::rt2_assignment1::CommandResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rt2_assignment1::CommandResponse> should match
// service_traits::DataType< ::rt2_assignment1::Command >
template<>
struct DataType< ::rt2_assignment1::CommandResponse>
{
  static const char* value()
  {
    return DataType< ::rt2_assignment1::Command >::value();
  }
  static const char* value(const ::rt2_assignment1::CommandResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // RT2_ASSIGNMENT1_MESSAGE_COMMAND_H
