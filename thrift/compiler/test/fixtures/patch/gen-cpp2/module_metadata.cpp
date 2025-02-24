/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/patch/gen-cpp2/module_metadata.h"

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
StructMetadata<::test::fixtures::patch::MyData>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyData", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyData = res.first->second;
  module_MyData.name() = "module.MyData";
  module_MyData.is_union() = false;
  static const auto* const
  module_MyData_fields = new std::array<EncodedThriftField, 2>{{
    {1, "data1", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "data2", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_MyData_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyData.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::patch::InnerUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.InnerUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_InnerUnion = res.first->second;
  module_InnerUnion.name() = "module.InnerUnion";
  module_InnerUnion.is_union() = true;
  static const auto* const
  module_InnerUnion_fields = new std::array<EncodedThriftField, 1>{{
    {1, "innerOption", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_InnerUnion_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_InnerUnion.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::patch::MyUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyUnion = res.first->second;
  module_MyUnion.name() = "module.MyUnion";
  module_MyUnion.is_union() = true;
  static const auto* const
  module_MyUnion_fields = new std::array<EncodedThriftField, 3>{{
    {1, "option1", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "option2", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "option3", false, std::make_unique<Union<::test::fixtures::patch::InnerUnion>>("module.InnerUnion"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_MyUnion_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyUnion.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::patch::MyStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStruct = res.first->second;
  module_MyStruct.name() = "module.MyStruct";
  module_MyStruct.is_union() = false;
  static const auto* const
  module_MyStruct_fields = new std::array<EncodedThriftField, 24>{{
    {1, "boolVal", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "byteVal", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BYTE_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "i16Val", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::vector<ThriftConstStruct>{}},
    {4, "i32Val", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {5, "i64Val", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {6, "floatVal", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_FLOAT_TYPE), std::vector<ThriftConstStruct>{}},
    {7, "doubleVal", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE), std::vector<ThriftConstStruct>{}},
    {8, "stringVal", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {9, "binaryVal", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{}},
    {10, "structVal", false, std::make_unique<Struct<::test::fixtures::patch::MyData>>("module.MyData"), std::vector<ThriftConstStruct>{}},
    {11, "optBoolVal", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {12, "optByteVal", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BYTE_TYPE), std::vector<ThriftConstStruct>{}},
    {13, "optI16Val", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::vector<ThriftConstStruct>{}},
    {14, "optI32Val", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {15, "optI64Val", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {16, "optFloatVal", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_FLOAT_TYPE), std::vector<ThriftConstStruct>{}},
    {17, "optDoubleVal", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE), std::vector<ThriftConstStruct>{}},
    {18, "optStringVal", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {19, "optBinaryVal", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{}},
    {20, "optStructVal", true, std::make_unique<Struct<::test::fixtures::patch::MyData>>("module.MyData"), std::vector<ThriftConstStruct>{}},
    {21, "optListVal", true, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {22, "optSetVal", true, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
    {23, "optMapVal", true, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
    {30, "unionVal", false, std::make_unique<Union<::test::fixtures::patch::MyUnion>>("module.MyUnion"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_MyStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyStruct.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::patch::MyDataFieldPatchStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyDataFieldPatch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyDataFieldPatch = res.first->second;
  module_MyDataFieldPatch.name() = "module.MyDataFieldPatch";
  module_MyDataFieldPatch.is_union() = false;
  static const auto* const
  module_MyDataFieldPatch_fields = new std::array<EncodedThriftField, 2>{{
    {1, "data1", false, std::make_unique<Struct<::apache::thrift::op::StringPatchStruct>>("patch.StringPatch"), std::vector<ThriftConstStruct>{}},
    {2, "data2", false, std::make_unique<Struct<::apache::thrift::op::I32PatchStruct>>("patch.I32Patch"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_MyDataFieldPatch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyDataFieldPatch.fields()->push_back(std::move(field));
  }
  module_MyDataFieldPatch.structured_annotations()->push_back(*cvStruct("cpp.Adapter", {{"name", cvString(R"(::apache::thrift::op::detail::FieldPatchAdapter)")}, {"underlyingName", cvString(R"(MyDataFieldPatchStruct)")}, {"extraNamespace", cvString(R"()")}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::patch::MyDataPatchStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyDataPatch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyDataPatch = res.first->second;
  module_MyDataPatch.name() = "module.MyDataPatch";
  module_MyDataPatch.is_union() = false;
  static const auto* const
  module_MyDataPatch_fields = new std::array<EncodedThriftField, 5>{{
    {1, "assign", true, std::make_unique<Struct<::test::fixtures::patch::MyData>>("module.MyData"), std::vector<ThriftConstStruct>{}},
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "patchPrior", false, std::make_unique<Struct<::test::fixtures::patch::MyDataFieldPatchStruct>>("module.MyDataFieldPatch"), std::vector<ThriftConstStruct>{}},
    {5, "ensure", false, std::make_unique<Struct<::test::fixtures::patch::MyData>>("module.MyData"), std::vector<ThriftConstStruct>{}},
    {6, "patch", false, std::make_unique<Struct<::test::fixtures::patch::MyDataFieldPatchStruct>>("module.MyDataFieldPatch"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_MyDataPatch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyDataPatch.fields()->push_back(std::move(field));
  }
  module_MyDataPatch.structured_annotations()->push_back(*cvStruct("cpp.Adapter", {{"name", cvString(R"(::apache::thrift::op::detail::StructPatchAdapter)")}, {"underlyingName", cvString(R"(MyDataPatchStruct)")}, {"extraNamespace", cvString(R"()")}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::patch::InnerUnionFieldPatchStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.InnerUnionFieldPatch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_InnerUnionFieldPatch = res.first->second;
  module_InnerUnionFieldPatch.name() = "module.InnerUnionFieldPatch";
  module_InnerUnionFieldPatch.is_union() = false;
  static const auto* const
  module_InnerUnionFieldPatch_fields = new std::array<EncodedThriftField, 1>{{
    {1, "innerOption", false, std::make_unique<Struct<::apache::thrift::op::BinaryPatchStruct>>("patch.BinaryPatch"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_InnerUnionFieldPatch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_InnerUnionFieldPatch.fields()->push_back(std::move(field));
  }
  module_InnerUnionFieldPatch.structured_annotations()->push_back(*cvStruct("cpp.Adapter", {{"name", cvString(R"(::apache::thrift::op::detail::FieldPatchAdapter)")}, {"underlyingName", cvString(R"(InnerUnionFieldPatchStruct)")}, {"extraNamespace", cvString(R"()")}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::patch::InnerUnionPatchStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.InnerUnionPatch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_InnerUnionPatch = res.first->second;
  module_InnerUnionPatch.name() = "module.InnerUnionPatch";
  module_InnerUnionPatch.is_union() = false;
  static const auto* const
  module_InnerUnionPatch_fields = new std::array<EncodedThriftField, 5>{{
    {1, "assign", false, std::make_unique<Union<::test::fixtures::patch::InnerUnion>>("module.InnerUnion"), std::vector<ThriftConstStruct>{}},
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "patchPrior", false, std::make_unique<Struct<::test::fixtures::patch::InnerUnionFieldPatchStruct>>("module.InnerUnionFieldPatch"), std::vector<ThriftConstStruct>{}},
    {4, "ensure", false, std::make_unique<Union<::test::fixtures::patch::InnerUnion>>("module.InnerUnion"), std::vector<ThriftConstStruct>{}},
    {6, "patch", false, std::make_unique<Struct<::test::fixtures::patch::InnerUnionFieldPatchStruct>>("module.InnerUnionFieldPatch"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_InnerUnionPatch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_InnerUnionPatch.fields()->push_back(std::move(field));
  }
  module_InnerUnionPatch.structured_annotations()->push_back(*cvStruct("cpp.Adapter", {{"name", cvString(R"(::apache::thrift::op::detail::UnionPatchAdapter)")}, {"underlyingName", cvString(R"(InnerUnionPatchStruct)")}, {"extraNamespace", cvString(R"()")}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::patch::MyUnionFieldPatchStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyUnionFieldPatch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyUnionFieldPatch = res.first->second;
  module_MyUnionFieldPatch.name() = "module.MyUnionFieldPatch";
  module_MyUnionFieldPatch.is_union() = false;
  static const auto* const
  module_MyUnionFieldPatch_fields = new std::array<EncodedThriftField, 3>{{
    {1, "option1", false, std::make_unique<Struct<::apache::thrift::op::StringPatchStruct>>("patch.StringPatch"), std::vector<ThriftConstStruct>{}},
    {2, "option2", false, std::make_unique<Struct<::apache::thrift::op::I32PatchStruct>>("patch.I32Patch"), std::vector<ThriftConstStruct>{}},
    {3, "option3", false, std::make_unique<Struct<::test::fixtures::patch::InnerUnionPatchStruct>>("module.InnerUnionPatch"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_MyUnionFieldPatch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyUnionFieldPatch.fields()->push_back(std::move(field));
  }
  module_MyUnionFieldPatch.structured_annotations()->push_back(*cvStruct("cpp.Adapter", {{"name", cvString(R"(::apache::thrift::op::detail::FieldPatchAdapter)")}, {"underlyingName", cvString(R"(MyUnionFieldPatchStruct)")}, {"extraNamespace", cvString(R"()")}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::patch::MyUnionPatchStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyUnionPatch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyUnionPatch = res.first->second;
  module_MyUnionPatch.name() = "module.MyUnionPatch";
  module_MyUnionPatch.is_union() = false;
  static const auto* const
  module_MyUnionPatch_fields = new std::array<EncodedThriftField, 5>{{
    {1, "assign", false, std::make_unique<Union<::test::fixtures::patch::MyUnion>>("module.MyUnion"), std::vector<ThriftConstStruct>{}},
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "patchPrior", false, std::make_unique<Struct<::test::fixtures::patch::MyUnionFieldPatchStruct>>("module.MyUnionFieldPatch"), std::vector<ThriftConstStruct>{}},
    {4, "ensure", false, std::make_unique<Union<::test::fixtures::patch::MyUnion>>("module.MyUnion"), std::vector<ThriftConstStruct>{}},
    {6, "patch", false, std::make_unique<Struct<::test::fixtures::patch::MyUnionFieldPatchStruct>>("module.MyUnionFieldPatch"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_MyUnionPatch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyUnionPatch.fields()->push_back(std::move(field));
  }
  module_MyUnionPatch.structured_annotations()->push_back(*cvStruct("cpp.Adapter", {{"name", cvString(R"(::apache::thrift::op::detail::UnionPatchAdapter)")}, {"underlyingName", cvString(R"(MyUnionPatchStruct)")}, {"extraNamespace", cvString(R"()")}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::patch::MyStructField21PatchStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyStructField21Patch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStructField21Patch = res.first->second;
  module_MyStructField21Patch.name() = "module.MyStructField21Patch";
  module_MyStructField21Patch.is_union() = false;
  static const auto* const
  module_MyStructField21Patch_fields = new std::array<EncodedThriftField, 4>{{
    {1, "assign", true, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {8, "prepend", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
    {9, "append", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_MyStructField21Patch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyStructField21Patch.fields()->push_back(std::move(field));
  }
  module_MyStructField21Patch.structured_annotations()->push_back(*cvStruct("cpp.Adapter", {{"name", cvString(R"(::apache::thrift::op::detail::ListPatchAdapter)")}, {"underlyingName", cvString(R"(MyStructField21PatchStruct)")}, {"extraNamespace", cvString(R"()")}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::patch::MyStructField22PatchStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyStructField22Patch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStructField22Patch = res.first->second;
  module_MyStructField22Patch.name() = "module.MyStructField22Patch";
  module_MyStructField22Patch.is_union() = false;
  static const auto* const
  module_MyStructField22Patch_fields = new std::array<EncodedThriftField, 4>{{
    {1, "assign", true, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {7, "remove", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
    {8, "add", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_MyStructField22Patch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyStructField22Patch.fields()->push_back(std::move(field));
  }
  module_MyStructField22Patch.structured_annotations()->push_back(*cvStruct("cpp.Adapter", {{"name", cvString(R"(::apache::thrift::op::detail::SetPatchAdapter)")}, {"underlyingName", cvString(R"(MyStructField22PatchStruct)")}, {"extraNamespace", cvString(R"()")}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::patch::MyStructField23PatchStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyStructField23Patch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStructField23Patch = res.first->second;
  module_MyStructField23Patch.name() = "module.MyStructField23Patch";
  module_MyStructField23Patch.is_union() = false;
  static const auto* const
  module_MyStructField23Patch_fields = new std::array<EncodedThriftField, 4>{{
    {1, "assign", true, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {5, "add", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
    {9, "put", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_MyStructField23Patch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyStructField23Patch.fields()->push_back(std::move(field));
  }
  module_MyStructField23Patch.structured_annotations()->push_back(*cvStruct("cpp.Adapter", {{"name", cvString(R"(::apache::thrift::op::detail::MapPatchAdapter)")}, {"underlyingName", cvString(R"(MyStructField23PatchStruct)")}, {"extraNamespace", cvString(R"()")}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::patch::MyStructFieldPatchStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyStructFieldPatch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStructFieldPatch = res.first->second;
  module_MyStructFieldPatch.name() = "module.MyStructFieldPatch";
  module_MyStructFieldPatch.is_union() = false;
  static const auto* const
  module_MyStructFieldPatch_fields = new std::array<EncodedThriftField, 24>{{
    {1, "boolVal", false, std::make_unique<Struct<::apache::thrift::op::BoolPatchStruct>>("patch.BoolPatch"), std::vector<ThriftConstStruct>{}},
    {2, "byteVal", false, std::make_unique<Struct<::apache::thrift::op::BytePatchStruct>>("patch.BytePatch"), std::vector<ThriftConstStruct>{}},
    {3, "i16Val", false, std::make_unique<Struct<::apache::thrift::op::I16PatchStruct>>("patch.I16Patch"), std::vector<ThriftConstStruct>{}},
    {4, "i32Val", false, std::make_unique<Struct<::apache::thrift::op::I32PatchStruct>>("patch.I32Patch"), std::vector<ThriftConstStruct>{}},
    {5, "i64Val", false, std::make_unique<Struct<::apache::thrift::op::I64PatchStruct>>("patch.I64Patch"), std::vector<ThriftConstStruct>{}},
    {6, "floatVal", false, std::make_unique<Struct<::apache::thrift::op::FloatPatchStruct>>("patch.FloatPatch"), std::vector<ThriftConstStruct>{}},
    {7, "doubleVal", false, std::make_unique<Struct<::apache::thrift::op::DoublePatchStruct>>("patch.DoublePatch"), std::vector<ThriftConstStruct>{}},
    {8, "stringVal", false, std::make_unique<Struct<::apache::thrift::op::StringPatchStruct>>("patch.StringPatch"), std::vector<ThriftConstStruct>{}},
    {9, "binaryVal", false, std::make_unique<Struct<::apache::thrift::op::BinaryPatchStruct>>("patch.BinaryPatch"), std::vector<ThriftConstStruct>{}},
    {10, "structVal", false, std::make_unique<Struct<::test::fixtures::patch::MyDataPatchStruct>>("module.MyDataPatch"), std::vector<ThriftConstStruct>{}},
    {11, "optBoolVal", false, std::make_unique<Struct<::apache::thrift::op::BoolPatchStruct>>("patch.BoolPatch"), std::vector<ThriftConstStruct>{}},
    {12, "optByteVal", false, std::make_unique<Struct<::apache::thrift::op::BytePatchStruct>>("patch.BytePatch"), std::vector<ThriftConstStruct>{}},
    {13, "optI16Val", false, std::make_unique<Struct<::apache::thrift::op::I16PatchStruct>>("patch.I16Patch"), std::vector<ThriftConstStruct>{}},
    {14, "optI32Val", false, std::make_unique<Struct<::apache::thrift::op::I32PatchStruct>>("patch.I32Patch"), std::vector<ThriftConstStruct>{}},
    {15, "optI64Val", false, std::make_unique<Struct<::apache::thrift::op::I64PatchStruct>>("patch.I64Patch"), std::vector<ThriftConstStruct>{}},
    {16, "optFloatVal", false, std::make_unique<Struct<::apache::thrift::op::FloatPatchStruct>>("patch.FloatPatch"), std::vector<ThriftConstStruct>{}},
    {17, "optDoubleVal", false, std::make_unique<Struct<::apache::thrift::op::DoublePatchStruct>>("patch.DoublePatch"), std::vector<ThriftConstStruct>{}},
    {18, "optStringVal", false, std::make_unique<Struct<::apache::thrift::op::StringPatchStruct>>("patch.StringPatch"), std::vector<ThriftConstStruct>{}},
    {19, "optBinaryVal", false, std::make_unique<Struct<::apache::thrift::op::BinaryPatchStruct>>("patch.BinaryPatch"), std::vector<ThriftConstStruct>{}},
    {20, "optStructVal", false, std::make_unique<Struct<::test::fixtures::patch::MyDataPatchStruct>>("module.MyDataPatch"), std::vector<ThriftConstStruct>{}},
    {21, "optListVal", false, std::make_unique<Struct<::test::fixtures::patch::MyStructField21PatchStruct>>("module.MyStructField21Patch"), std::vector<ThriftConstStruct>{}},
    {22, "optSetVal", false, std::make_unique<Struct<::test::fixtures::patch::MyStructField22PatchStruct>>("module.MyStructField22Patch"), std::vector<ThriftConstStruct>{}},
    {23, "optMapVal", false, std::make_unique<Struct<::test::fixtures::patch::MyStructField23PatchStruct>>("module.MyStructField23Patch"), std::vector<ThriftConstStruct>{}},
    {30, "unionVal", false, std::make_unique<Struct<::test::fixtures::patch::MyUnionPatchStruct>>("module.MyUnionPatch"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_MyStructFieldPatch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyStructFieldPatch.fields()->push_back(std::move(field));
  }
  module_MyStructFieldPatch.structured_annotations()->push_back(*cvStruct("cpp.Adapter", {{"name", cvString(R"(::apache::thrift::op::detail::FieldPatchAdapter)")}, {"underlyingName", cvString(R"(MyStructFieldPatchStruct)")}, {"extraNamespace", cvString(R"()")}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::patch::MyStructPatchStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyStructPatch", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStructPatch = res.first->second;
  module_MyStructPatch.name() = "module.MyStructPatch";
  module_MyStructPatch.is_union() = false;
  static const auto* const
  module_MyStructPatch_fields = new std::array<EncodedThriftField, 5>{{
    {1, "assign", true, std::make_unique<Struct<::test::fixtures::patch::MyStruct>>("module.MyStruct"), std::vector<ThriftConstStruct>{}},
    {2, "clear", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "patchPrior", false, std::make_unique<Struct<::test::fixtures::patch::MyStructFieldPatchStruct>>("module.MyStructFieldPatch"), std::vector<ThriftConstStruct>{}},
    {5, "ensure", false, std::make_unique<Struct<::test::fixtures::patch::MyStruct>>("module.MyStruct"), std::vector<ThriftConstStruct>{}},
    {6, "patch", false, std::make_unique<Struct<::test::fixtures::patch::MyStructFieldPatchStruct>>("module.MyStructFieldPatch"), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_MyStructPatch_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyStructPatch.fields()->push_back(std::move(field));
  }
  module_MyStructPatch.structured_annotations()->push_back(*cvStruct("cpp.Adapter", {{"name", cvString(R"(::apache::thrift::op::detail::StructPatchAdapter)")}, {"underlyingName", cvString(R"(MyStructPatchStruct)")}, {"extraNamespace", cvString(R"()")}}).cv_struct_ref());
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
