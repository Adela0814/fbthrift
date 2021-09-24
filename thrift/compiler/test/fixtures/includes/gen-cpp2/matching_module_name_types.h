/**
 * Autogenerated by Thrift for src/matching_module_name.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>


#include "other/gen-cpp2/matching_module_name_types.h"

namespace apache {
namespace thrift {
namespace tag {
struct OtherStructField;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_OtherStructField
#define APACHE_THRIFT_ACCESSOR_OtherStructField
APACHE_THRIFT_DEFINE_ACCESSOR(OtherStructField);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace matching_module_name {
class MyStruct;
} // matching_module_name
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
namespace matching_module_name {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;

class MyStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = MyStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  MyStruct() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyStruct(apache::thrift::FragileConstructor, ::matching_module_name::OtherStruct OtherStructField__arg);

  MyStruct(MyStruct&&) = default;

  MyStruct(const MyStruct&) = default;


  MyStruct& operator=(MyStruct&&) = default;

  MyStruct& operator=(const MyStruct&) = default;
  void __clear();
 private:
  ::matching_module_name::OtherStruct OtherStructField;
private:
  apache::thrift::detail::isset_bitset<1> __isset;

 public:

  bool operator==(const MyStruct&) const;
  bool operator<(const MyStruct&) const;

  template <typename..., typename T = ::matching_module_name::OtherStruct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> OtherStructField_ref() const& {
    return {this->OtherStructField, __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::matching_module_name::OtherStruct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> OtherStructField_ref() const&& {
    return {std::move(this->OtherStructField), __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::matching_module_name::OtherStruct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> OtherStructField_ref() & {
    return {this->OtherStructField, __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::matching_module_name::OtherStruct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> OtherStructField_ref() && {
    return {std::move(this->OtherStructField), __isset.__fbthrift_at(folly::index_constant<0>())};
  }
  const ::matching_module_name::OtherStruct& get_OtherStructField() const&;
  ::matching_module_name::OtherStruct get_OtherStructField() &&;

  template <typename T_MyStruct_OtherStructField_struct_setter = ::matching_module_name::OtherStruct>
  [[deprecated("Use `FOO.OtherStructField_ref() = BAR;` instead of `FOO.set_OtherStructField(BAR);`")]]
  ::matching_module_name::OtherStruct& set_OtherStructField(T_MyStruct_OtherStructField_struct_setter&& OtherStructField_) {
    OtherStructField = std::forward<T_MyStruct_OtherStructField_struct_setter>(OtherStructField_);
    __isset.__fbthrift_set(folly::index_constant<0>(), true);
    return OtherStructField;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<MyStruct>;
  friend void swap(MyStruct& a, MyStruct& b);
};

template <class Protocol_>
uint32_t MyStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // matching_module_name
THRIFT_IGNORE_ISSET_USE_WARNING_END
