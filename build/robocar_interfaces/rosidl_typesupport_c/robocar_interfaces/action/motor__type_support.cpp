// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from robocar_interfaces:action/Motor.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robocar_interfaces/action/detail/motor__struct.h"
#include "robocar_interfaces/action/detail/motor__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robocar_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Motor_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Motor_Goal_type_support_ids_t;

static const _Motor_Goal_type_support_ids_t _Motor_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Motor_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Motor_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Motor_Goal_type_support_symbol_names_t _Motor_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocar_interfaces, action, Motor_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocar_interfaces, action, Motor_Goal)),
  }
};

typedef struct _Motor_Goal_type_support_data_t
{
  void * data[2];
} _Motor_Goal_type_support_data_t;

static _Motor_Goal_type_support_data_t _Motor_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Motor_Goal_message_typesupport_map = {
  2,
  "robocar_interfaces",
  &_Motor_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Motor_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Motor_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Motor_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Motor_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robocar_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robocar_interfaces, action, Motor_Goal)() {
  return &::robocar_interfaces::action::rosidl_typesupport_c::Motor_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__struct.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robocar_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Motor_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Motor_Result_type_support_ids_t;

static const _Motor_Result_type_support_ids_t _Motor_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Motor_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Motor_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Motor_Result_type_support_symbol_names_t _Motor_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocar_interfaces, action, Motor_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocar_interfaces, action, Motor_Result)),
  }
};

typedef struct _Motor_Result_type_support_data_t
{
  void * data[2];
} _Motor_Result_type_support_data_t;

static _Motor_Result_type_support_data_t _Motor_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Motor_Result_message_typesupport_map = {
  2,
  "robocar_interfaces",
  &_Motor_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Motor_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Motor_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Motor_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Motor_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robocar_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robocar_interfaces, action, Motor_Result)() {
  return &::robocar_interfaces::action::rosidl_typesupport_c::Motor_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__struct.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robocar_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Motor_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Motor_Feedback_type_support_ids_t;

static const _Motor_Feedback_type_support_ids_t _Motor_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Motor_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Motor_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Motor_Feedback_type_support_symbol_names_t _Motor_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocar_interfaces, action, Motor_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocar_interfaces, action, Motor_Feedback)),
  }
};

typedef struct _Motor_Feedback_type_support_data_t
{
  void * data[2];
} _Motor_Feedback_type_support_data_t;

static _Motor_Feedback_type_support_data_t _Motor_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Motor_Feedback_message_typesupport_map = {
  2,
  "robocar_interfaces",
  &_Motor_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Motor_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Motor_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Motor_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Motor_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robocar_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robocar_interfaces, action, Motor_Feedback)() {
  return &::robocar_interfaces::action::rosidl_typesupport_c::Motor_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__struct.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robocar_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Motor_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Motor_SendGoal_Request_type_support_ids_t;

static const _Motor_SendGoal_Request_type_support_ids_t _Motor_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Motor_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Motor_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Motor_SendGoal_Request_type_support_symbol_names_t _Motor_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocar_interfaces, action, Motor_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocar_interfaces, action, Motor_SendGoal_Request)),
  }
};

typedef struct _Motor_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Motor_SendGoal_Request_type_support_data_t;

static _Motor_SendGoal_Request_type_support_data_t _Motor_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Motor_SendGoal_Request_message_typesupport_map = {
  2,
  "robocar_interfaces",
  &_Motor_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Motor_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Motor_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Motor_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Motor_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robocar_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robocar_interfaces, action, Motor_SendGoal_Request)() {
  return &::robocar_interfaces::action::rosidl_typesupport_c::Motor_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__struct.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robocar_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Motor_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Motor_SendGoal_Response_type_support_ids_t;

static const _Motor_SendGoal_Response_type_support_ids_t _Motor_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Motor_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Motor_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Motor_SendGoal_Response_type_support_symbol_names_t _Motor_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocar_interfaces, action, Motor_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocar_interfaces, action, Motor_SendGoal_Response)),
  }
};

typedef struct _Motor_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Motor_SendGoal_Response_type_support_data_t;

static _Motor_SendGoal_Response_type_support_data_t _Motor_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Motor_SendGoal_Response_message_typesupport_map = {
  2,
  "robocar_interfaces",
  &_Motor_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Motor_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Motor_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Motor_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Motor_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robocar_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robocar_interfaces, action, Motor_SendGoal_Response)() {
  return &::robocar_interfaces::action::rosidl_typesupport_c::Motor_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robocar_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Motor_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Motor_SendGoal_type_support_ids_t;

static const _Motor_SendGoal_type_support_ids_t _Motor_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Motor_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Motor_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Motor_SendGoal_type_support_symbol_names_t _Motor_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocar_interfaces, action, Motor_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocar_interfaces, action, Motor_SendGoal)),
  }
};

typedef struct _Motor_SendGoal_type_support_data_t
{
  void * data[2];
} _Motor_SendGoal_type_support_data_t;

static _Motor_SendGoal_type_support_data_t _Motor_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Motor_SendGoal_service_typesupport_map = {
  2,
  "robocar_interfaces",
  &_Motor_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Motor_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Motor_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Motor_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Motor_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robocar_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, robocar_interfaces, action, Motor_SendGoal)() {
  return &::robocar_interfaces::action::rosidl_typesupport_c::Motor_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__struct.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robocar_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Motor_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Motor_GetResult_Request_type_support_ids_t;

static const _Motor_GetResult_Request_type_support_ids_t _Motor_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Motor_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Motor_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Motor_GetResult_Request_type_support_symbol_names_t _Motor_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocar_interfaces, action, Motor_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocar_interfaces, action, Motor_GetResult_Request)),
  }
};

typedef struct _Motor_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Motor_GetResult_Request_type_support_data_t;

static _Motor_GetResult_Request_type_support_data_t _Motor_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Motor_GetResult_Request_message_typesupport_map = {
  2,
  "robocar_interfaces",
  &_Motor_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Motor_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Motor_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Motor_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Motor_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robocar_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robocar_interfaces, action, Motor_GetResult_Request)() {
  return &::robocar_interfaces::action::rosidl_typesupport_c::Motor_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__struct.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robocar_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Motor_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Motor_GetResult_Response_type_support_ids_t;

static const _Motor_GetResult_Response_type_support_ids_t _Motor_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Motor_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Motor_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Motor_GetResult_Response_type_support_symbol_names_t _Motor_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocar_interfaces, action, Motor_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocar_interfaces, action, Motor_GetResult_Response)),
  }
};

typedef struct _Motor_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Motor_GetResult_Response_type_support_data_t;

static _Motor_GetResult_Response_type_support_data_t _Motor_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Motor_GetResult_Response_message_typesupport_map = {
  2,
  "robocar_interfaces",
  &_Motor_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Motor_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Motor_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Motor_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Motor_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robocar_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robocar_interfaces, action, Motor_GetResult_Response)() {
  return &::robocar_interfaces::action::rosidl_typesupport_c::Motor_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robocar_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Motor_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Motor_GetResult_type_support_ids_t;

static const _Motor_GetResult_type_support_ids_t _Motor_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Motor_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Motor_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Motor_GetResult_type_support_symbol_names_t _Motor_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocar_interfaces, action, Motor_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocar_interfaces, action, Motor_GetResult)),
  }
};

typedef struct _Motor_GetResult_type_support_data_t
{
  void * data[2];
} _Motor_GetResult_type_support_data_t;

static _Motor_GetResult_type_support_data_t _Motor_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Motor_GetResult_service_typesupport_map = {
  2,
  "robocar_interfaces",
  &_Motor_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Motor_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Motor_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Motor_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Motor_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robocar_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, robocar_interfaces, action, Motor_GetResult)() {
  return &::robocar_interfaces::action::rosidl_typesupport_c::Motor_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__struct.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robocar_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Motor_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Motor_FeedbackMessage_type_support_ids_t;

static const _Motor_FeedbackMessage_type_support_ids_t _Motor_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Motor_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Motor_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Motor_FeedbackMessage_type_support_symbol_names_t _Motor_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocar_interfaces, action, Motor_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocar_interfaces, action, Motor_FeedbackMessage)),
  }
};

typedef struct _Motor_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Motor_FeedbackMessage_type_support_data_t;

static _Motor_FeedbackMessage_type_support_data_t _Motor_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Motor_FeedbackMessage_message_typesupport_map = {
  2,
  "robocar_interfaces",
  &_Motor_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Motor_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Motor_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Motor_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Motor_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace robocar_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robocar_interfaces, action, Motor_FeedbackMessage)() {
  return &::robocar_interfaces::action::rosidl_typesupport_c::Motor_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "robocar_interfaces/action/motor.h"
// already included above
// #include "robocar_interfaces/action/detail/motor__type_support.h"

static rosidl_action_type_support_t _robocar_interfaces__action__Motor__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, robocar_interfaces, action, Motor)()
{
  // Thread-safe by always writing the same values to the static struct
  _robocar_interfaces__action__Motor__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, robocar_interfaces, action, Motor_SendGoal)();
  _robocar_interfaces__action__Motor__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, robocar_interfaces, action, Motor_GetResult)();
  _robocar_interfaces__action__Motor__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _robocar_interfaces__action__Motor__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, robocar_interfaces, action, Motor_FeedbackMessage)();
  _robocar_interfaces__action__Motor__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_robocar_interfaces__action__Motor__typesupport_c;
}

#ifdef __cplusplus
}
#endif
