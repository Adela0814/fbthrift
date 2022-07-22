/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::CustomException>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::CustomException>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

CustomException::CustomException(const CustomException&) = default;
CustomException& CustomException::operator=(const CustomException&) = default;
CustomException::CustomException() {
}


CustomException::~CustomException() {}

CustomException::CustomException(FOLLY_MAYBE_UNUSED CustomException&& other) noexcept :
    __fbthrift_field_message(std::move(other.__fbthrift_field_message)),
    __isset(other.__isset) {
}

CustomException& CustomException::operator=(FOLLY_MAYBE_UNUSED CustomException&& other) noexcept {
    this->__fbthrift_field_message = std::move(other.__fbthrift_field_message);
    __isset = other.__isset;
    return *this;
}


CustomException::CustomException(apache::thrift::FragileConstructor, ::std::string message__arg) :
    __fbthrift_field_message(std::move(message__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void CustomException::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_message = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void CustomException::__fbthrift_clear_terse_fields() {
}

bool CustomException::__fbthrift_is_empty() const {
  return false;
}

bool CustomException::operator==(FOLLY_MAYBE_UNUSED const CustomException& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.message_ref() == rhs.message_ref())) {
    return false;
  }
  return true;
}

bool CustomException::operator<(FOLLY_MAYBE_UNUSED const CustomException& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.message_ref() == rhs.message_ref())) {
    return lhs.message_ref() < rhs.message_ref();
  }
  return false;
}


void swap(FOLLY_MAYBE_UNUSED CustomException& a, FOLLY_MAYBE_UNUSED CustomException& b) {
  using ::std::swap;
  swap(a.message_ref().value(), b.message_ref().value());
  swap(a.__isset, b.__isset);
}

template void CustomException::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t CustomException::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t CustomException::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t CustomException::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void CustomException::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t CustomException::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t CustomException::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t CustomException::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
