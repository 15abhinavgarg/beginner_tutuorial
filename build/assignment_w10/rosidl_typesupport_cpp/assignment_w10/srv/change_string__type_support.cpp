// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from assignment_w10:srv/ChangeString.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "assignment_w10/srv/detail/change_string__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace assignment_w10
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ChangeString_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChangeString_Request_type_support_ids_t;

static const _ChangeString_Request_type_support_ids_t _ChangeString_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ChangeString_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChangeString_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeString_Request_type_support_symbol_names_t _ChangeString_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment_w10, srv, ChangeString_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment_w10, srv, ChangeString_Request)),
  }
};

typedef struct _ChangeString_Request_type_support_data_t
{
  void * data[2];
} _ChangeString_Request_type_support_data_t;

static _ChangeString_Request_type_support_data_t _ChangeString_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChangeString_Request_message_typesupport_map = {
  2,
  "assignment_w10",
  &_ChangeString_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ChangeString_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ChangeString_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChangeString_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeString_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace assignment_w10

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment_w10::srv::ChangeString_Request>()
{
  return &::assignment_w10::srv::rosidl_typesupport_cpp::ChangeString_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment_w10, srv, ChangeString_Request)() {
  return get_message_type_support_handle<assignment_w10::srv::ChangeString_Request>();
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
// #include "assignment_w10/srv/detail/change_string__struct.hpp"
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

namespace assignment_w10
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ChangeString_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChangeString_Response_type_support_ids_t;

static const _ChangeString_Response_type_support_ids_t _ChangeString_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ChangeString_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChangeString_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeString_Response_type_support_symbol_names_t _ChangeString_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment_w10, srv, ChangeString_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment_w10, srv, ChangeString_Response)),
  }
};

typedef struct _ChangeString_Response_type_support_data_t
{
  void * data[2];
} _ChangeString_Response_type_support_data_t;

static _ChangeString_Response_type_support_data_t _ChangeString_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChangeString_Response_message_typesupport_map = {
  2,
  "assignment_w10",
  &_ChangeString_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ChangeString_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ChangeString_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChangeString_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeString_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace assignment_w10

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<assignment_w10::srv::ChangeString_Response>()
{
  return &::assignment_w10::srv::rosidl_typesupport_cpp::ChangeString_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, assignment_w10, srv, ChangeString_Response)() {
  return get_message_type_support_handle<assignment_w10::srv::ChangeString_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "assignment_w10/srv/detail/change_string__struct.hpp"
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

namespace assignment_w10
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ChangeString_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ChangeString_type_support_ids_t;

static const _ChangeString_type_support_ids_t _ChangeString_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ChangeString_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ChangeString_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeString_type_support_symbol_names_t _ChangeString_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assignment_w10, srv, ChangeString)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, assignment_w10, srv, ChangeString)),
  }
};

typedef struct _ChangeString_type_support_data_t
{
  void * data[2];
} _ChangeString_type_support_data_t;

static _ChangeString_type_support_data_t _ChangeString_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChangeString_service_typesupport_map = {
  2,
  "assignment_w10",
  &_ChangeString_service_typesupport_ids.typesupport_identifier[0],
  &_ChangeString_service_typesupport_symbol_names.symbol_name[0],
  &_ChangeString_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ChangeString_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeString_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace assignment_w10

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<assignment_w10::srv::ChangeString>()
{
  return &::assignment_w10::srv::rosidl_typesupport_cpp::ChangeString_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
