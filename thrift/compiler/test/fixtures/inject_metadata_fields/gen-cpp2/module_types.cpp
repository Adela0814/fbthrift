/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/inject_metadata_fields/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/inject_metadata_fields/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/inject_metadata_fields/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Fields>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Fields>;
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

Fields::Fields(const Fields&) = default;
Fields& Fields::operator=(const Fields&) = default;
Fields::Fields(FOLLY_MAYBE_UNUSED Fields&& other) noexcept :
    __fbthrift_field_injected_field(std::move(other.__fbthrift_field_injected_field)),
    __isset(other.__isset) {
}

Fields& Fields::operator=(FOLLY_MAYBE_UNUSED Fields&& other) noexcept {
    this->__fbthrift_field_injected_field = std::move(other.__fbthrift_field_injected_field);
    __isset = other.__isset;
    return *this;
}


Fields::Fields(apache::thrift::FragileConstructor, ::std::string injected_field__arg) :
    __fbthrift_field_injected_field(std::move(injected_field__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void Fields::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_injected_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void Fields::__fbthrift_clear_terse_fields() {
}

bool Fields::__fbthrift_is_empty() const {
  return false;
}

bool Fields::operator==(FOLLY_MAYBE_UNUSED const Fields& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.injected_field_ref() == rhs.injected_field_ref())) {
    return false;
  }
  return true;
}

bool Fields::operator<(FOLLY_MAYBE_UNUSED const Fields& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.injected_field_ref() == rhs.injected_field_ref())) {
    return lhs.injected_field_ref() < rhs.injected_field_ref();
  }
  return false;
}


void swap(FOLLY_MAYBE_UNUSED Fields& a, FOLLY_MAYBE_UNUSED Fields& b) {
  using ::std::swap;
  swap(a.injected_field_ref().value(), b.injected_field_ref().value());
  swap(a.__isset, b.__isset);
}

template void Fields::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Fields::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Fields::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Fields::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Fields::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Fields::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Fields::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Fields::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::FieldsInjectedToEmptyStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::FieldsInjectedToEmptyStruct>;
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

FieldsInjectedToEmptyStruct::FieldsInjectedToEmptyStruct(const FieldsInjectedToEmptyStruct&) = default;
FieldsInjectedToEmptyStruct& FieldsInjectedToEmptyStruct::operator=(const FieldsInjectedToEmptyStruct&) = default;
FieldsInjectedToEmptyStruct::FieldsInjectedToEmptyStruct(FOLLY_MAYBE_UNUSED FieldsInjectedToEmptyStruct&& other) noexcept :
    __fbthrift_field_injected_field(std::move(other.__fbthrift_field_injected_field)),
    __isset(other.__isset) {
}

FieldsInjectedToEmptyStruct& FieldsInjectedToEmptyStruct::operator=(FOLLY_MAYBE_UNUSED FieldsInjectedToEmptyStruct&& other) noexcept {
    this->__fbthrift_field_injected_field = std::move(other.__fbthrift_field_injected_field);
    __isset = other.__isset;
    return *this;
}


FieldsInjectedToEmptyStruct::FieldsInjectedToEmptyStruct(apache::thrift::FragileConstructor, ::std::string injected_field__arg) :
    __fbthrift_field_injected_field(std::move(injected_field__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void FieldsInjectedToEmptyStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_injected_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void FieldsInjectedToEmptyStruct::__fbthrift_clear_terse_fields() {
}

bool FieldsInjectedToEmptyStruct::__fbthrift_is_empty() const {
  return false;
}

bool FieldsInjectedToEmptyStruct::operator==(FOLLY_MAYBE_UNUSED const FieldsInjectedToEmptyStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.injected_field_ref() == rhs.injected_field_ref())) {
    return false;
  }
  return true;
}

bool FieldsInjectedToEmptyStruct::operator<(FOLLY_MAYBE_UNUSED const FieldsInjectedToEmptyStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.injected_field_ref() == rhs.injected_field_ref())) {
    return lhs.injected_field_ref() < rhs.injected_field_ref();
  }
  return false;
}


void swap(FOLLY_MAYBE_UNUSED FieldsInjectedToEmptyStruct& a, FOLLY_MAYBE_UNUSED FieldsInjectedToEmptyStruct& b) {
  using ::std::swap;
  swap(a.injected_field_ref().value(), b.injected_field_ref().value());
  swap(a.__isset, b.__isset);
}

template void FieldsInjectedToEmptyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t FieldsInjectedToEmptyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t FieldsInjectedToEmptyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t FieldsInjectedToEmptyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void FieldsInjectedToEmptyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t FieldsInjectedToEmptyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t FieldsInjectedToEmptyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t FieldsInjectedToEmptyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::FieldsInjectedToStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::FieldsInjectedToStruct>;
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

FieldsInjectedToStruct::FieldsInjectedToStruct(const FieldsInjectedToStruct&) = default;
FieldsInjectedToStruct& FieldsInjectedToStruct::operator=(const FieldsInjectedToStruct&) = default;
FieldsInjectedToStruct::FieldsInjectedToStruct(FOLLY_MAYBE_UNUSED FieldsInjectedToStruct&& other) noexcept :
    __fbthrift_field_string_field(std::move(other.__fbthrift_field_string_field)),
    __fbthrift_field_injected_field(std::move(other.__fbthrift_field_injected_field)),
    __isset(other.__isset) {
}

FieldsInjectedToStruct& FieldsInjectedToStruct::operator=(FOLLY_MAYBE_UNUSED FieldsInjectedToStruct&& other) noexcept {
    this->__fbthrift_field_string_field = std::move(other.__fbthrift_field_string_field);
    this->__fbthrift_field_injected_field = std::move(other.__fbthrift_field_injected_field);
    __isset = other.__isset;
    return *this;
}


FieldsInjectedToStruct::FieldsInjectedToStruct(apache::thrift::FragileConstructor, ::std::string string_field__arg, ::std::string injected_field__arg) :
    __fbthrift_field_string_field(std::move(string_field__arg)),
    __fbthrift_field_injected_field(std::move(injected_field__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
}


void FieldsInjectedToStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_string_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_injected_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void FieldsInjectedToStruct::__fbthrift_clear_terse_fields() {
}

bool FieldsInjectedToStruct::__fbthrift_is_empty() const {
  return false;
}

bool FieldsInjectedToStruct::operator==(FOLLY_MAYBE_UNUSED const FieldsInjectedToStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.string_field_ref() == rhs.string_field_ref())) {
    return false;
  }
  if (!(lhs.injected_field_ref() == rhs.injected_field_ref())) {
    return false;
  }
  return true;
}

bool FieldsInjectedToStruct::operator<(FOLLY_MAYBE_UNUSED const FieldsInjectedToStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.string_field_ref() == rhs.string_field_ref())) {
    return lhs.string_field_ref() < rhs.string_field_ref();
  }
  if (!(lhs.injected_field_ref() == rhs.injected_field_ref())) {
    return lhs.injected_field_ref() < rhs.injected_field_ref();
  }
  return false;
}


void swap(FOLLY_MAYBE_UNUSED FieldsInjectedToStruct& a, FOLLY_MAYBE_UNUSED FieldsInjectedToStruct& b) {
  using ::std::swap;
  swap(a.string_field_ref().value(), b.string_field_ref().value());
  swap(a.injected_field_ref().value(), b.injected_field_ref().value());
  swap(a.__isset, b.__isset);
}

template void FieldsInjectedToStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t FieldsInjectedToStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t FieldsInjectedToStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t FieldsInjectedToStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void FieldsInjectedToStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t FieldsInjectedToStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t FieldsInjectedToStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t FieldsInjectedToStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::FieldsInjectedWithIncludedStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::FieldsInjectedWithIncludedStruct>;
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

FieldsInjectedWithIncludedStruct::FieldsInjectedWithIncludedStruct(const FieldsInjectedWithIncludedStruct&) = default;
FieldsInjectedWithIncludedStruct& FieldsInjectedWithIncludedStruct::operator=(const FieldsInjectedWithIncludedStruct&) = default;
FieldsInjectedWithIncludedStruct::FieldsInjectedWithIncludedStruct(FOLLY_MAYBE_UNUSED FieldsInjectedWithIncludedStruct&& other) noexcept :
    __fbthrift_field_string_field(std::move(other.__fbthrift_field_string_field)),
    __fbthrift_field_injected_field(std::move(other.__fbthrift_field_injected_field)),
    __fbthrift_field_injected_structured_annotation_field(std::move(other.__fbthrift_field_injected_structured_annotation_field)),
    __fbthrift_field_injected_unstructured_annotation_field(std::move(other.__fbthrift_field_injected_unstructured_annotation_field)),
    __isset(other.__isset) {
}

FieldsInjectedWithIncludedStruct& FieldsInjectedWithIncludedStruct::operator=(FOLLY_MAYBE_UNUSED FieldsInjectedWithIncludedStruct&& other) noexcept {
    this->__fbthrift_field_string_field = std::move(other.__fbthrift_field_string_field);
    this->__fbthrift_field_injected_field = std::move(other.__fbthrift_field_injected_field);
    this->__fbthrift_field_injected_structured_annotation_field = std::move(other.__fbthrift_field_injected_structured_annotation_field);
    this->__fbthrift_field_injected_unstructured_annotation_field = std::move(other.__fbthrift_field_injected_unstructured_annotation_field);
    __isset = other.__isset;
    return *this;
}


FieldsInjectedWithIncludedStruct::FieldsInjectedWithIncludedStruct(apache::thrift::FragileConstructor, ::std::string string_field__arg, ::std::string injected_field__arg, ::apache::thrift::detail::boxed_value_ptr<::std::string> injected_structured_annotation_field__arg, ::apache::thrift::detail::boxed_value_ptr<::std::string> injected_unstructured_annotation_field__arg) :
    __fbthrift_field_string_field(std::move(string_field__arg)),
    __fbthrift_field_injected_field(std::move(injected_field__arg)),
    __fbthrift_field_injected_structured_annotation_field(std::move(injected_structured_annotation_field__arg)),
    __fbthrift_field_injected_unstructured_annotation_field(std::move(injected_unstructured_annotation_field__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
}


void FieldsInjectedWithIncludedStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_string_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_injected_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_injected_structured_annotation_field.reset();
  this->__fbthrift_field_injected_unstructured_annotation_field.reset();
  __isset = {};
}

void FieldsInjectedWithIncludedStruct::__fbthrift_clear_terse_fields() {
}

bool FieldsInjectedWithIncludedStruct::__fbthrift_is_empty() const {
  return false;
}

bool FieldsInjectedWithIncludedStruct::operator==(FOLLY_MAYBE_UNUSED const FieldsInjectedWithIncludedStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.string_field_ref() == rhs.string_field_ref())) {
    return false;
  }
  if (!(lhs.injected_field_ref() == rhs.injected_field_ref())) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.injected_structured_annotation_field_ref(), rhs.injected_structured_annotation_field_ref()))) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.injected_unstructured_annotation_field_ref(), rhs.injected_unstructured_annotation_field_ref()))) {
    return false;
  }
  return true;
}

bool FieldsInjectedWithIncludedStruct::operator<(FOLLY_MAYBE_UNUSED const FieldsInjectedWithIncludedStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.string_field_ref() == rhs.string_field_ref())) {
    return lhs.string_field_ref() < rhs.string_field_ref();
  }
  if (!(lhs.injected_field_ref() == rhs.injected_field_ref())) {
    return lhs.injected_field_ref() < rhs.injected_field_ref();
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.injected_structured_annotation_field_ref(), rhs.injected_structured_annotation_field_ref()))) {
    return ::apache::thrift::detail::pointer_less(lhs.injected_structured_annotation_field_ref(), rhs.injected_structured_annotation_field_ref());
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.injected_unstructured_annotation_field_ref(), rhs.injected_unstructured_annotation_field_ref()))) {
    return ::apache::thrift::detail::pointer_less(lhs.injected_unstructured_annotation_field_ref(), rhs.injected_unstructured_annotation_field_ref());
  }
  return false;
}


void swap(FOLLY_MAYBE_UNUSED FieldsInjectedWithIncludedStruct& a, FOLLY_MAYBE_UNUSED FieldsInjectedWithIncludedStruct& b) {
  using ::std::swap;
  swap(a.string_field_ref().value(), b.string_field_ref().value());
  swap(a.injected_field_ref().value(), b.injected_field_ref().value());
  swap(a.__fbthrift_field_injected_structured_annotation_field, b.__fbthrift_field_injected_structured_annotation_field);
  swap(a.__fbthrift_field_injected_unstructured_annotation_field, b.__fbthrift_field_injected_unstructured_annotation_field);
  swap(a.__isset, b.__isset);
}

template void FieldsInjectedWithIncludedStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t FieldsInjectedWithIncludedStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t FieldsInjectedWithIncludedStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t FieldsInjectedWithIncludedStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void FieldsInjectedWithIncludedStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t FieldsInjectedWithIncludedStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t FieldsInjectedWithIncludedStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t FieldsInjectedWithIncludedStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
