/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/stream/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/stream/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/stream/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::FooEx>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::FooEx>;
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

FooEx::FooEx(const FooEx&) = default;
FooEx& FooEx::operator=(const FooEx&) = default;
FooEx::FooEx() {
}


FooEx::~FooEx() {}

FooEx::FooEx(FooEx&& other) noexcept { (void)other; }
FooEx& FooEx::operator=(FOLLY_MAYBE_UNUSED FooEx&& other) noexcept {
    return *this;
}


FooEx::FooEx(apache::thrift::FragileConstructor) {}


void FooEx::__fbthrift_clear() {
  // clear all fields
}

bool FooEx::__fbthrift_is_empty() const {
  return true;
}

bool FooEx::operator==(const FooEx& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  return true;
}

bool FooEx::operator<(const FooEx& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  return false;
}


void swap(FooEx& a, FooEx& b) {
  using ::std::swap;
  (void)a;
  (void)b;
}

template void FooEx::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t FooEx::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t FooEx::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t FooEx::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void FooEx::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t FooEx::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t FooEx::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t FooEx::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
