/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct bool_field;
struct byte_field;
struct short_field;
struct int_field;
struct long_field;
struct float_field;
struct double_field;
struct string_field;
struct binary_field;
struct enum_field;
struct list_field;
struct set_field;
struct map_field;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_bool_field
#define APACHE_THRIFT_ACCESSOR_bool_field
APACHE_THRIFT_DEFINE_ACCESSOR(bool_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_byte_field
#define APACHE_THRIFT_ACCESSOR_byte_field
APACHE_THRIFT_DEFINE_ACCESSOR(byte_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_short_field
#define APACHE_THRIFT_ACCESSOR_short_field
APACHE_THRIFT_DEFINE_ACCESSOR(short_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_int_field
#define APACHE_THRIFT_ACCESSOR_int_field
APACHE_THRIFT_DEFINE_ACCESSOR(int_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_long_field
#define APACHE_THRIFT_ACCESSOR_long_field
APACHE_THRIFT_DEFINE_ACCESSOR(long_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_float_field
#define APACHE_THRIFT_ACCESSOR_float_field
APACHE_THRIFT_DEFINE_ACCESSOR(float_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_double_field
#define APACHE_THRIFT_ACCESSOR_double_field
APACHE_THRIFT_DEFINE_ACCESSOR(double_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_string_field
#define APACHE_THRIFT_ACCESSOR_string_field
APACHE_THRIFT_DEFINE_ACCESSOR(string_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_binary_field
#define APACHE_THRIFT_ACCESSOR_binary_field
APACHE_THRIFT_DEFINE_ACCESSOR(binary_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_enum_field
#define APACHE_THRIFT_ACCESSOR_enum_field
APACHE_THRIFT_DEFINE_ACCESSOR(enum_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_list_field
#define APACHE_THRIFT_ACCESSOR_list_field
APACHE_THRIFT_DEFINE_ACCESSOR(list_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_set_field
#define APACHE_THRIFT_ACCESSOR_set_field
APACHE_THRIFT_DEFINE_ACCESSOR(set_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_map_field
#define APACHE_THRIFT_ACCESSOR_map_field
APACHE_THRIFT_DEFINE_ACCESSOR(map_field);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace apache { namespace thrift { namespace test {

enum class MyEnum {
  ME0 = 0,
  ME1 = 1,
};




}}} // apache::thrift::test

namespace std {
template<> struct hash<::apache::thrift::test::MyEnum> :
  ::apache::thrift::detail::enum_hash<::apache::thrift::test::MyEnum> {};
} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::apache::thrift::test::MyEnum>;

template <> struct TEnumTraits<::apache::thrift::test::MyEnum> {
  using type = ::apache::thrift::test::MyEnum;

  static constexpr std::size_t const size = 2;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::ME0; }
  static constexpr type max() { return type::ME1; }
};


}} // apache::thrift

namespace apache { namespace thrift { namespace test {

using _MyEnum_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<MyEnum>;
[[deprecated("use apache::thrift::util::enumNameSafe, apache::thrift::util::enumName, or apache::thrift::TEnumTraits")]]
extern const _MyEnum_EnumMapFactory::ValuesToNamesMapType _MyEnum_VALUES_TO_NAMES;
[[deprecated("use apache::thrift::TEnumTraits")]]
extern const _MyEnum_EnumMapFactory::NamesToValuesMapType _MyEnum_NAMES_TO_VALUES;

}}} // apache::thrift::test

// END declare_enums
// BEGIN forward_declare
namespace apache { namespace thrift { namespace test {
class StructWithDefaultStruct;
}}} // apache::thrift::test
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace apache { namespace thrift { namespace test {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
}}} // apache::thrift::test
namespace apache { namespace thrift { namespace test {
class StructWithDefaultStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = StructWithDefaultStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  StructWithDefaultStruct();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  StructWithDefaultStruct(apache::thrift::FragileConstructor, bool bool_field__arg, ::std::int8_t byte_field__arg, ::std::int16_t short_field__arg, ::std::int32_t int_field__arg, ::std::int64_t long_field__arg, float float_field__arg, double double_field__arg, ::std::string string_field__arg, ::std::string binary_field__arg, ::apache::thrift::test::MyEnum enum_field__arg, ::std::vector<::std::int16_t> list_field__arg, ::std::set<::std::int16_t> set_field__arg, ::std::map<::std::int16_t, ::std::int16_t> map_field__arg);

  StructWithDefaultStruct(StructWithDefaultStruct&&) noexcept;

  StructWithDefaultStruct(const StructWithDefaultStruct& src);


  StructWithDefaultStruct& operator=(StructWithDefaultStruct&&) noexcept;
  StructWithDefaultStruct& operator=(const StructWithDefaultStruct& src);

  ~StructWithDefaultStruct();

 private:
  bool __fbthrift_field_bool_field;
 private:
  ::std::int8_t __fbthrift_field_byte_field;
 private:
  ::std::int16_t __fbthrift_field_short_field;
 private:
  ::std::int32_t __fbthrift_field_int_field;
 private:
  ::std::int64_t __fbthrift_field_long_field;
 private:
  float __fbthrift_field_float_field;
 private:
  double __fbthrift_field_double_field;
 private:
  ::std::string __fbthrift_field_string_field;
 private:
  ::std::string __fbthrift_field_binary_field;
 private:
  ::apache::thrift::test::MyEnum __fbthrift_field_enum_field;
 private:
  ::std::vector<::std::int16_t> __fbthrift_field_list_field;
 private:
  ::std::set<::std::int16_t> __fbthrift_field_set_field;
 private:
  ::std::map<::std::int16_t, ::std::int16_t> __fbthrift_field_map_field;
 private:
  apache::thrift::detail::isset_bitset<13, false> __isset;

 public:

  bool operator==(const StructWithDefaultStruct&) const;
  bool operator<(const StructWithDefaultStruct&) const;

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> bool_field_ref() const& {
    return {this->__fbthrift_field_bool_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> bool_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_bool_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> bool_field_ref() & {
    return {this->__fbthrift_field_bool_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> bool_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_bool_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> bool_field() const& {
    return {this->__fbthrift_field_bool_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> bool_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_bool_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> bool_field() & {
    return {this->__fbthrift_field_bool_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> bool_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_bool_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> byte_field_ref() const& {
    return {this->__fbthrift_field_byte_field, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> byte_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_byte_field), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> byte_field_ref() & {
    return {this->__fbthrift_field_byte_field, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> byte_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_byte_field), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> byte_field() const& {
    return {this->__fbthrift_field_byte_field, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> byte_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_byte_field), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> byte_field() & {
    return {this->__fbthrift_field_byte_field, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int8_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> byte_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_byte_field), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> short_field_ref() const& {
    return {this->__fbthrift_field_short_field, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> short_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_short_field), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> short_field_ref() & {
    return {this->__fbthrift_field_short_field, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> short_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_short_field), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> short_field() const& {
    return {this->__fbthrift_field_short_field, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> short_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_short_field), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> short_field() & {
    return {this->__fbthrift_field_short_field, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> short_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_short_field), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> int_field_ref() const& {
    return {this->__fbthrift_field_int_field, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> int_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_int_field), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> int_field_ref() & {
    return {this->__fbthrift_field_int_field, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> int_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_int_field), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> int_field() const& {
    return {this->__fbthrift_field_int_field, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> int_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_int_field), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> int_field() & {
    return {this->__fbthrift_field_int_field, __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> int_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_int_field), __isset.at(3), __isset.bit(3)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> long_field_ref() const& {
    return {this->__fbthrift_field_long_field, __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> long_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_long_field), __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> long_field_ref() & {
    return {this->__fbthrift_field_long_field, __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> long_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_long_field), __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> long_field() const& {
    return {this->__fbthrift_field_long_field, __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> long_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_long_field), __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> long_field() & {
    return {this->__fbthrift_field_long_field, __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> long_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_long_field), __isset.at(4), __isset.bit(4)};
  }

  template <typename..., typename T = float>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> float_field_ref() const& {
    return {this->__fbthrift_field_float_field, __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = float>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> float_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_float_field), __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = float>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> float_field_ref() & {
    return {this->__fbthrift_field_float_field, __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = float>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> float_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_float_field), __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = float>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> float_field() const& {
    return {this->__fbthrift_field_float_field, __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = float>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> float_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_float_field), __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = float>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> float_field() & {
    return {this->__fbthrift_field_float_field, __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = float>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> float_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_float_field), __isset.at(5), __isset.bit(5)};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> double_field_ref() const& {
    return {this->__fbthrift_field_double_field, __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> double_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_double_field), __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> double_field_ref() & {
    return {this->__fbthrift_field_double_field, __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> double_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_double_field), __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> double_field() const& {
    return {this->__fbthrift_field_double_field, __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> double_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_double_field), __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> double_field() & {
    return {this->__fbthrift_field_double_field, __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = double>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> double_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_double_field), __isset.at(6), __isset.bit(6)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> string_field_ref() const& {
    return {this->__fbthrift_field_string_field, __isset.at(7), __isset.bit(7)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> string_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_string_field), __isset.at(7), __isset.bit(7)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> string_field_ref() & {
    return {this->__fbthrift_field_string_field, __isset.at(7), __isset.bit(7)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> string_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_string_field), __isset.at(7), __isset.bit(7)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> string_field() const& {
    return {this->__fbthrift_field_string_field, __isset.at(7), __isset.bit(7)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> string_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_string_field), __isset.at(7), __isset.bit(7)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> string_field() & {
    return {this->__fbthrift_field_string_field, __isset.at(7), __isset.bit(7)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> string_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_string_field), __isset.at(7), __isset.bit(7)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> binary_field_ref() const& {
    return {this->__fbthrift_field_binary_field, __isset.at(8), __isset.bit(8)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> binary_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_binary_field), __isset.at(8), __isset.bit(8)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> binary_field_ref() & {
    return {this->__fbthrift_field_binary_field, __isset.at(8), __isset.bit(8)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> binary_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_binary_field), __isset.at(8), __isset.bit(8)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> binary_field() const& {
    return {this->__fbthrift_field_binary_field, __isset.at(8), __isset.bit(8)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> binary_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_binary_field), __isset.at(8), __isset.bit(8)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> binary_field() & {
    return {this->__fbthrift_field_binary_field, __isset.at(8), __isset.bit(8)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> binary_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_binary_field), __isset.at(8), __isset.bit(8)};
  }

  template <typename..., typename T = ::apache::thrift::test::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> enum_field_ref() const& {
    return {this->__fbthrift_field_enum_field, __isset.at(9), __isset.bit(9)};
  }

  template <typename..., typename T = ::apache::thrift::test::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> enum_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_enum_field), __isset.at(9), __isset.bit(9)};
  }

  template <typename..., typename T = ::apache::thrift::test::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> enum_field_ref() & {
    return {this->__fbthrift_field_enum_field, __isset.at(9), __isset.bit(9)};
  }

  template <typename..., typename T = ::apache::thrift::test::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> enum_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_enum_field), __isset.at(9), __isset.bit(9)};
  }

  template <typename..., typename T = ::apache::thrift::test::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> enum_field() const& {
    return {this->__fbthrift_field_enum_field, __isset.at(9), __isset.bit(9)};
  }

  template <typename..., typename T = ::apache::thrift::test::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> enum_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_enum_field), __isset.at(9), __isset.bit(9)};
  }

  template <typename..., typename T = ::apache::thrift::test::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> enum_field() & {
    return {this->__fbthrift_field_enum_field, __isset.at(9), __isset.bit(9)};
  }

  template <typename..., typename T = ::apache::thrift::test::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> enum_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_enum_field), __isset.at(9), __isset.bit(9)};
  }

  template <typename..., typename T = ::std::vector<::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> list_field_ref() const& {
    return {this->__fbthrift_field_list_field, __isset.at(10), __isset.bit(10)};
  }

  template <typename..., typename T = ::std::vector<::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> list_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_list_field), __isset.at(10), __isset.bit(10)};
  }

  template <typename..., typename T = ::std::vector<::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> list_field_ref() & {
    return {this->__fbthrift_field_list_field, __isset.at(10), __isset.bit(10)};
  }

  template <typename..., typename T = ::std::vector<::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> list_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_list_field), __isset.at(10), __isset.bit(10)};
  }

  template <typename..., typename T = ::std::vector<::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> list_field() const& {
    return {this->__fbthrift_field_list_field, __isset.at(10), __isset.bit(10)};
  }

  template <typename..., typename T = ::std::vector<::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> list_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_list_field), __isset.at(10), __isset.bit(10)};
  }

  template <typename..., typename T = ::std::vector<::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> list_field() & {
    return {this->__fbthrift_field_list_field, __isset.at(10), __isset.bit(10)};
  }

  template <typename..., typename T = ::std::vector<::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> list_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_list_field), __isset.at(10), __isset.bit(10)};
  }

  template <typename..., typename T = ::std::set<::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> set_field_ref() const& {
    return {this->__fbthrift_field_set_field, __isset.at(11), __isset.bit(11)};
  }

  template <typename..., typename T = ::std::set<::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> set_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_set_field), __isset.at(11), __isset.bit(11)};
  }

  template <typename..., typename T = ::std::set<::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> set_field_ref() & {
    return {this->__fbthrift_field_set_field, __isset.at(11), __isset.bit(11)};
  }

  template <typename..., typename T = ::std::set<::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> set_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_set_field), __isset.at(11), __isset.bit(11)};
  }

  template <typename..., typename T = ::std::set<::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> set_field() const& {
    return {this->__fbthrift_field_set_field, __isset.at(11), __isset.bit(11)};
  }

  template <typename..., typename T = ::std::set<::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> set_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_set_field), __isset.at(11), __isset.bit(11)};
  }

  template <typename..., typename T = ::std::set<::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> set_field() & {
    return {this->__fbthrift_field_set_field, __isset.at(11), __isset.bit(11)};
  }

  template <typename..., typename T = ::std::set<::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> set_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_set_field), __isset.at(11), __isset.bit(11)};
  }

  template <typename..., typename T = ::std::map<::std::int16_t, ::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> map_field_ref() const& {
    return {this->__fbthrift_field_map_field, __isset.at(12), __isset.bit(12)};
  }

  template <typename..., typename T = ::std::map<::std::int16_t, ::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> map_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_map_field), __isset.at(12), __isset.bit(12)};
  }

  template <typename..., typename T = ::std::map<::std::int16_t, ::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> map_field_ref() & {
    return {this->__fbthrift_field_map_field, __isset.at(12), __isset.bit(12)};
  }

  template <typename..., typename T = ::std::map<::std::int16_t, ::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> map_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_map_field), __isset.at(12), __isset.bit(12)};
  }

  template <typename..., typename T = ::std::map<::std::int16_t, ::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> map_field() const& {
    return {this->__fbthrift_field_map_field, __isset.at(12), __isset.bit(12)};
  }

  template <typename..., typename T = ::std::map<::std::int16_t, ::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> map_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_map_field), __isset.at(12), __isset.bit(12)};
  }

  template <typename..., typename T = ::std::map<::std::int16_t, ::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> map_field() & {
    return {this->__fbthrift_field_map_field, __isset.at(12), __isset.bit(12)};
  }

  template <typename..., typename T = ::std::map<::std::int16_t, ::std::int16_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> map_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_map_field), __isset.at(12), __isset.bit(12)};
  }

  bool get_bool_field() const {
    return __fbthrift_field_bool_field;
  }

  [[deprecated("Use `FOO.bool_field_ref() = BAR;` instead of `FOO.set_bool_field(BAR);`")]]
  bool& set_bool_field(bool bool_field_) {
    bool_field_ref() = bool_field_;
    return __fbthrift_field_bool_field;
  }

  ::std::int8_t get_byte_field() const {
    return __fbthrift_field_byte_field;
  }

  [[deprecated("Use `FOO.byte_field_ref() = BAR;` instead of `FOO.set_byte_field(BAR);`")]]
  ::std::int8_t& set_byte_field(::std::int8_t byte_field_) {
    byte_field_ref() = byte_field_;
    return __fbthrift_field_byte_field;
  }

  ::std::int16_t get_short_field() const {
    return __fbthrift_field_short_field;
  }

  [[deprecated("Use `FOO.short_field_ref() = BAR;` instead of `FOO.set_short_field(BAR);`")]]
  ::std::int16_t& set_short_field(::std::int16_t short_field_) {
    short_field_ref() = short_field_;
    return __fbthrift_field_short_field;
  }

  ::std::int32_t get_int_field() const {
    return __fbthrift_field_int_field;
  }

  [[deprecated("Use `FOO.int_field_ref() = BAR;` instead of `FOO.set_int_field(BAR);`")]]
  ::std::int32_t& set_int_field(::std::int32_t int_field_) {
    int_field_ref() = int_field_;
    return __fbthrift_field_int_field;
  }

  ::std::int64_t get_long_field() const {
    return __fbthrift_field_long_field;
  }

  [[deprecated("Use `FOO.long_field_ref() = BAR;` instead of `FOO.set_long_field(BAR);`")]]
  ::std::int64_t& set_long_field(::std::int64_t long_field_) {
    long_field_ref() = long_field_;
    return __fbthrift_field_long_field;
  }

  float get_float_field() const {
    return __fbthrift_field_float_field;
  }

  [[deprecated("Use `FOO.float_field_ref() = BAR;` instead of `FOO.set_float_field(BAR);`")]]
  float& set_float_field(float float_field_) {
    float_field_ref() = float_field_;
    return __fbthrift_field_float_field;
  }

  double get_double_field() const {
    return __fbthrift_field_double_field;
  }

  [[deprecated("Use `FOO.double_field_ref() = BAR;` instead of `FOO.set_double_field(BAR);`")]]
  double& set_double_field(double double_field_) {
    double_field_ref() = double_field_;
    return __fbthrift_field_double_field;
  }

  const ::std::string& get_string_field() const& {
    return __fbthrift_field_string_field;
  }

  ::std::string get_string_field() && {
    return std::move(__fbthrift_field_string_field);
  }

  template <typename T_StructWithDefaultStruct_string_field_struct_setter = ::std::string>
  [[deprecated("Use `FOO.string_field_ref() = BAR;` instead of `FOO.set_string_field(BAR);`")]]
  ::std::string& set_string_field(T_StructWithDefaultStruct_string_field_struct_setter&& string_field_) {
    string_field_ref() = std::forward<T_StructWithDefaultStruct_string_field_struct_setter>(string_field_);
    return __fbthrift_field_string_field;
  }

  const ::std::string& get_binary_field() const& {
    return __fbthrift_field_binary_field;
  }

  ::std::string get_binary_field() && {
    return std::move(__fbthrift_field_binary_field);
  }

  template <typename T_StructWithDefaultStruct_binary_field_struct_setter = ::std::string>
  [[deprecated("Use `FOO.binary_field_ref() = BAR;` instead of `FOO.set_binary_field(BAR);`")]]
  ::std::string& set_binary_field(T_StructWithDefaultStruct_binary_field_struct_setter&& binary_field_) {
    binary_field_ref() = std::forward<T_StructWithDefaultStruct_binary_field_struct_setter>(binary_field_);
    return __fbthrift_field_binary_field;
  }

  ::apache::thrift::test::MyEnum get_enum_field() const {
    return __fbthrift_field_enum_field;
  }

  [[deprecated("Use `FOO.enum_field_ref() = BAR;` instead of `FOO.set_enum_field(BAR);`")]]
  ::apache::thrift::test::MyEnum& set_enum_field(::apache::thrift::test::MyEnum enum_field_) {
    enum_field_ref() = enum_field_;
    return __fbthrift_field_enum_field;
  }
  const ::std::vector<::std::int16_t>& get_list_field() const&;
  ::std::vector<::std::int16_t> get_list_field() &&;

  template <typename T_StructWithDefaultStruct_list_field_struct_setter = ::std::vector<::std::int16_t>>
  [[deprecated("Use `FOO.list_field_ref() = BAR;` instead of `FOO.set_list_field(BAR);`")]]
  ::std::vector<::std::int16_t>& set_list_field(T_StructWithDefaultStruct_list_field_struct_setter&& list_field_) {
    list_field_ref() = std::forward<T_StructWithDefaultStruct_list_field_struct_setter>(list_field_);
    return __fbthrift_field_list_field;
  }
  const ::std::set<::std::int16_t>& get_set_field() const&;
  ::std::set<::std::int16_t> get_set_field() &&;

  template <typename T_StructWithDefaultStruct_set_field_struct_setter = ::std::set<::std::int16_t>>
  [[deprecated("Use `FOO.set_field_ref() = BAR;` instead of `FOO.set_set_field(BAR);`")]]
  ::std::set<::std::int16_t>& set_set_field(T_StructWithDefaultStruct_set_field_struct_setter&& set_field_) {
    set_field_ref() = std::forward<T_StructWithDefaultStruct_set_field_struct_setter>(set_field_);
    return __fbthrift_field_set_field;
  }
  const ::std::map<::std::int16_t, ::std::int16_t>& get_map_field() const&;
  ::std::map<::std::int16_t, ::std::int16_t> get_map_field() &&;

  template <typename T_StructWithDefaultStruct_map_field_struct_setter = ::std::map<::std::int16_t, ::std::int16_t>>
  [[deprecated("Use `FOO.map_field_ref() = BAR;` instead of `FOO.set_map_field(BAR);`")]]
  ::std::map<::std::int16_t, ::std::int16_t>& set_map_field(T_StructWithDefaultStruct_map_field_struct_setter&& map_field_) {
    map_field_ref() = std::forward<T_StructWithDefaultStruct_map_field_struct_setter>(map_field_);
    return __fbthrift_field_map_field;
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

  friend class ::apache::thrift::Cpp2Ops<StructWithDefaultStruct>;
  friend void swap(StructWithDefaultStruct& a, StructWithDefaultStruct& b);
};

template <class Protocol_>
uint32_t StructWithDefaultStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // apache::thrift::test
