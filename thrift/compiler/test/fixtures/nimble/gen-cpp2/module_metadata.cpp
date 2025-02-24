/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/nimble/gen-cpp2/module_metadata.h"

// some of these functions can be so large that the compiler gives up optimizing
// them - and issues a warning which may be treated as an error!
//
// these functions are so rarely called that it is probably okay for them not to
// be optimized in practice
FOLLY_CLANG_DISABLE_WARNING("-Wignored-optimization-argument")

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);


const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::BasicTypes>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.BasicTypes", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_BasicTypes = res.first->second;
  module_BasicTypes.name() = "module.BasicTypes";
  module_BasicTypes.is_union() = false;
  static const auto* const
  module_BasicTypes_fields = new std::array<EncodedThriftField, 4>{{
    {1, "first", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "second", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "third", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {4, "isTrue", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_BasicTypes_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_BasicTypes.fields()->push_back(std::move(field));
  }
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
