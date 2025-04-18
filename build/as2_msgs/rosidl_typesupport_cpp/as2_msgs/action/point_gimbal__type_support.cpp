// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from as2_msgs:action/PointGimbal.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "as2_msgs/action/detail/point_gimbal__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace as2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointGimbal_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointGimbal_Goal_type_support_ids_t;

static const _PointGimbal_Goal_type_support_ids_t _PointGimbal_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointGimbal_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointGimbal_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointGimbal_Goal_type_support_symbol_names_t _PointGimbal_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, as2_msgs, action, PointGimbal_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, as2_msgs, action, PointGimbal_Goal)),
  }
};

typedef struct _PointGimbal_Goal_type_support_data_t
{
  void * data[2];
} _PointGimbal_Goal_type_support_data_t;

static _PointGimbal_Goal_type_support_data_t _PointGimbal_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointGimbal_Goal_message_typesupport_map = {
  2,
  "as2_msgs",
  &_PointGimbal_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_PointGimbal_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_PointGimbal_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointGimbal_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointGimbal_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<as2_msgs::action::PointGimbal_Goal>()
{
  return &::as2_msgs::action::rosidl_typesupport_cpp::PointGimbal_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, as2_msgs, action, PointGimbal_Goal)() {
  return get_message_type_support_handle<as2_msgs::action::PointGimbal_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "as2_msgs/action/detail/point_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace as2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointGimbal_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointGimbal_Result_type_support_ids_t;

static const _PointGimbal_Result_type_support_ids_t _PointGimbal_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointGimbal_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointGimbal_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointGimbal_Result_type_support_symbol_names_t _PointGimbal_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, as2_msgs, action, PointGimbal_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, as2_msgs, action, PointGimbal_Result)),
  }
};

typedef struct _PointGimbal_Result_type_support_data_t
{
  void * data[2];
} _PointGimbal_Result_type_support_data_t;

static _PointGimbal_Result_type_support_data_t _PointGimbal_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointGimbal_Result_message_typesupport_map = {
  2,
  "as2_msgs",
  &_PointGimbal_Result_message_typesupport_ids.typesupport_identifier[0],
  &_PointGimbal_Result_message_typesupport_symbol_names.symbol_name[0],
  &_PointGimbal_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointGimbal_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointGimbal_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<as2_msgs::action::PointGimbal_Result>()
{
  return &::as2_msgs::action::rosidl_typesupport_cpp::PointGimbal_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, as2_msgs, action, PointGimbal_Result)() {
  return get_message_type_support_handle<as2_msgs::action::PointGimbal_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "as2_msgs/action/detail/point_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace as2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointGimbal_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointGimbal_Feedback_type_support_ids_t;

static const _PointGimbal_Feedback_type_support_ids_t _PointGimbal_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointGimbal_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointGimbal_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointGimbal_Feedback_type_support_symbol_names_t _PointGimbal_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, as2_msgs, action, PointGimbal_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, as2_msgs, action, PointGimbal_Feedback)),
  }
};

typedef struct _PointGimbal_Feedback_type_support_data_t
{
  void * data[2];
} _PointGimbal_Feedback_type_support_data_t;

static _PointGimbal_Feedback_type_support_data_t _PointGimbal_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointGimbal_Feedback_message_typesupport_map = {
  2,
  "as2_msgs",
  &_PointGimbal_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_PointGimbal_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_PointGimbal_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointGimbal_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointGimbal_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<as2_msgs::action::PointGimbal_Feedback>()
{
  return &::as2_msgs::action::rosidl_typesupport_cpp::PointGimbal_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, as2_msgs, action, PointGimbal_Feedback)() {
  return get_message_type_support_handle<as2_msgs::action::PointGimbal_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "as2_msgs/action/detail/point_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace as2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointGimbal_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointGimbal_SendGoal_Request_type_support_ids_t;

static const _PointGimbal_SendGoal_Request_type_support_ids_t _PointGimbal_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointGimbal_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointGimbal_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointGimbal_SendGoal_Request_type_support_symbol_names_t _PointGimbal_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, as2_msgs, action, PointGimbal_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, as2_msgs, action, PointGimbal_SendGoal_Request)),
  }
};

typedef struct _PointGimbal_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _PointGimbal_SendGoal_Request_type_support_data_t;

static _PointGimbal_SendGoal_Request_type_support_data_t _PointGimbal_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointGimbal_SendGoal_Request_message_typesupport_map = {
  2,
  "as2_msgs",
  &_PointGimbal_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PointGimbal_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PointGimbal_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointGimbal_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointGimbal_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<as2_msgs::action::PointGimbal_SendGoal_Request>()
{
  return &::as2_msgs::action::rosidl_typesupport_cpp::PointGimbal_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, as2_msgs, action, PointGimbal_SendGoal_Request)() {
  return get_message_type_support_handle<as2_msgs::action::PointGimbal_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "as2_msgs/action/detail/point_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace as2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointGimbal_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointGimbal_SendGoal_Response_type_support_ids_t;

static const _PointGimbal_SendGoal_Response_type_support_ids_t _PointGimbal_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointGimbal_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointGimbal_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointGimbal_SendGoal_Response_type_support_symbol_names_t _PointGimbal_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, as2_msgs, action, PointGimbal_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, as2_msgs, action, PointGimbal_SendGoal_Response)),
  }
};

typedef struct _PointGimbal_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _PointGimbal_SendGoal_Response_type_support_data_t;

static _PointGimbal_SendGoal_Response_type_support_data_t _PointGimbal_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointGimbal_SendGoal_Response_message_typesupport_map = {
  2,
  "as2_msgs",
  &_PointGimbal_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PointGimbal_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PointGimbal_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointGimbal_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointGimbal_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<as2_msgs::action::PointGimbal_SendGoal_Response>()
{
  return &::as2_msgs::action::rosidl_typesupport_cpp::PointGimbal_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, as2_msgs, action, PointGimbal_SendGoal_Response)() {
  return get_message_type_support_handle<as2_msgs::action::PointGimbal_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "as2_msgs/action/detail/point_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace as2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointGimbal_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointGimbal_SendGoal_type_support_ids_t;

static const _PointGimbal_SendGoal_type_support_ids_t _PointGimbal_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointGimbal_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointGimbal_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointGimbal_SendGoal_type_support_symbol_names_t _PointGimbal_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, as2_msgs, action, PointGimbal_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, as2_msgs, action, PointGimbal_SendGoal)),
  }
};

typedef struct _PointGimbal_SendGoal_type_support_data_t
{
  void * data[2];
} _PointGimbal_SendGoal_type_support_data_t;

static _PointGimbal_SendGoal_type_support_data_t _PointGimbal_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointGimbal_SendGoal_service_typesupport_map = {
  2,
  "as2_msgs",
  &_PointGimbal_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_PointGimbal_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_PointGimbal_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PointGimbal_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointGimbal_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<as2_msgs::action::PointGimbal_SendGoal>()
{
  return &::as2_msgs::action::rosidl_typesupport_cpp::PointGimbal_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, as2_msgs, action, PointGimbal_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<as2_msgs::action::PointGimbal_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "as2_msgs/action/detail/point_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace as2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointGimbal_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointGimbal_GetResult_Request_type_support_ids_t;

static const _PointGimbal_GetResult_Request_type_support_ids_t _PointGimbal_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointGimbal_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointGimbal_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointGimbal_GetResult_Request_type_support_symbol_names_t _PointGimbal_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, as2_msgs, action, PointGimbal_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, as2_msgs, action, PointGimbal_GetResult_Request)),
  }
};

typedef struct _PointGimbal_GetResult_Request_type_support_data_t
{
  void * data[2];
} _PointGimbal_GetResult_Request_type_support_data_t;

static _PointGimbal_GetResult_Request_type_support_data_t _PointGimbal_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointGimbal_GetResult_Request_message_typesupport_map = {
  2,
  "as2_msgs",
  &_PointGimbal_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PointGimbal_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PointGimbal_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointGimbal_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointGimbal_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<as2_msgs::action::PointGimbal_GetResult_Request>()
{
  return &::as2_msgs::action::rosidl_typesupport_cpp::PointGimbal_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, as2_msgs, action, PointGimbal_GetResult_Request)() {
  return get_message_type_support_handle<as2_msgs::action::PointGimbal_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "as2_msgs/action/detail/point_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace as2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointGimbal_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointGimbal_GetResult_Response_type_support_ids_t;

static const _PointGimbal_GetResult_Response_type_support_ids_t _PointGimbal_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointGimbal_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointGimbal_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointGimbal_GetResult_Response_type_support_symbol_names_t _PointGimbal_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, as2_msgs, action, PointGimbal_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, as2_msgs, action, PointGimbal_GetResult_Response)),
  }
};

typedef struct _PointGimbal_GetResult_Response_type_support_data_t
{
  void * data[2];
} _PointGimbal_GetResult_Response_type_support_data_t;

static _PointGimbal_GetResult_Response_type_support_data_t _PointGimbal_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointGimbal_GetResult_Response_message_typesupport_map = {
  2,
  "as2_msgs",
  &_PointGimbal_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PointGimbal_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PointGimbal_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointGimbal_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointGimbal_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<as2_msgs::action::PointGimbal_GetResult_Response>()
{
  return &::as2_msgs::action::rosidl_typesupport_cpp::PointGimbal_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, as2_msgs, action, PointGimbal_GetResult_Response)() {
  return get_message_type_support_handle<as2_msgs::action::PointGimbal_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "as2_msgs/action/detail/point_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace as2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointGimbal_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointGimbal_GetResult_type_support_ids_t;

static const _PointGimbal_GetResult_type_support_ids_t _PointGimbal_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointGimbal_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointGimbal_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointGimbal_GetResult_type_support_symbol_names_t _PointGimbal_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, as2_msgs, action, PointGimbal_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, as2_msgs, action, PointGimbal_GetResult)),
  }
};

typedef struct _PointGimbal_GetResult_type_support_data_t
{
  void * data[2];
} _PointGimbal_GetResult_type_support_data_t;

static _PointGimbal_GetResult_type_support_data_t _PointGimbal_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointGimbal_GetResult_service_typesupport_map = {
  2,
  "as2_msgs",
  &_PointGimbal_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_PointGimbal_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_PointGimbal_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PointGimbal_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointGimbal_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<as2_msgs::action::PointGimbal_GetResult>()
{
  return &::as2_msgs::action::rosidl_typesupport_cpp::PointGimbal_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, as2_msgs, action, PointGimbal_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<as2_msgs::action::PointGimbal_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "as2_msgs/action/detail/point_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace as2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PointGimbal_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointGimbal_FeedbackMessage_type_support_ids_t;

static const _PointGimbal_FeedbackMessage_type_support_ids_t _PointGimbal_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PointGimbal_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointGimbal_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointGimbal_FeedbackMessage_type_support_symbol_names_t _PointGimbal_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, as2_msgs, action, PointGimbal_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, as2_msgs, action, PointGimbal_FeedbackMessage)),
  }
};

typedef struct _PointGimbal_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _PointGimbal_FeedbackMessage_type_support_data_t;

static _PointGimbal_FeedbackMessage_type_support_data_t _PointGimbal_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointGimbal_FeedbackMessage_message_typesupport_map = {
  2,
  "as2_msgs",
  &_PointGimbal_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_PointGimbal_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_PointGimbal_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointGimbal_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointGimbal_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<as2_msgs::action::PointGimbal_FeedbackMessage>()
{
  return &::as2_msgs::action::rosidl_typesupport_cpp::PointGimbal_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, as2_msgs, action, PointGimbal_FeedbackMessage)() {
  return get_message_type_support_handle<as2_msgs::action::PointGimbal_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "as2_msgs/action/detail/point_gimbal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace as2_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t PointGimbal_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace as2_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<as2_msgs::action::PointGimbal>()
{
  using ::as2_msgs::action::rosidl_typesupport_cpp::PointGimbal_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  PointGimbal_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::as2_msgs::action::PointGimbal::Impl::SendGoalService>();
  PointGimbal_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::as2_msgs::action::PointGimbal::Impl::GetResultService>();
  PointGimbal_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::as2_msgs::action::PointGimbal::Impl::CancelGoalService>();
  PointGimbal_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::as2_msgs::action::PointGimbal::Impl::FeedbackMessage>();
  PointGimbal_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::as2_msgs::action::PointGimbal::Impl::GoalStatusMessage>();
  return &PointGimbal_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, as2_msgs, action, PointGimbal)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<as2_msgs::action::PointGimbal>();
}

#ifdef __cplusplus
}
#endif
