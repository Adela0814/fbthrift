/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/isset_bitpacking/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/isset_bitpacking/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/isset_bitpacking/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Foo>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Foo>;
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

Foo::Foo(const Foo&) = default;
Foo& Foo::operator=(const Foo&) = default;
Foo::Foo(Foo&& other) noexcept  :
    __fbthrift_field_field1(std::move(other.__fbthrift_field_field1)),
    __fbthrift_field_field2(std::move(other.__fbthrift_field_field2)),
    __fbthrift_field_field3(std::move(other.__fbthrift_field_field3)),
    __fbthrift_field_field4(std::move(other.__fbthrift_field_field4)),
    __isset(other.__isset) {
}

Foo& Foo::operator=(FOLLY_MAYBE_UNUSED Foo&& other) noexcept {
    this->__fbthrift_field_field1 = std::move(other.__fbthrift_field_field1);
    this->__fbthrift_field_field2 = std::move(other.__fbthrift_field_field2);
    this->__fbthrift_field_field3 = std::move(other.__fbthrift_field_field3);
    this->__fbthrift_field_field4 = std::move(other.__fbthrift_field_field4);
    __isset = other.__isset;
    return *this;
}


Foo::Foo(apache::thrift::FragileConstructor, ::std::int32_t field1__arg, ::std::int32_t field2__arg, ::std::string field3__arg, double field4__arg) :
    __fbthrift_field_field1(std::move(field1__arg)),
    __fbthrift_field_field2(std::move(field2__arg)),
    __fbthrift_field_field3(std::move(field3__arg)),
    __fbthrift_field_field4(std::move(field4__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
}


void Foo::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_field1 = ::std::int32_t();
  this->__fbthrift_field_field2 = ::std::int32_t();
  this->__fbthrift_field_field3 = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_field4 = double();
  __isset = {};
}

bool Foo::__fbthrift_is_empty() const {
  return !(this->__isset.get(0)) &&
 !(this->__isset.get(1)) &&
 !(this->__isset.get(2)) &&
 !(this->__isset.get(3));
}

bool Foo::operator==(const Foo& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.field1_ref() == rhs.field1_ref())) {
    return false;
  }
  if (!(lhs.field2_ref() == rhs.field2_ref())) {
    return false;
  }
  if (!(lhs.field3_ref() == rhs.field3_ref())) {
    return false;
  }
  if (!(lhs.field4_ref() == rhs.field4_ref())) {
    return false;
  }
  return true;
}

bool Foo::operator<(const Foo& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.field1_ref() == rhs.field1_ref())) {
    return lhs.field1_ref() < rhs.field1_ref();
  }
  if (!(lhs.field2_ref() == rhs.field2_ref())) {
    return lhs.field2_ref() < rhs.field2_ref();
  }
  if (!(lhs.field3_ref() == rhs.field3_ref())) {
    return lhs.field3_ref() < rhs.field3_ref();
  }
  if (!(lhs.field4_ref() == rhs.field4_ref())) {
    return lhs.field4_ref() < rhs.field4_ref();
  }
  return false;
}


void swap(Foo& a, Foo& b) {
  using ::std::swap;
  swap(a.field1_ref().value_unchecked(), b.field1_ref().value_unchecked());
  swap(a.field2_ref().value_unchecked(), b.field2_ref().value_unchecked());
  swap(a.field3_ref().value_unchecked(), b.field3_ref().value_unchecked());
  swap(a.field4_ref().value_unchecked(), b.field4_ref().value_unchecked());
  swap(a.__isset, b.__isset);
}

template void Foo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Foo::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Foo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Foo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Foo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Foo::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Foo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Foo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
