/**
 * Autogenerated by Thrift for src/terse_writes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/lazy_deserialization/gen-cpp2/terse_writes_types.h"
#include "thrift/compiler/test/fixtures/lazy_deserialization/gen-cpp2/terse_writes_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/lazy_deserialization/gen-cpp2/terse_writes_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::TerseFoo>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::TerseFoo>;
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

namespace apache { namespace thrift { namespace test {

TerseFoo::TerseFoo(const TerseFoo&) = default;
TerseFoo& TerseFoo::operator=(const TerseFoo&) = default;
TerseFoo::TerseFoo(TerseFoo&& other) noexcept  :
    __fbthrift_field_field1(std::move(other.__fbthrift_field_field1)),
    __fbthrift_field_field2(std::move(other.__fbthrift_field_field2)),
    __fbthrift_field_field3(std::move(other.__fbthrift_field_field3)),
    __fbthrift_field_field4(std::move(other.__fbthrift_field_field4)),
    __isset(other.__isset) {
}

TerseFoo& TerseFoo::operator=(FOLLY_MAYBE_UNUSED TerseFoo&& other) noexcept {
    this->__fbthrift_field_field1 = std::move(other.__fbthrift_field_field1);
    this->__fbthrift_field_field2 = std::move(other.__fbthrift_field_field2);
    this->__fbthrift_field_field3 = std::move(other.__fbthrift_field_field3);
    this->__fbthrift_field_field4 = std::move(other.__fbthrift_field_field4);
    __isset = other.__isset;
    return *this;
}


TerseFoo::TerseFoo(apache::thrift::FragileConstructor, ::std::vector<double> field1__arg, ::std::vector<::std::int32_t> field2__arg, ::std::vector<double> field3__arg, ::std::vector<::std::int32_t> field4__arg) :
    __fbthrift_field_field1(std::move(field1__arg)),
    __fbthrift_field_field2(std::move(field2__arg)),
    __fbthrift_field_field3(std::move(field3__arg)),
    __fbthrift_field_field4(std::move(field4__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
}


void TerseFoo::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_field1.clear();
  this->__fbthrift_field_field2.clear();
  this->__fbthrift_field_field3.clear();
  this->__fbthrift_field_field4.clear();
  __isset = {};
}

bool TerseFoo::__fbthrift_is_empty() const {
  return !(!this->__fbthrift_field_field1.empty()) &&
 !(!this->__fbthrift_field_field2.empty()) &&
 !(!this->__fbthrift_field_field3.empty()) &&
 !(!this->__fbthrift_field_field4.empty());
}

bool TerseFoo::operator==(const TerseFoo& rhs) const {
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

bool TerseFoo::operator<(const TerseFoo& rhs) const {
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

const ::std::vector<double>& TerseFoo::get_field1() const& {
  return __fbthrift_field_field1;
}

::std::vector<double> TerseFoo::get_field1() && {
  return std::move(__fbthrift_field_field1);
}

const ::std::vector<::std::int32_t>& TerseFoo::get_field2() const& {
  return __fbthrift_field_field2;
}

::std::vector<::std::int32_t> TerseFoo::get_field2() && {
  return std::move(__fbthrift_field_field2);
}

const ::std::vector<double>& TerseFoo::get_field3() const& {
  return __fbthrift_field_field3;
}

::std::vector<double> TerseFoo::get_field3() && {
  return std::move(__fbthrift_field_field3);
}

const ::std::vector<::std::int32_t>& TerseFoo::get_field4() const& {
  return __fbthrift_field_field4;
}

::std::vector<::std::int32_t> TerseFoo::get_field4() && {
  return std::move(__fbthrift_field_field4);
}


void swap(TerseFoo& a, TerseFoo& b) {
  using ::std::swap;
  swap(a.field1_ref().value(), b.field1_ref().value());
  swap(a.field2_ref().value(), b.field2_ref().value());
  swap(a.field3_ref().value(), b.field3_ref().value());
  swap(a.field4_ref().value(), b.field4_ref().value());
  swap(a.__isset, b.__isset);
}

template void TerseFoo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t TerseFoo::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t TerseFoo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t TerseFoo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void TerseFoo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t TerseFoo::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t TerseFoo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t TerseFoo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



}}} // apache::thrift::test

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::TerseLazyFoo>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::TerseLazyFoo>;
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

namespace apache { namespace thrift { namespace test {

TerseLazyFoo::TerseLazyFoo(const TerseLazyFoo& srcObj) {
  const auto relaxed = std::memory_order_relaxed;
  auto lock = folly::make_shared_lock(srcObj.__fbthrift_deserializationMutex_);
  __fbthrift_protocol_ = srcObj.__fbthrift_protocol_;
  __fbthrift_field_field1 = srcObj.__fbthrift_field_field1;
  __isset.set(0,srcObj.__isset.get(0));
  __fbthrift_field_field2 = srcObj.__fbthrift_field_field2;
  __isset.set(1,srcObj.__isset.get(1));
  {
    const auto isDeserialized = srcObj.__fbthrift_isDeserialized_.field3.load(relaxed);
    __fbthrift_isDeserialized_.field3.store(isDeserialized, relaxed);
    __fbthrift_serializedData_.field3 = srcObj.__fbthrift_serializedData_.field3;
  }
  __fbthrift_field_field3 = srcObj.__fbthrift_field_field3;
  __isset.set(2,srcObj.__isset.get(2));
  {
    const auto isDeserialized = srcObj.__fbthrift_isDeserialized_.field4.load(relaxed);
    __fbthrift_isDeserialized_.field4.store(isDeserialized, relaxed);
    __fbthrift_serializedData_.field4 = srcObj.__fbthrift_serializedData_.field4;
  }
  __fbthrift_field_field4 = srcObj.__fbthrift_field_field4;
  __isset.set(3,srcObj.__isset.get(3));
}

TerseLazyFoo& TerseLazyFoo::operator=(const TerseLazyFoo& src) {
  TerseLazyFoo tmp(src);
  swap(*this, tmp);
  return *this;
}

TerseLazyFoo::TerseLazyFoo(TerseLazyFoo&& other) noexcept  :
    __fbthrift_field_field1(std::move(other.__fbthrift_field_field1)),
    __fbthrift_field_field2(std::move(other.__fbthrift_field_field2)),
    __fbthrift_field_field3(std::move(other.__fbthrift_field_field3)),
    __fbthrift_field_field4(std::move(other.__fbthrift_field_field4)),
    __isset(other.__isset),
    __fbthrift_serializedData_(std::move(other.__fbthrift_serializedData_)),
    __fbthrift_protocol_(other.__fbthrift_protocol_) {
  const auto relaxed = std::memory_order_relaxed;
  {
    const auto isDeserialized = other.__fbthrift_isDeserialized_.field3.load(relaxed);
    __fbthrift_isDeserialized_.field3.store(isDeserialized, relaxed);
    other.__fbthrift_isDeserialized_.field3.store(isDeserialized | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED, relaxed);
  }
  {
    const auto isDeserialized = other.__fbthrift_isDeserialized_.field4.load(relaxed);
    __fbthrift_isDeserialized_.field4.store(isDeserialized, relaxed);
    other.__fbthrift_isDeserialized_.field4.store(isDeserialized | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED, relaxed);
  }
}

TerseLazyFoo& TerseLazyFoo::operator=(FOLLY_MAYBE_UNUSED TerseLazyFoo&& other) noexcept {
    const auto relaxed = std::memory_order_relaxed;
    __fbthrift_protocol_ = other.__fbthrift_protocol_;
    __fbthrift_serializedData_ = std::move(other.__fbthrift_serializedData_);
    this->__fbthrift_field_field1 = std::move(other.__fbthrift_field_field1);
    this->__fbthrift_field_field2 = std::move(other.__fbthrift_field_field2);
    this->__fbthrift_field_field3 = std::move(other.__fbthrift_field_field3);
    {
      const auto isDeserialized = other.__fbthrift_isDeserialized_.field3.load(relaxed);
      __fbthrift_isDeserialized_.field3.store(isDeserialized, relaxed);
      other.__fbthrift_isDeserialized_.field3.store(isDeserialized | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED, relaxed);
    }
    this->__fbthrift_field_field4 = std::move(other.__fbthrift_field_field4);
    {
      const auto isDeserialized = other.__fbthrift_isDeserialized_.field4.load(relaxed);
      __fbthrift_isDeserialized_.field4.store(isDeserialized, relaxed);
      other.__fbthrift_isDeserialized_.field4.store(isDeserialized | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED, relaxed);
    }
    __isset = other.__isset;
    return *this;
}


TerseLazyFoo::TerseLazyFoo(apache::thrift::FragileConstructor, ::std::vector<double> field1__arg, ::std::vector<::std::int32_t> field2__arg, ::std::vector<double> field3__arg, ::std::vector<::std::int32_t> field4__arg) :
    __fbthrift_field_field1(std::move(field1__arg)),
    __fbthrift_field_field2(std::move(field2__arg)),
    __fbthrift_field_field3(std::move(field3__arg)),
    __fbthrift_field_field4(std::move(field4__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
}

const ::std::vector<double>& TerseLazyFoo::__fbthrift_read_field_field3() const {
  const auto isDeserialized = __fbthrift_isDeserialized_.field3.load(std::memory_order_relaxed);
  if (!(isDeserialized & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED)) {
    __fbthrift_read_field_field3_slow();
  }
  return __fbthrift_field_field3;
}

::std::vector<double>& TerseLazyFoo::__fbthrift_read_field_field3() {
  const auto isDeserialized = __fbthrift_isDeserialized_.field3.load(std::memory_order_relaxed);
  if (!(isDeserialized & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED)) {
    __fbthrift_read_field_field3_slow();
  } else if (isDeserialized & ::apache::thrift::detail::LazyDeserializationState::UNTAINTED) {
    __fbthrift_isDeserialized_.field3 = ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED;
  }
  return __fbthrift_field_field3;
}

void TerseLazyFoo::__fbthrift_read_field_field3_slow() const {
  auto lock = folly::make_unique_lock(__fbthrift_deserializationMutex_);
  if (__fbthrift_isDeserialized_.field3 & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED) {
    return;
  }
  switch (__fbthrift_protocol_) {
    case ::apache::thrift::protocol::T_COMPACT_PROTOCOL:
      __fbthrift_read_field_field3_impl<::apache::thrift::CompactProtocolReader>();
      break;
    case ::apache::thrift::protocol::T_BINARY_PROTOCOL:
      __fbthrift_read_field_field3_impl<::apache::thrift::BinaryProtocolReader>();
      break;
    default:
      CHECK(false) << int(__fbthrift_protocol_);
  }
  __fbthrift_serializedData_.field3 = {};
  __fbthrift_isDeserialized_.field3 = ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED;
}

const ::std::vector<::std::int32_t>& TerseLazyFoo::__fbthrift_read_field_field4() const {
  const auto isDeserialized = __fbthrift_isDeserialized_.field4.load(std::memory_order_relaxed);
  if (!(isDeserialized & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED)) {
    __fbthrift_read_field_field4_slow();
  }
  return __fbthrift_field_field4;
}

::std::vector<::std::int32_t>& TerseLazyFoo::__fbthrift_read_field_field4() {
  const auto isDeserialized = __fbthrift_isDeserialized_.field4.load(std::memory_order_relaxed);
  if (!(isDeserialized & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED)) {
    __fbthrift_read_field_field4_slow();
  } else if (isDeserialized & ::apache::thrift::detail::LazyDeserializationState::UNTAINTED) {
    __fbthrift_isDeserialized_.field4 = ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED;
  }
  return __fbthrift_field_field4;
}

void TerseLazyFoo::__fbthrift_read_field_field4_slow() const {
  auto lock = folly::make_unique_lock(__fbthrift_deserializationMutex_);
  if (__fbthrift_isDeserialized_.field4 & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED) {
    return;
  }
  switch (__fbthrift_protocol_) {
    case ::apache::thrift::protocol::T_COMPACT_PROTOCOL:
      __fbthrift_read_field_field4_impl<::apache::thrift::CompactProtocolReader>();
      break;
    case ::apache::thrift::protocol::T_BINARY_PROTOCOL:
      __fbthrift_read_field_field4_impl<::apache::thrift::BinaryProtocolReader>();
      break;
    default:
      CHECK(false) << int(__fbthrift_protocol_);
  }
  __fbthrift_serializedData_.field4 = {};
  __fbthrift_isDeserialized_.field4 = ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED;
}


void TerseLazyFoo::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_field1.clear();
  this->__fbthrift_field_field2.clear();
  this->__fbthrift_field_field3.clear();
  this->__fbthrift_field_field4.clear();
  __fbthrift_serializedData_ = {};
  __fbthrift_isDeserialized_.~__fbthrift_IsDeserialized();
  new (&__fbthrift_isDeserialized_) __fbthrift_IsDeserialized();
  __isset = {};
}

bool TerseLazyFoo::__fbthrift_is_empty() const {
  return !(!this->__fbthrift_field_field1.empty()) &&
 !(!this->__fbthrift_field_field2.empty()) &&
 !(!this->__fbthrift_field_field3.empty()) &&
 !(!this->__fbthrift_field_field4.empty());
}

bool TerseLazyFoo::operator==(const TerseLazyFoo& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.field1_ref() == rhs.field1_ref())) {
    return false;
  }
  if (!(lhs.field2_ref() == rhs.field2_ref())) {
    return false;
  }
  lhs.field3_ref();
  rhs.field3_ref();
  if (!(lhs.field3_ref() == rhs.field3_ref())) {
    return false;
  }
  lhs.field4_ref();
  rhs.field4_ref();
  if (!(lhs.field4_ref() == rhs.field4_ref())) {
    return false;
  }
  return true;
}

bool TerseLazyFoo::operator<(const TerseLazyFoo& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.field1_ref() == rhs.field1_ref())) {
    return lhs.field1_ref() < rhs.field1_ref();
  }
  if (!(lhs.field2_ref() == rhs.field2_ref())) {
    return lhs.field2_ref() < rhs.field2_ref();
  }
  lhs.field3_ref();
  rhs.field3_ref();
  if (!(lhs.field3_ref() == rhs.field3_ref())) {
    return lhs.field3_ref() < rhs.field3_ref();
  }
  lhs.field4_ref();
  rhs.field4_ref();
  if (!(lhs.field4_ref() == rhs.field4_ref())) {
    return lhs.field4_ref() < rhs.field4_ref();
  }
  return false;
}

const ::std::vector<double>& TerseLazyFoo::get_field1() const& {
  return __fbthrift_field_field1;
}

::std::vector<double> TerseLazyFoo::get_field1() && {
  return std::move(__fbthrift_field_field1);
}

const ::std::vector<::std::int32_t>& TerseLazyFoo::get_field2() const& {
  return __fbthrift_field_field2;
}

::std::vector<::std::int32_t> TerseLazyFoo::get_field2() && {
  return std::move(__fbthrift_field_field2);
}


void swap(TerseLazyFoo& a, TerseLazyFoo& b) {
  using ::std::swap;
  swap(a.field1_ref().value(), b.field1_ref().value());
  swap(a.field2_ref().value(), b.field2_ref().value());
  swap(a.field3_ref().value(), b.field3_ref().value());
  swap(a.field4_ref().value(), b.field4_ref().value());
  swap(a.__isset, b.__isset);
}

template void TerseLazyFoo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t TerseLazyFoo::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t TerseLazyFoo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t TerseLazyFoo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void TerseLazyFoo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t TerseLazyFoo::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t TerseLazyFoo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t TerseLazyFoo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



}}} // apache::thrift::test

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::TerseOptionalFoo>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::TerseOptionalFoo>;
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

namespace apache { namespace thrift { namespace test {

TerseOptionalFoo::TerseOptionalFoo(const TerseOptionalFoo&) = default;
TerseOptionalFoo& TerseOptionalFoo::operator=(const TerseOptionalFoo&) = default;
TerseOptionalFoo::TerseOptionalFoo(TerseOptionalFoo&& other) noexcept  :
    __fbthrift_field_field1(std::move(other.__fbthrift_field_field1)),
    __fbthrift_field_field2(std::move(other.__fbthrift_field_field2)),
    __fbthrift_field_field3(std::move(other.__fbthrift_field_field3)),
    __fbthrift_field_field4(std::move(other.__fbthrift_field_field4)),
    __isset(other.__isset) {
}

TerseOptionalFoo& TerseOptionalFoo::operator=(FOLLY_MAYBE_UNUSED TerseOptionalFoo&& other) noexcept {
    this->__fbthrift_field_field1 = std::move(other.__fbthrift_field_field1);
    this->__fbthrift_field_field2 = std::move(other.__fbthrift_field_field2);
    this->__fbthrift_field_field3 = std::move(other.__fbthrift_field_field3);
    this->__fbthrift_field_field4 = std::move(other.__fbthrift_field_field4);
    __isset = other.__isset;
    return *this;
}


TerseOptionalFoo::TerseOptionalFoo(apache::thrift::FragileConstructor, ::std::vector<double> field1__arg, ::std::vector<::std::int32_t> field2__arg, ::std::vector<double> field3__arg, ::std::vector<::std::int32_t> field4__arg) :
    __fbthrift_field_field1(std::move(field1__arg)),
    __fbthrift_field_field2(std::move(field2__arg)),
    __fbthrift_field_field3(std::move(field3__arg)),
    __fbthrift_field_field4(std::move(field4__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
}


void TerseOptionalFoo::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_field1.clear();
  this->__fbthrift_field_field2.clear();
  this->__fbthrift_field_field3.clear();
  this->__fbthrift_field_field4.clear();
  __isset = {};
}

bool TerseOptionalFoo::__fbthrift_is_empty() const {
  return !(this->__isset.get(0)) &&
 !(this->__isset.get(1)) &&
 !(this->__isset.get(2)) &&
 !(this->__isset.get(3));
}

bool TerseOptionalFoo::operator==(const TerseOptionalFoo& rhs) const {
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

bool TerseOptionalFoo::operator<(const TerseOptionalFoo& rhs) const {
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

const ::std::vector<double>* TerseOptionalFoo::get_field1() const& {
  return field1_ref().has_value() ? std::addressof(__fbthrift_field_field1) : nullptr;
}

::std::vector<double>* TerseOptionalFoo::get_field1() & {
  return field1_ref().has_value() ? std::addressof(__fbthrift_field_field1) : nullptr;
}

const ::std::vector<::std::int32_t>* TerseOptionalFoo::get_field2() const& {
  return field2_ref().has_value() ? std::addressof(__fbthrift_field_field2) : nullptr;
}

::std::vector<::std::int32_t>* TerseOptionalFoo::get_field2() & {
  return field2_ref().has_value() ? std::addressof(__fbthrift_field_field2) : nullptr;
}

const ::std::vector<double>* TerseOptionalFoo::get_field3() const& {
  return field3_ref().has_value() ? std::addressof(__fbthrift_field_field3) : nullptr;
}

::std::vector<double>* TerseOptionalFoo::get_field3() & {
  return field3_ref().has_value() ? std::addressof(__fbthrift_field_field3) : nullptr;
}

const ::std::vector<::std::int32_t>* TerseOptionalFoo::get_field4() const& {
  return field4_ref().has_value() ? std::addressof(__fbthrift_field_field4) : nullptr;
}

::std::vector<::std::int32_t>* TerseOptionalFoo::get_field4() & {
  return field4_ref().has_value() ? std::addressof(__fbthrift_field_field4) : nullptr;
}


void swap(TerseOptionalFoo& a, TerseOptionalFoo& b) {
  using ::std::swap;
  swap(a.field1_ref().value_unchecked(), b.field1_ref().value_unchecked());
  swap(a.field2_ref().value_unchecked(), b.field2_ref().value_unchecked());
  swap(a.field3_ref().value_unchecked(), b.field3_ref().value_unchecked());
  swap(a.field4_ref().value_unchecked(), b.field4_ref().value_unchecked());
  swap(a.__isset, b.__isset);
}

template void TerseOptionalFoo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t TerseOptionalFoo::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t TerseOptionalFoo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t TerseOptionalFoo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void TerseOptionalFoo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t TerseOptionalFoo::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t TerseOptionalFoo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t TerseOptionalFoo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



}}} // apache::thrift::test

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::TerseOptionalLazyFoo>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::TerseOptionalLazyFoo>;
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

namespace apache { namespace thrift { namespace test {

TerseOptionalLazyFoo::TerseOptionalLazyFoo(const TerseOptionalLazyFoo& srcObj) {
  const auto relaxed = std::memory_order_relaxed;
  auto lock = folly::make_shared_lock(srcObj.__fbthrift_deserializationMutex_);
  __fbthrift_protocol_ = srcObj.__fbthrift_protocol_;
  __fbthrift_field_field1 = srcObj.__fbthrift_field_field1;
  __isset.set(0,srcObj.__isset.get(0));
  __fbthrift_field_field2 = srcObj.__fbthrift_field_field2;
  __isset.set(1,srcObj.__isset.get(1));
  {
    const auto isDeserialized = srcObj.__fbthrift_isDeserialized_.field3.load(relaxed);
    __fbthrift_isDeserialized_.field3.store(isDeserialized, relaxed);
    __fbthrift_serializedData_.field3 = srcObj.__fbthrift_serializedData_.field3;
  }
  __fbthrift_field_field3 = srcObj.__fbthrift_field_field3;
  __isset.set(2,srcObj.__isset.get(2));
  {
    const auto isDeserialized = srcObj.__fbthrift_isDeserialized_.field4.load(relaxed);
    __fbthrift_isDeserialized_.field4.store(isDeserialized, relaxed);
    __fbthrift_serializedData_.field4 = srcObj.__fbthrift_serializedData_.field4;
  }
  __fbthrift_field_field4 = srcObj.__fbthrift_field_field4;
  __isset.set(3,srcObj.__isset.get(3));
}

TerseOptionalLazyFoo& TerseOptionalLazyFoo::operator=(const TerseOptionalLazyFoo& src) {
  TerseOptionalLazyFoo tmp(src);
  swap(*this, tmp);
  return *this;
}

TerseOptionalLazyFoo::TerseOptionalLazyFoo(TerseOptionalLazyFoo&& other) noexcept  :
    __fbthrift_field_field1(std::move(other.__fbthrift_field_field1)),
    __fbthrift_field_field2(std::move(other.__fbthrift_field_field2)),
    __fbthrift_field_field3(std::move(other.__fbthrift_field_field3)),
    __fbthrift_field_field4(std::move(other.__fbthrift_field_field4)),
    __isset(other.__isset),
    __fbthrift_serializedData_(std::move(other.__fbthrift_serializedData_)),
    __fbthrift_protocol_(other.__fbthrift_protocol_) {
  const auto relaxed = std::memory_order_relaxed;
  {
    const auto isDeserialized = other.__fbthrift_isDeserialized_.field3.load(relaxed);
    __fbthrift_isDeserialized_.field3.store(isDeserialized, relaxed);
    other.__fbthrift_isDeserialized_.field3.store(isDeserialized | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED, relaxed);
  }
  {
    const auto isDeserialized = other.__fbthrift_isDeserialized_.field4.load(relaxed);
    __fbthrift_isDeserialized_.field4.store(isDeserialized, relaxed);
    other.__fbthrift_isDeserialized_.field4.store(isDeserialized | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED, relaxed);
  }
}

TerseOptionalLazyFoo& TerseOptionalLazyFoo::operator=(FOLLY_MAYBE_UNUSED TerseOptionalLazyFoo&& other) noexcept {
    const auto relaxed = std::memory_order_relaxed;
    __fbthrift_protocol_ = other.__fbthrift_protocol_;
    __fbthrift_serializedData_ = std::move(other.__fbthrift_serializedData_);
    this->__fbthrift_field_field1 = std::move(other.__fbthrift_field_field1);
    this->__fbthrift_field_field2 = std::move(other.__fbthrift_field_field2);
    this->__fbthrift_field_field3 = std::move(other.__fbthrift_field_field3);
    {
      const auto isDeserialized = other.__fbthrift_isDeserialized_.field3.load(relaxed);
      __fbthrift_isDeserialized_.field3.store(isDeserialized, relaxed);
      other.__fbthrift_isDeserialized_.field3.store(isDeserialized | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED, relaxed);
    }
    this->__fbthrift_field_field4 = std::move(other.__fbthrift_field_field4);
    {
      const auto isDeserialized = other.__fbthrift_isDeserialized_.field4.load(relaxed);
      __fbthrift_isDeserialized_.field4.store(isDeserialized, relaxed);
      other.__fbthrift_isDeserialized_.field4.store(isDeserialized | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED, relaxed);
    }
    __isset = other.__isset;
    return *this;
}


TerseOptionalLazyFoo::TerseOptionalLazyFoo(apache::thrift::FragileConstructor, ::std::vector<double> field1__arg, ::std::vector<::std::int32_t> field2__arg, ::std::vector<double> field3__arg, ::std::vector<::std::int32_t> field4__arg) :
    __fbthrift_field_field1(std::move(field1__arg)),
    __fbthrift_field_field2(std::move(field2__arg)),
    __fbthrift_field_field3(std::move(field3__arg)),
    __fbthrift_field_field4(std::move(field4__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
}

const ::std::vector<double>& TerseOptionalLazyFoo::__fbthrift_read_field_field3() const {
  const auto isDeserialized = __fbthrift_isDeserialized_.field3.load(std::memory_order_relaxed);
  if (!(isDeserialized & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED)) {
    __fbthrift_read_field_field3_slow();
  }
  return __fbthrift_field_field3;
}

::std::vector<double>& TerseOptionalLazyFoo::__fbthrift_read_field_field3() {
  const auto isDeserialized = __fbthrift_isDeserialized_.field3.load(std::memory_order_relaxed);
  if (!(isDeserialized & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED)) {
    __fbthrift_read_field_field3_slow();
  } else if (isDeserialized & ::apache::thrift::detail::LazyDeserializationState::UNTAINTED) {
    __fbthrift_isDeserialized_.field3 = ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED;
  }
  return __fbthrift_field_field3;
}

void TerseOptionalLazyFoo::__fbthrift_read_field_field3_slow() const {
  auto lock = folly::make_unique_lock(__fbthrift_deserializationMutex_);
  if (__fbthrift_isDeserialized_.field3 & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED) {
    return;
  }
  switch (__fbthrift_protocol_) {
    case ::apache::thrift::protocol::T_COMPACT_PROTOCOL:
      __fbthrift_read_field_field3_impl<::apache::thrift::CompactProtocolReader>();
      break;
    case ::apache::thrift::protocol::T_BINARY_PROTOCOL:
      __fbthrift_read_field_field3_impl<::apache::thrift::BinaryProtocolReader>();
      break;
    default:
      CHECK(false) << int(__fbthrift_protocol_);
  }
  __fbthrift_serializedData_.field3 = {};
  __fbthrift_isDeserialized_.field3 = ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED;
}

const ::std::vector<::std::int32_t>& TerseOptionalLazyFoo::__fbthrift_read_field_field4() const {
  const auto isDeserialized = __fbthrift_isDeserialized_.field4.load(std::memory_order_relaxed);
  if (!(isDeserialized & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED)) {
    __fbthrift_read_field_field4_slow();
  }
  return __fbthrift_field_field4;
}

::std::vector<::std::int32_t>& TerseOptionalLazyFoo::__fbthrift_read_field_field4() {
  const auto isDeserialized = __fbthrift_isDeserialized_.field4.load(std::memory_order_relaxed);
  if (!(isDeserialized & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED)) {
    __fbthrift_read_field_field4_slow();
  } else if (isDeserialized & ::apache::thrift::detail::LazyDeserializationState::UNTAINTED) {
    __fbthrift_isDeserialized_.field4 = ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED;
  }
  return __fbthrift_field_field4;
}

void TerseOptionalLazyFoo::__fbthrift_read_field_field4_slow() const {
  auto lock = folly::make_unique_lock(__fbthrift_deserializationMutex_);
  if (__fbthrift_isDeserialized_.field4 & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED) {
    return;
  }
  switch (__fbthrift_protocol_) {
    case ::apache::thrift::protocol::T_COMPACT_PROTOCOL:
      __fbthrift_read_field_field4_impl<::apache::thrift::CompactProtocolReader>();
      break;
    case ::apache::thrift::protocol::T_BINARY_PROTOCOL:
      __fbthrift_read_field_field4_impl<::apache::thrift::BinaryProtocolReader>();
      break;
    default:
      CHECK(false) << int(__fbthrift_protocol_);
  }
  __fbthrift_serializedData_.field4 = {};
  __fbthrift_isDeserialized_.field4 = ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED;
}


void TerseOptionalLazyFoo::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_field1.clear();
  this->__fbthrift_field_field2.clear();
  this->__fbthrift_field_field3.clear();
  this->__fbthrift_field_field4.clear();
  __fbthrift_serializedData_ = {};
  __fbthrift_isDeserialized_.~__fbthrift_IsDeserialized();
  new (&__fbthrift_isDeserialized_) __fbthrift_IsDeserialized();
  __isset = {};
}

bool TerseOptionalLazyFoo::__fbthrift_is_empty() const {
  return !(this->__isset.get(0)) &&
 !(this->__isset.get(1)) &&
 !(this->__isset.get(2)) &&
 !(this->__isset.get(3));
}

bool TerseOptionalLazyFoo::operator==(const TerseOptionalLazyFoo& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.field1_ref() == rhs.field1_ref())) {
    return false;
  }
  if (!(lhs.field2_ref() == rhs.field2_ref())) {
    return false;
  }
  lhs.field3_ref();
  rhs.field3_ref();
  if (!(lhs.field3_ref() == rhs.field3_ref())) {
    return false;
  }
  lhs.field4_ref();
  rhs.field4_ref();
  if (!(lhs.field4_ref() == rhs.field4_ref())) {
    return false;
  }
  return true;
}

bool TerseOptionalLazyFoo::operator<(const TerseOptionalLazyFoo& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.field1_ref() == rhs.field1_ref())) {
    return lhs.field1_ref() < rhs.field1_ref();
  }
  if (!(lhs.field2_ref() == rhs.field2_ref())) {
    return lhs.field2_ref() < rhs.field2_ref();
  }
  lhs.field3_ref();
  rhs.field3_ref();
  if (!(lhs.field3_ref() == rhs.field3_ref())) {
    return lhs.field3_ref() < rhs.field3_ref();
  }
  lhs.field4_ref();
  rhs.field4_ref();
  if (!(lhs.field4_ref() == rhs.field4_ref())) {
    return lhs.field4_ref() < rhs.field4_ref();
  }
  return false;
}

const ::std::vector<double>* TerseOptionalLazyFoo::get_field1() const& {
  return field1_ref().has_value() ? std::addressof(__fbthrift_field_field1) : nullptr;
}

::std::vector<double>* TerseOptionalLazyFoo::get_field1() & {
  return field1_ref().has_value() ? std::addressof(__fbthrift_field_field1) : nullptr;
}

const ::std::vector<::std::int32_t>* TerseOptionalLazyFoo::get_field2() const& {
  return field2_ref().has_value() ? std::addressof(__fbthrift_field_field2) : nullptr;
}

::std::vector<::std::int32_t>* TerseOptionalLazyFoo::get_field2() & {
  return field2_ref().has_value() ? std::addressof(__fbthrift_field_field2) : nullptr;
}


void swap(TerseOptionalLazyFoo& a, TerseOptionalLazyFoo& b) {
  using ::std::swap;
  swap(a.field1_ref().value_unchecked(), b.field1_ref().value_unchecked());
  swap(a.field2_ref().value_unchecked(), b.field2_ref().value_unchecked());
  swap(a.field3_ref().value_unchecked(), b.field3_ref().value_unchecked());
  swap(a.field4_ref().value_unchecked(), b.field4_ref().value_unchecked());
  swap(a.__isset, b.__isset);
}

template void TerseOptionalLazyFoo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t TerseOptionalLazyFoo::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t TerseOptionalLazyFoo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t TerseOptionalLazyFoo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void TerseOptionalLazyFoo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t TerseOptionalLazyFoo::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t TerseOptionalLazyFoo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t TerseOptionalLazyFoo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



}}} // apache::thrift::test

namespace apache { namespace thrift { namespace test { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}}}} // apache::thrift::test
