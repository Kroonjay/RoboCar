// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocar_interfaces:action/Motor.idl
// generated code does not contain a copyright notice

#ifndef ROBOCAR_INTERFACES__ACTION__DETAIL__MOTOR__BUILDER_HPP_
#define ROBOCAR_INTERFACES__ACTION__DETAIL__MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robocar_interfaces/action/detail/motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robocar_interfaces
{

namespace action
{

namespace builder
{

class Init_Motor_Goal_duty_cycle
{
public:
  explicit Init_Motor_Goal_duty_cycle(::robocar_interfaces::action::Motor_Goal & msg)
  : msg_(msg)
  {}
  ::robocar_interfaces::action::Motor_Goal duty_cycle(::robocar_interfaces::action::Motor_Goal::_duty_cycle_type arg)
  {
    msg_.duty_cycle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocar_interfaces::action::Motor_Goal msg_;
};

class Init_Motor_Goal_reverse
{
public:
  Init_Motor_Goal_reverse()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_Goal_duty_cycle reverse(::robocar_interfaces::action::Motor_Goal::_reverse_type arg)
  {
    msg_.reverse = std::move(arg);
    return Init_Motor_Goal_duty_cycle(msg_);
  }

private:
  ::robocar_interfaces::action::Motor_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocar_interfaces::action::Motor_Goal>()
{
  return robocar_interfaces::action::builder::Init_Motor_Goal_reverse();
}

}  // namespace robocar_interfaces


namespace robocar_interfaces
{

namespace action
{

namespace builder
{

class Init_Motor_Result_duty_cycle_change
{
public:
  explicit Init_Motor_Result_duty_cycle_change(::robocar_interfaces::action::Motor_Result & msg)
  : msg_(msg)
  {}
  ::robocar_interfaces::action::Motor_Result duty_cycle_change(::robocar_interfaces::action::Motor_Result::_duty_cycle_change_type arg)
  {
    msg_.duty_cycle_change = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocar_interfaces::action::Motor_Result msg_;
};

class Init_Motor_Result_direction_changed
{
public:
  Init_Motor_Result_direction_changed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_Result_duty_cycle_change direction_changed(::robocar_interfaces::action::Motor_Result::_direction_changed_type arg)
  {
    msg_.direction_changed = std::move(arg);
    return Init_Motor_Result_duty_cycle_change(msg_);
  }

private:
  ::robocar_interfaces::action::Motor_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocar_interfaces::action::Motor_Result>()
{
  return robocar_interfaces::action::builder::Init_Motor_Result_direction_changed();
}

}  // namespace robocar_interfaces


namespace robocar_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocar_interfaces::action::Motor_Feedback>()
{
  return ::robocar_interfaces::action::Motor_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robocar_interfaces


namespace robocar_interfaces
{

namespace action
{

namespace builder
{

class Init_Motor_SendGoal_Request_goal
{
public:
  explicit Init_Motor_SendGoal_Request_goal(::robocar_interfaces::action::Motor_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robocar_interfaces::action::Motor_SendGoal_Request goal(::robocar_interfaces::action::Motor_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocar_interfaces::action::Motor_SendGoal_Request msg_;
};

class Init_Motor_SendGoal_Request_goal_id
{
public:
  Init_Motor_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_SendGoal_Request_goal goal_id(::robocar_interfaces::action::Motor_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Motor_SendGoal_Request_goal(msg_);
  }

private:
  ::robocar_interfaces::action::Motor_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocar_interfaces::action::Motor_SendGoal_Request>()
{
  return robocar_interfaces::action::builder::Init_Motor_SendGoal_Request_goal_id();
}

}  // namespace robocar_interfaces


namespace robocar_interfaces
{

namespace action
{

namespace builder
{

class Init_Motor_SendGoal_Response_stamp
{
public:
  explicit Init_Motor_SendGoal_Response_stamp(::robocar_interfaces::action::Motor_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robocar_interfaces::action::Motor_SendGoal_Response stamp(::robocar_interfaces::action::Motor_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocar_interfaces::action::Motor_SendGoal_Response msg_;
};

class Init_Motor_SendGoal_Response_accepted
{
public:
  Init_Motor_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_SendGoal_Response_stamp accepted(::robocar_interfaces::action::Motor_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Motor_SendGoal_Response_stamp(msg_);
  }

private:
  ::robocar_interfaces::action::Motor_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocar_interfaces::action::Motor_SendGoal_Response>()
{
  return robocar_interfaces::action::builder::Init_Motor_SendGoal_Response_accepted();
}

}  // namespace robocar_interfaces


namespace robocar_interfaces
{

namespace action
{

namespace builder
{

class Init_Motor_GetResult_Request_goal_id
{
public:
  Init_Motor_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robocar_interfaces::action::Motor_GetResult_Request goal_id(::robocar_interfaces::action::Motor_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocar_interfaces::action::Motor_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocar_interfaces::action::Motor_GetResult_Request>()
{
  return robocar_interfaces::action::builder::Init_Motor_GetResult_Request_goal_id();
}

}  // namespace robocar_interfaces


namespace robocar_interfaces
{

namespace action
{

namespace builder
{

class Init_Motor_GetResult_Response_result
{
public:
  explicit Init_Motor_GetResult_Response_result(::robocar_interfaces::action::Motor_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robocar_interfaces::action::Motor_GetResult_Response result(::robocar_interfaces::action::Motor_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocar_interfaces::action::Motor_GetResult_Response msg_;
};

class Init_Motor_GetResult_Response_status
{
public:
  Init_Motor_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_GetResult_Response_result status(::robocar_interfaces::action::Motor_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Motor_GetResult_Response_result(msg_);
  }

private:
  ::robocar_interfaces::action::Motor_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocar_interfaces::action::Motor_GetResult_Response>()
{
  return robocar_interfaces::action::builder::Init_Motor_GetResult_Response_status();
}

}  // namespace robocar_interfaces


namespace robocar_interfaces
{

namespace action
{

namespace builder
{

class Init_Motor_FeedbackMessage_feedback
{
public:
  explicit Init_Motor_FeedbackMessage_feedback(::robocar_interfaces::action::Motor_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robocar_interfaces::action::Motor_FeedbackMessage feedback(::robocar_interfaces::action::Motor_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocar_interfaces::action::Motor_FeedbackMessage msg_;
};

class Init_Motor_FeedbackMessage_goal_id
{
public:
  Init_Motor_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_FeedbackMessage_feedback goal_id(::robocar_interfaces::action::Motor_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Motor_FeedbackMessage_feedback(msg_);
  }

private:
  ::robocar_interfaces::action::Motor_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocar_interfaces::action::Motor_FeedbackMessage>()
{
  return robocar_interfaces::action::builder::Init_Motor_FeedbackMessage_goal_id();
}

}  // namespace robocar_interfaces

#endif  // ROBOCAR_INTERFACES__ACTION__DETAIL__MOTOR__BUILDER_HPP_
