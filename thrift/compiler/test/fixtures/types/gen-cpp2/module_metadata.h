/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_metadata_h.h>
#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/types/gen-cpp2/include_metadata.h"

namespace apache::thrift::fixtures::types {
class SomeServiceSvIf;
} // apache::thrift::fixtures::types

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftService = ::apache::thrift::metadata::ThriftService;

template <>
class EnumMetadata<::apache::thrift::fixtures::types::has_bitwise_ops> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::apache::thrift::fixtures::types::is_unscoped> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::apache::thrift::fixtures::types::MyForwardRefEnum> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::apache::thrift::fixtures::types::MyEnumA> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::decorated_struct> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::ContainerStruct> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::CppTypeStruct> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::VirtualStruct> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::MyStructWithForwardRefEnum> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::TrivialNumeric> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::TrivialNestedWithDefault> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::ComplexString> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::ComplexNestedWithDefault> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::MinPadding> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::MyDataItem> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::MyStruct> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::Renaming> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::AnnotatedTypes> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::ForwardUsageStruct> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::ForwardUsageRoot> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::ForwardUsageByRef> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::NoexceptMoveEmpty> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::NoexceptMoveSimpleStruct> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::NoexceptMoveComplexStruct> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::apache::thrift::fixtures::types::NoExceptMoveUnion> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class ServiceMetadata<::apache::thrift::fixtures::types::SomeServiceSvIf> {
 public:
  static void gen(ThriftMetadata& metadata, ThriftServiceContext& context);
 private:
  static void gen_bounce_map(ThriftMetadata& metadata, ThriftService& context);
  static void gen_binary_keyed_map(ThriftMetadata& metadata, ThriftService& context);
};
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
