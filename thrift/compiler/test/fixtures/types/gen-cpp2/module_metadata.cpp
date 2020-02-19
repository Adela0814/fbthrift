/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_metadata.h"

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

void EnumMetadata<::apache::thrift::fixtures::types::has_bitwise_ops>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.has_bitwise_ops", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "module.has_bitwise_ops";
  for (const auto& p : ::apache::thrift::fixtures::types::_has_bitwise_ops_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}
void EnumMetadata<::apache::thrift::fixtures::types::is_unscoped>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.is_unscoped", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "module.is_unscoped";
  for (const auto& p : ::apache::thrift::fixtures::types::_is_unscoped_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}
void EnumMetadata<::apache::thrift::fixtures::types::MyForwardRefEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.MyForwardRefEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "module.MyForwardRefEnum";
  for (const auto& p : ::apache::thrift::fixtures::types::_MyForwardRefEnum_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}
void EnumMetadata<::apache::thrift::fixtures::types::MyEnumA>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("module.MyEnumA", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "module.MyEnumA";
  for (const auto& p : ::apache::thrift::fixtures::types::_MyEnumA_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}

void StructMetadata<::apache::thrift::fixtures::types::decorated_struct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.decorated_struct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_decorated_struct = res.first->second;
  module_decorated_struct.name = "module.decorated_struct";
  module_decorated_struct.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_decorated_struct_fields[] = {
    {1, "field", false, std::make_unique<Primitive>(ThriftPrimitiveType::STRING)},
  };
  for (const auto& f : module_decorated_struct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_decorated_struct.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::ContainerStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.ContainerStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_ContainerStruct = res.first->second;
  module_ContainerStruct.name = "module.ContainerStruct";
  module_ContainerStruct.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_ContainerStruct_fields[] = {
    {12, "fieldA", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::I32))},
    {2, "fieldB", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::I32))},
    {3, "fieldC", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::I32))},
    {4, "fieldD", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::I32))},
    {5, "fieldE", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::I32))},
    {6, "fieldF", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::I32))},
    {7, "fieldG", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::I32), std::make_unique<Primitive>(ThriftPrimitiveType::STRING))},
    {8, "fieldH", false, std::make_unique<Typedef>("include.SomeMap", std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::I32), std::make_unique<Primitive>(ThriftPrimitiveType::STRING)))},
  };
  for (const auto& f : module_ContainerStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_ContainerStruct.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::CppTypeStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.CppTypeStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_CppTypeStruct = res.first->second;
  module_CppTypeStruct.name = "module.CppTypeStruct";
  module_CppTypeStruct.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_CppTypeStruct_fields[] = {
    {1, "fieldA", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::I32))},
  };
  for (const auto& f : module_CppTypeStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_CppTypeStruct.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::VirtualStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.VirtualStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_VirtualStruct = res.first->second;
  module_VirtualStruct.name = "module.VirtualStruct";
  module_VirtualStruct.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_VirtualStruct_fields[] = {
    {1, "MyIntField", false, std::make_unique<Primitive>(ThriftPrimitiveType::I64)},
  };
  for (const auto& f : module_VirtualStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_VirtualStruct.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::MyStructWithForwardRefEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.MyStructWithForwardRefEnum", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStructWithForwardRefEnum = res.first->second;
  module_MyStructWithForwardRefEnum.name = "module.MyStructWithForwardRefEnum";
  module_MyStructWithForwardRefEnum.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_MyStructWithForwardRefEnum_fields[] = {
    {1, "a", false, std::make_unique<Typedef>("module.MyForwardRefEnum", std::make_unique<Enum< ::apache::thrift::fixtures::types::MyForwardRefEnum>>("module.MyForwardRefEnum", metadata))},
    {2, "b", false, std::make_unique<Typedef>("module.MyForwardRefEnum", std::make_unique<Enum< ::apache::thrift::fixtures::types::MyForwardRefEnum>>("module.MyForwardRefEnum", metadata))},
  };
  for (const auto& f : module_MyStructWithForwardRefEnum_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_MyStructWithForwardRefEnum.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::TrivialNumeric>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.TrivialNumeric", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_TrivialNumeric = res.first->second;
  module_TrivialNumeric.name = "module.TrivialNumeric";
  module_TrivialNumeric.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_TrivialNumeric_fields[] = {
    {1, "a", false, std::make_unique<Primitive>(ThriftPrimitiveType::I32)},
    {2, "b", false, std::make_unique<Primitive>(ThriftPrimitiveType::BOOL)},
  };
  for (const auto& f : module_TrivialNumeric_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_TrivialNumeric.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::TrivialNestedWithDefault>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.TrivialNestedWithDefault", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_TrivialNestedWithDefault = res.first->second;
  module_TrivialNestedWithDefault.name = "module.TrivialNestedWithDefault";
  module_TrivialNestedWithDefault.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_TrivialNestedWithDefault_fields[] = {
    {1, "z", false, std::make_unique<Primitive>(ThriftPrimitiveType::I32)},
    {2, "n", false, std::make_unique<Struct< ::apache::thrift::fixtures::types::TrivialNumeric>>("module.TrivialNumeric", metadata)},
  };
  for (const auto& f : module_TrivialNestedWithDefault_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_TrivialNestedWithDefault.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::ComplexString>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.ComplexString", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_ComplexString = res.first->second;
  module_ComplexString.name = "module.ComplexString";
  module_ComplexString.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_ComplexString_fields[] = {
    {1, "a", false, std::make_unique<Primitive>(ThriftPrimitiveType::STRING)},
    {2, "b", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::STRING), std::make_unique<Primitive>(ThriftPrimitiveType::I32))},
  };
  for (const auto& f : module_ComplexString_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_ComplexString.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::ComplexNestedWithDefault>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.ComplexNestedWithDefault", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_ComplexNestedWithDefault = res.first->second;
  module_ComplexNestedWithDefault.name = "module.ComplexNestedWithDefault";
  module_ComplexNestedWithDefault.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_ComplexNestedWithDefault_fields[] = {
    {1, "z", false, std::make_unique<Primitive>(ThriftPrimitiveType::STRING)},
    {2, "n", false, std::make_unique<Struct< ::apache::thrift::fixtures::types::ComplexString>>("module.ComplexString", metadata)},
  };
  for (const auto& f : module_ComplexNestedWithDefault_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_ComplexNestedWithDefault.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::MinPadding>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.MinPadding", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MinPadding = res.first->second;
  module_MinPadding.name = "module.MinPadding";
  module_MinPadding.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_MinPadding_fields[] = {
    {1, "small", false, std::make_unique<Primitive>(ThriftPrimitiveType::BYTE)},
    {2, "big", false, std::make_unique<Primitive>(ThriftPrimitiveType::I64)},
    {3, "medium", false, std::make_unique<Primitive>(ThriftPrimitiveType::I16)},
    {4, "biggish", false, std::make_unique<Primitive>(ThriftPrimitiveType::I32)},
    {5, "tiny", false, std::make_unique<Primitive>(ThriftPrimitiveType::BYTE)},
  };
  for (const auto& f : module_MinPadding_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_MinPadding.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::MyDataItem>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.MyDataItem", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyDataItem = res.first->second;
  module_MyDataItem.name = "module.MyDataItem";
  module_MyDataItem.is_union = false;
}
void StructMetadata<::apache::thrift::fixtures::types::MyStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.MyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStruct = res.first->second;
  module_MyStruct.name = "module.MyStruct";
  module_MyStruct.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_MyStruct_fields[] = {
    {1, "MyIntField", false, std::make_unique<Primitive>(ThriftPrimitiveType::I64)},
    {2, "MyStringField", false, std::make_unique<Primitive>(ThriftPrimitiveType::STRING)},
    {3, "majorVer", false, std::make_unique<Primitive>(ThriftPrimitiveType::I64)},
    {4, "data", false, std::make_unique<Typedef>("module.MyDataItem", std::make_unique<Struct< ::apache::thrift::fixtures::types::MyDataItem>>("module.MyDataItem", metadata))},
  };
  for (const auto& f : module_MyStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_MyStruct.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::Renaming>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.Renaming", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Renaming = res.first->second;
  module_Renaming.name = "module.Renaming";
  module_Renaming.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_Renaming_fields[] = {
    {1, "foo", false, std::make_unique<Primitive>(ThriftPrimitiveType::I64)},
  };
  for (const auto& f : module_Renaming_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_Renaming.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::AnnotatedTypes>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.AnnotatedTypes", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_AnnotatedTypes = res.first->second;
  module_AnnotatedTypes.name = "module.AnnotatedTypes";
  module_AnnotatedTypes.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_AnnotatedTypes_fields[] = {
    {1, "binary_field", false, std::make_unique<Typedef>("module.TBinary", std::make_unique<Typedef>("module.TBinary", std::make_unique<Primitive>(ThriftPrimitiveType::BINARY)))},
    {2, "list_field", false, std::make_unique<Typedef>("include.SomeListOfTypeMap", std::make_unique<Typedef>("include.SomeListOfTypeMap", std::make_unique<List>(std::make_unique<Typedef>("include.SomeMap", std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::I32), std::make_unique<Primitive>(ThriftPrimitiveType::STRING))))))},
  };
  for (const auto& f : module_AnnotatedTypes_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_AnnotatedTypes.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::ForwardUsageStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.ForwardUsageStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_ForwardUsageStruct = res.first->second;
  module_ForwardUsageStruct.name = "module.ForwardUsageStruct";
  module_ForwardUsageStruct.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_ForwardUsageStruct_fields[] = {
    {1, "foo", true, std::make_unique<Struct< ::apache::thrift::fixtures::types::ForwardUsageRoot>>("module.ForwardUsageRoot", metadata)},
  };
  for (const auto& f : module_ForwardUsageStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_ForwardUsageStruct.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::ForwardUsageRoot>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.ForwardUsageRoot", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_ForwardUsageRoot = res.first->second;
  module_ForwardUsageRoot.name = "module.ForwardUsageRoot";
  module_ForwardUsageRoot.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_ForwardUsageRoot_fields[] = {
    {1, "ForwardUsageStruct", true, std::make_unique<Typedef>("module.ForwardUsageStruct", std::make_unique<Struct< ::apache::thrift::fixtures::types::ForwardUsageStruct>>("module.ForwardUsageStruct", metadata))},
    {2, "ForwardUsageByRef", true, std::make_unique<Typedef>("module.ForwardUsageByRef", std::make_unique<Struct< ::apache::thrift::fixtures::types::ForwardUsageByRef>>("module.ForwardUsageByRef", metadata))},
  };
  for (const auto& f : module_ForwardUsageRoot_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_ForwardUsageRoot.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::ForwardUsageByRef>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.ForwardUsageByRef", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_ForwardUsageByRef = res.first->second;
  module_ForwardUsageByRef.name = "module.ForwardUsageByRef";
  module_ForwardUsageByRef.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_ForwardUsageByRef_fields[] = {
    {1, "foo", true, std::make_unique<Struct< ::apache::thrift::fixtures::types::ForwardUsageRoot>>("module.ForwardUsageRoot", metadata)},
  };
  for (const auto& f : module_ForwardUsageByRef_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_ForwardUsageByRef.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::NoexceptMoveEmpty>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.NoexceptMoveEmpty", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_NoexceptMoveEmpty = res.first->second;
  module_NoexceptMoveEmpty.name = "module.NoexceptMoveEmpty";
  module_NoexceptMoveEmpty.is_union = false;
}
void StructMetadata<::apache::thrift::fixtures::types::NoexceptMoveSimpleStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.NoexceptMoveSimpleStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_NoexceptMoveSimpleStruct = res.first->second;
  module_NoexceptMoveSimpleStruct.name = "module.NoexceptMoveSimpleStruct";
  module_NoexceptMoveSimpleStruct.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_NoexceptMoveSimpleStruct_fields[] = {
    {1, "boolField", false, std::make_unique<Primitive>(ThriftPrimitiveType::I64)},
  };
  for (const auto& f : module_NoexceptMoveSimpleStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_NoexceptMoveSimpleStruct.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::NoexceptMoveComplexStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.NoexceptMoveComplexStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_NoexceptMoveComplexStruct = res.first->second;
  module_NoexceptMoveComplexStruct.name = "module.NoexceptMoveComplexStruct";
  module_NoexceptMoveComplexStruct.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_NoexceptMoveComplexStruct_fields[] = {
    {1, "MyBoolField", false, std::make_unique<Primitive>(ThriftPrimitiveType::BOOL)},
    {2, "MyIntField", false, std::make_unique<Primitive>(ThriftPrimitiveType::I64)},
    {3, "MyStringField", false, std::make_unique<Primitive>(ThriftPrimitiveType::STRING)},
    {4, "MyStringField2", false, std::make_unique<Primitive>(ThriftPrimitiveType::STRING)},
    {5, "MyBinaryField", false, std::make_unique<Primitive>(ThriftPrimitiveType::BINARY)},
    {6, "MyBinaryField2", true, std::make_unique<Primitive>(ThriftPrimitiveType::BINARY)},
    {7, "MyBinaryField3", false, std::make_unique<Primitive>(ThriftPrimitiveType::BINARY)},
    {8, "MyBinaryListField4", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::BINARY))},
    {9, "MyMapEnumAndInt", false, std::make_unique<Map>(std::make_unique<Enum< ::apache::thrift::fixtures::types::MyEnumA>>("module.MyEnumA", metadata), std::make_unique<Primitive>(ThriftPrimitiveType::STRING))},
  };
  for (const auto& f : module_NoexceptMoveComplexStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_NoexceptMoveComplexStruct.fields.push_back(std::move(field));
  }
}
void StructMetadata<::apache::thrift::fixtures::types::NoExceptMoveUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.NoExceptMoveUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_NoExceptMoveUnion = res.first->second;
  module_NoExceptMoveUnion.name = "module.NoExceptMoveUnion";
  module_NoExceptMoveUnion.is_union = true;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_NoExceptMoveUnion_fields[] = {
    {1, "string_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::STRING)},
    {2, "i32_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::I32)},
  };
  for (const auto& f : module_NoExceptMoveUnion_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_NoExceptMoveUnion.fields.push_back(std::move(field));
  }
}

void ServiceMetadata<::apache::thrift::fixtures::types::SomeServiceSvIf>::gen_bounce_map(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "bounce_map";
  auto func_ret_type = std::make_unique<Typedef>("include.SomeMap", std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::I32), std::make_unique<Primitive>(ThriftPrimitiveType::STRING)));
  func_ret_type->initialize(func.returnType);
  ::apache::thrift::metadata::ThriftField module_SomeService_bounce_map_m_1;
  module_SomeService_bounce_map_m_1.id = 1;
  module_SomeService_bounce_map_m_1.name = "m";
  module_SomeService_bounce_map_m_1.is_optional = false;
  auto module_SomeService_bounce_map_m_1_type = std::make_unique<Typedef>("include.SomeMap", std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::I32), std::make_unique<Primitive>(ThriftPrimitiveType::STRING)));
  module_SomeService_bounce_map_m_1_type->initialize(module_SomeService_bounce_map_m_1.type);
  func.arguments.push_back(std::move(module_SomeService_bounce_map_m_1));
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::fixtures::types::SomeServiceSvIf>::gen_binary_keyed_map(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "binary_keyed_map";
  auto func_ret_type = std::make_unique<Map>(std::make_unique<Typedef>("module.TBinary", std::make_unique<Primitive>(ThriftPrimitiveType::BINARY)), std::make_unique<Primitive>(ThriftPrimitiveType::I64));
  func_ret_type->initialize(func.returnType);
  ::apache::thrift::metadata::ThriftField module_SomeService_binary_keyed_map_r_1;
  module_SomeService_binary_keyed_map_r_1.id = 1;
  module_SomeService_binary_keyed_map_r_1.name = "r";
  module_SomeService_binary_keyed_map_r_1.is_optional = false;
  auto module_SomeService_binary_keyed_map_r_1_type = std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::I64));
  module_SomeService_binary_keyed_map_r_1_type->initialize(module_SomeService_binary_keyed_map_r_1.type);
  func.arguments.push_back(std::move(module_SomeService_binary_keyed_map_r_1));
  service.functions.push_back(std::move(func));
}

void ServiceMetadata<::apache::thrift::fixtures::types::SomeServiceSvIf>::gen(ThriftMetadata& metadata, ThriftServiceContext& context) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_SomeService;
  module_SomeService.name = "module.SomeService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::apache::thrift::fixtures::types::SomeServiceSvIf>::gen_bounce_map,
    ServiceMetadata<::apache::thrift::fixtures::types::SomeServiceSvIf>::gen_binary_keyed_map,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_SomeService);
  }
  context.set_service_info(std::move(module_SomeService));
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.set_name("module");
  context.set_module(std::move(module));
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
