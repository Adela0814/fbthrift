/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_metadata.h"

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


void StructMetadata<::cpp2::InitialResponse>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.InitialResponse", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_InitialResponse = res.first->second;
  module_InitialResponse.name = "module.InitialResponse";
  module_InitialResponse.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_InitialResponse_fields[] = {
    {1, "content", false, std::make_unique<Primitive>(ThriftPrimitiveType::STRING)},
  };
  for (const auto& f : module_InitialResponse_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_InitialResponse.fields.push_back(std::move(field));
  }
}
void StructMetadata<::cpp2::FinalResponse>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.FinalResponse", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_FinalResponse = res.first->second;
  module_FinalResponse.name = "module.FinalResponse";
  module_FinalResponse.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_FinalResponse_fields[] = {
    {1, "content", false, std::make_unique<Primitive>(ThriftPrimitiveType::STRING)},
  };
  for (const auto& f : module_FinalResponse_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_FinalResponse.fields.push_back(std::move(field));
  }
}
void StructMetadata<::cpp2::SinkPayload>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.SinkPayload", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SinkPayload = res.first->second;
  module_SinkPayload.name = "module.SinkPayload";
  module_SinkPayload.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_SinkPayload_fields[] = {
    {1, "content", false, std::make_unique<Primitive>(ThriftPrimitiveType::STRING)},
  };
  for (const auto& f : module_SinkPayload_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_SinkPayload.fields.push_back(std::move(field));
  }
}
void StructMetadata<::cpp2::CompatibleWithKeywordSink>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.CompatibleWithKeywordSink", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_CompatibleWithKeywordSink = res.first->second;
  module_CompatibleWithKeywordSink.name = "module.CompatibleWithKeywordSink";
  module_CompatibleWithKeywordSink.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_CompatibleWithKeywordSink_fields[] = {
    {1, "sink", false, std::make_unique<Primitive>(ThriftPrimitiveType::STRING)},
  };
  for (const auto& f : module_CompatibleWithKeywordSink_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_CompatibleWithKeywordSink.fields.push_back(std::move(field));
  }
}
void StructMetadata<::cpp2::InitialException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.InitialException", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_InitialException = res.first->second;
  module_InitialException.name = "module.InitialException";
  module_InitialException.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_InitialException_fields[] = {
    {1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::STRING)},
  };
  for (const auto& f : module_InitialException_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_InitialException.fields.push_back(std::move(field));
  }
}
void StructMetadata<::cpp2::SinkException1>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.SinkException1", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SinkException1 = res.first->second;
  module_SinkException1.name = "module.SinkException1";
  module_SinkException1.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_SinkException1_fields[] = {
    {1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::STRING)},
  };
  for (const auto& f : module_SinkException1_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_SinkException1.fields.push_back(std::move(field));
  }
}
void StructMetadata<::cpp2::SinkException2>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.SinkException2", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SinkException2 = res.first->second;
  module_SinkException2.name = "module.SinkException2";
  module_SinkException2.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_SinkException2_fields[] = {
    {1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::I64)},
  };
  for (const auto& f : module_SinkException2_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_SinkException2.fields.push_back(std::move(field));
  }
}

void ExceptionMetadata<::cpp2::InitialException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions.emplace("module.InitialException", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_InitialException = res.first->second;
  module_InitialException.name = "module.InitialException";
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_InitialException_fields[] = {
    {1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::STRING)},
  };
  for (const auto& f : module_InitialException_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_InitialException.fields.push_back(std::move(field));
  }
}
void ExceptionMetadata<::cpp2::SinkException1>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions.emplace("module.SinkException1", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_SinkException1 = res.first->second;
  module_SinkException1.name = "module.SinkException1";
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_SinkException1_fields[] = {
    {1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::STRING)},
  };
  for (const auto& f : module_SinkException1_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_SinkException1.fields.push_back(std::move(field));
  }
}
void ExceptionMetadata<::cpp2::SinkException2>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions.emplace("module.SinkException2", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_SinkException2 = res.first->second;
  module_SinkException2.name = "module.SinkException2";
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_SinkException2_fields[] = {
    {1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::I64)},
  };
  for (const auto& f : module_SinkException2_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    module_SinkException2.fields.push_back(std::move(field));
  }
}
void ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_method(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "method";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct< ::cpp2::SinkPayload>>("module.SinkPayload", metadata), std::make_unique<Struct< ::cpp2::FinalResponse>>("module.FinalResponse", metadata));
  func_ret_type->initialize(func.returnType);
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodAndReponse(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "methodAndReponse";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct< ::cpp2::SinkPayload>>("module.SinkPayload", metadata), std::make_unique<Struct< ::cpp2::FinalResponse>>("module.FinalResponse", metadata), std::make_unique<Struct< ::cpp2::InitialResponse>>("module.InitialResponse", metadata));
  func_ret_type->initialize(func.returnType);
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodThrow(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "methodThrow";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct< ::cpp2::SinkPayload>>("module.SinkPayload", metadata), std::make_unique<Struct< ::cpp2::FinalResponse>>("module.FinalResponse", metadata));
  func_ret_type->initialize(func.returnType);
  ::apache::thrift::metadata::ThriftField module_SinkService_methodThrow_ex_1;
  module_SinkService_methodThrow_ex_1.id = 1;
  module_SinkService_methodThrow_ex_1.name = "ex";
  module_SinkService_methodThrow_ex_1.is_optional = false;
  auto module_SinkService_methodThrow_ex_1_type = std::make_unique<Struct< ::cpp2::InitialException>>("module.InitialException", metadata);
  module_SinkService_methodThrow_ex_1_type->initialize(module_SinkService_methodThrow_ex_1.type);
  func.exceptions.push_back(std::move(module_SinkService_methodThrow_ex_1));
  ExceptionMetadata< ::cpp2::InitialException>::gen(metadata);
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodSinkThrow(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "methodSinkThrow";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct< ::cpp2::SinkPayload>>("module.SinkPayload", metadata), std::make_unique<Struct< ::cpp2::FinalResponse>>("module.FinalResponse", metadata));
  func_ret_type->initialize(func.returnType);
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodFinalThrow(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "methodFinalThrow";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct< ::cpp2::SinkPayload>>("module.SinkPayload", metadata), std::make_unique<Struct< ::cpp2::FinalResponse>>("module.FinalResponse", metadata));
  func_ret_type->initialize(func.returnType);
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodBothThrow(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "methodBothThrow";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct< ::cpp2::SinkPayload>>("module.SinkPayload", metadata), std::make_unique<Struct< ::cpp2::FinalResponse>>("module.FinalResponse", metadata));
  func_ret_type->initialize(func.returnType);
  service.functions.push_back(std::move(func));
}

void ServiceMetadata<::cpp2::SinkServiceSvIf>::gen(ThriftMetadata& metadata, ThriftServiceContext& context) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_SinkService;
  module_SinkService.name = "module.SinkService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_method,
    ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodAndReponse,
    ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodThrow,
    ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodSinkThrow,
    ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodFinalThrow,
    ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodBothThrow,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_SinkService);
  }
  context.set_service_info(std::move(module_SinkService));
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.set_name("module");
  context.set_module(std::move(module));
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
