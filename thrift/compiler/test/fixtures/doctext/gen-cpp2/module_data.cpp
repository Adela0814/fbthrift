/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<::cpp2::B, 1> TEnumDataStorage<::cpp2::B>::values = {{
  type::HELLO,
}};
const std::array<folly::StringPiece, 1> TEnumDataStorage<::cpp2::B>::names = {{
  "HELLO",
}};

const std::array<::cpp2::U::Type, 2> TEnumDataStorage<::cpp2::U::Type>::values = {{
  type::i,
  type::s,
}};
const std::array<folly::StringPiece, 2> TEnumDataStorage<::cpp2::U::Type>::names = {{
  "i",
  "s",
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::A>::fields_names = {{
  "useless_field",
}};
const std::array<int16_t, 1> TStructDataStorage<::cpp2::A>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::A>::fields_types = {{
  TType::T_I32,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::U>::fields_names = {{
  "i",
  "s",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::U>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::U>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::Bang>::fields_names = {{
  "message",
}};
const std::array<int16_t, 1> TStructDataStorage<::cpp2::Bang>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::Bang>::fields_types = {{
  TType::T_STRING,
}};

} // namespace thrift
} // namespace apache
