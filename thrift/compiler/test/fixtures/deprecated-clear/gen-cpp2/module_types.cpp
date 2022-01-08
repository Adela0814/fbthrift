/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/deprecated-clear/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/deprecated-clear/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/deprecated-clear/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::apache::thrift::test::MyEnum>::size;
folly::Range<::apache::thrift::test::MyEnum const*> const TEnumTraits<::apache::thrift::test::MyEnum>::values = folly::range(TEnumDataStorage<::apache::thrift::test::MyEnum>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::apache::thrift::test::MyEnum>::names = folly::range(TEnumDataStorage<::apache::thrift::test::MyEnum>::names);

char const* TEnumTraits<::apache::thrift::test::MyEnum>::findName(type value) {
  using factory = ::apache::thrift::test::_MyEnum_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::apache::thrift::test::MyEnum>::findValue(char const* name, type* out) {
  using factory = ::apache::thrift::test::_MyEnum_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace apache { namespace thrift { namespace test {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _MyEnum_EnumMapFactory::ValuesToNamesMapType _MyEnum_VALUES_TO_NAMES = _MyEnum_EnumMapFactory::makeValuesToNamesMap();
const _MyEnum_EnumMapFactory::NamesToValuesMapType _MyEnum_NAMES_TO_VALUES = _MyEnum_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

}}} // apache::thrift::test

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::StructWithDefaultStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::StructWithDefaultStruct>;
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

StructWithDefaultStruct::StructWithDefaultStruct(const StructWithDefaultStruct&) = default;
StructWithDefaultStruct& StructWithDefaultStruct::operator=(const StructWithDefaultStruct&) = default;
StructWithDefaultStruct::StructWithDefaultStruct() :
      __fbthrift_field_bool_field(static_cast<bool>(true)),
      __fbthrift_field_byte_field(static_cast<::std::int8_t>(1)),
      __fbthrift_field_short_field(static_cast<::std::int16_t>(1)),
      __fbthrift_field_int_field(static_cast<::std::int32_t>(1)),
      __fbthrift_field_long_field(static_cast<::std::int64_t>(1)),
      __fbthrift_field_float_field(static_cast<float>(1)),
      __fbthrift_field_double_field(static_cast<double>(1)),
      __fbthrift_field_string_field(apache::thrift::StringTraits<std::string>::fromStringLiteral("1")),
      __fbthrift_field_binary_field(apache::thrift::StringTraits<std::string>::fromStringLiteral("1")),
      __fbthrift_field_enum_field( ::apache::thrift::test::MyEnum::ME1),
      __fbthrift_field_list_field(static_cast<::std::vector<::std::int16_t>>(std::initializer_list<::std::int16_t>{1})),
      __fbthrift_field_set_field(static_cast<::std::set<::std::int16_t>>(std::initializer_list<::std::int16_t>{1})),
      __fbthrift_field_map_field(static_cast<::std::map<::std::int16_t, ::std::int16_t>>(std::initializer_list<std::pair<const ::std::int16_t, ::std::int16_t>>{{1, 1}})) {
}


StructWithDefaultStruct::~StructWithDefaultStruct() {}

StructWithDefaultStruct::StructWithDefaultStruct(StructWithDefaultStruct&& other) noexcept  :
    __fbthrift_field_bool_field(std::move(other.__fbthrift_field_bool_field)),
    __fbthrift_field_byte_field(std::move(other.__fbthrift_field_byte_field)),
    __fbthrift_field_short_field(std::move(other.__fbthrift_field_short_field)),
    __fbthrift_field_int_field(std::move(other.__fbthrift_field_int_field)),
    __fbthrift_field_long_field(std::move(other.__fbthrift_field_long_field)),
    __fbthrift_field_float_field(std::move(other.__fbthrift_field_float_field)),
    __fbthrift_field_double_field(std::move(other.__fbthrift_field_double_field)),
    __fbthrift_field_string_field(std::move(other.__fbthrift_field_string_field)),
    __fbthrift_field_binary_field(std::move(other.__fbthrift_field_binary_field)),
    __fbthrift_field_enum_field(std::move(other.__fbthrift_field_enum_field)),
    __fbthrift_field_list_field(std::move(other.__fbthrift_field_list_field)),
    __fbthrift_field_set_field(std::move(other.__fbthrift_field_set_field)),
    __fbthrift_field_map_field(std::move(other.__fbthrift_field_map_field)),
    __isset(other.__isset) {
}

StructWithDefaultStruct& StructWithDefaultStruct::operator=(FOLLY_MAYBE_UNUSED StructWithDefaultStruct&& other) noexcept {
    this->__fbthrift_field_bool_field = std::move(other.__fbthrift_field_bool_field);
    this->__fbthrift_field_byte_field = std::move(other.__fbthrift_field_byte_field);
    this->__fbthrift_field_short_field = std::move(other.__fbthrift_field_short_field);
    this->__fbthrift_field_int_field = std::move(other.__fbthrift_field_int_field);
    this->__fbthrift_field_long_field = std::move(other.__fbthrift_field_long_field);
    this->__fbthrift_field_float_field = std::move(other.__fbthrift_field_float_field);
    this->__fbthrift_field_double_field = std::move(other.__fbthrift_field_double_field);
    this->__fbthrift_field_string_field = std::move(other.__fbthrift_field_string_field);
    this->__fbthrift_field_binary_field = std::move(other.__fbthrift_field_binary_field);
    this->__fbthrift_field_enum_field = std::move(other.__fbthrift_field_enum_field);
    this->__fbthrift_field_list_field = std::move(other.__fbthrift_field_list_field);
    this->__fbthrift_field_set_field = std::move(other.__fbthrift_field_set_field);
    this->__fbthrift_field_map_field = std::move(other.__fbthrift_field_map_field);
    __isset = other.__isset;
    return *this;
}


StructWithDefaultStruct::StructWithDefaultStruct(apache::thrift::FragileConstructor, bool bool_field__arg, ::std::int8_t byte_field__arg, ::std::int16_t short_field__arg, ::std::int32_t int_field__arg, ::std::int64_t long_field__arg, float float_field__arg, double double_field__arg, ::std::string string_field__arg, ::std::string binary_field__arg, ::apache::thrift::test::MyEnum enum_field__arg, ::std::vector<::std::int16_t> list_field__arg, ::std::set<::std::int16_t> set_field__arg, ::std::map<::std::int16_t, ::std::int16_t> map_field__arg) :
    __fbthrift_field_bool_field(std::move(bool_field__arg)),
    __fbthrift_field_byte_field(std::move(byte_field__arg)),
    __fbthrift_field_short_field(std::move(short_field__arg)),
    __fbthrift_field_int_field(std::move(int_field__arg)),
    __fbthrift_field_long_field(std::move(long_field__arg)),
    __fbthrift_field_float_field(std::move(float_field__arg)),
    __fbthrift_field_double_field(std::move(double_field__arg)),
    __fbthrift_field_string_field(std::move(string_field__arg)),
    __fbthrift_field_binary_field(std::move(binary_field__arg)),
    __fbthrift_field_enum_field(std::move(enum_field__arg)),
    __fbthrift_field_list_field(std::move(list_field__arg)),
    __fbthrift_field_set_field(std::move(set_field__arg)),
    __fbthrift_field_map_field(std::move(map_field__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
  __isset.set(folly::index_constant<4>(), true);
  __isset.set(folly::index_constant<5>(), true);
  __isset.set(folly::index_constant<6>(), true);
  __isset.set(folly::index_constant<7>(), true);
  __isset.set(folly::index_constant<8>(), true);
  __isset.set(folly::index_constant<9>(), true);
  __isset.set(folly::index_constant<10>(), true);
  __isset.set(folly::index_constant<11>(), true);
  __isset.set(folly::index_constant<12>(), true);
}


void StructWithDefaultStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_bool_field = static_cast<bool>(true);
  this->__fbthrift_field_byte_field = static_cast<::std::int8_t>(1);
  this->__fbthrift_field_short_field = static_cast<::std::int16_t>(1);
  this->__fbthrift_field_int_field = static_cast<::std::int32_t>(1);
  this->__fbthrift_field_long_field = static_cast<::std::int64_t>(1);
  this->__fbthrift_field_float_field = static_cast<float>(1);
  this->__fbthrift_field_double_field = static_cast<double>(1);
  this->__fbthrift_field_string_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("1");
  this->__fbthrift_field_binary_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("1");
  this->__fbthrift_field_enum_field =  ::apache::thrift::test::MyEnum::ME1;
  this->__fbthrift_field_list_field.clear();
  this->__fbthrift_field_set_field.clear();
  this->__fbthrift_field_map_field.clear();
  __isset = {};
}

bool StructWithDefaultStruct::__fbthrift_is_empty() const {
  return false;
}

bool StructWithDefaultStruct::operator==(const StructWithDefaultStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.bool_field_ref() == rhs.bool_field_ref())) {
    return false;
  }
  if (!(lhs.byte_field_ref() == rhs.byte_field_ref())) {
    return false;
  }
  if (!(lhs.short_field_ref() == rhs.short_field_ref())) {
    return false;
  }
  if (!(lhs.int_field_ref() == rhs.int_field_ref())) {
    return false;
  }
  if (!(lhs.long_field_ref() == rhs.long_field_ref())) {
    return false;
  }
  if (!(lhs.float_field_ref() == rhs.float_field_ref())) {
    return false;
  }
  if (!(lhs.double_field_ref() == rhs.double_field_ref())) {
    return false;
  }
  if (!(lhs.string_field_ref() == rhs.string_field_ref())) {
    return false;
  }
  if (!apache::thrift::StringTraits<std::string>::isEqual(lhs.__fbthrift_field_binary_field, rhs.__fbthrift_field_binary_field)) {
    return false;
  }
  if (!(lhs.enum_field_ref() == rhs.enum_field_ref())) {
    return false;
  }
  if (!(lhs.list_field_ref() == rhs.list_field_ref())) {
    return false;
  }
  if (!(lhs.set_field_ref() == rhs.set_field_ref())) {
    return false;
  }
  if (!(lhs.map_field_ref() == rhs.map_field_ref())) {
    return false;
  }
  return true;
}

bool StructWithDefaultStruct::operator<(const StructWithDefaultStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.bool_field_ref() == rhs.bool_field_ref())) {
    return lhs.bool_field_ref() < rhs.bool_field_ref();
  }
  if (!(lhs.byte_field_ref() == rhs.byte_field_ref())) {
    return lhs.byte_field_ref() < rhs.byte_field_ref();
  }
  if (!(lhs.short_field_ref() == rhs.short_field_ref())) {
    return lhs.short_field_ref() < rhs.short_field_ref();
  }
  if (!(lhs.int_field_ref() == rhs.int_field_ref())) {
    return lhs.int_field_ref() < rhs.int_field_ref();
  }
  if (!(lhs.long_field_ref() == rhs.long_field_ref())) {
    return lhs.long_field_ref() < rhs.long_field_ref();
  }
  if (!(lhs.float_field_ref() == rhs.float_field_ref())) {
    return lhs.float_field_ref() < rhs.float_field_ref();
  }
  if (!(lhs.double_field_ref() == rhs.double_field_ref())) {
    return lhs.double_field_ref() < rhs.double_field_ref();
  }
  if (!(lhs.string_field_ref() == rhs.string_field_ref())) {
    return lhs.string_field_ref() < rhs.string_field_ref();
  }
  if (!apache::thrift::StringTraits<std::string>::isEqual(lhs.__fbthrift_field_binary_field, rhs.__fbthrift_field_binary_field)) {
    return apache::thrift::StringTraits<std::string>::isLess(lhs.__fbthrift_field_binary_field, rhs.__fbthrift_field_binary_field);
  }
  if (!(lhs.enum_field_ref() == rhs.enum_field_ref())) {
    return lhs.enum_field_ref() < rhs.enum_field_ref();
  }
  if (!(lhs.list_field_ref() == rhs.list_field_ref())) {
    return lhs.list_field_ref() < rhs.list_field_ref();
  }
  if (!(lhs.set_field_ref() == rhs.set_field_ref())) {
    return lhs.set_field_ref() < rhs.set_field_ref();
  }
  if (!(lhs.map_field_ref() == rhs.map_field_ref())) {
    return lhs.map_field_ref() < rhs.map_field_ref();
  }
  return false;
}

const ::std::vector<::std::int16_t>& StructWithDefaultStruct::get_list_field() const& {
  return __fbthrift_field_list_field;
}

::std::vector<::std::int16_t> StructWithDefaultStruct::get_list_field() && {
  return std::move(__fbthrift_field_list_field);
}

const ::std::set<::std::int16_t>& StructWithDefaultStruct::get_set_field() const& {
  return __fbthrift_field_set_field;
}

::std::set<::std::int16_t> StructWithDefaultStruct::get_set_field() && {
  return std::move(__fbthrift_field_set_field);
}

const ::std::map<::std::int16_t, ::std::int16_t>& StructWithDefaultStruct::get_map_field() const& {
  return __fbthrift_field_map_field;
}

::std::map<::std::int16_t, ::std::int16_t> StructWithDefaultStruct::get_map_field() && {
  return std::move(__fbthrift_field_map_field);
}


void swap(StructWithDefaultStruct& a, StructWithDefaultStruct& b) {
  using ::std::swap;
  swap(a.bool_field_ref().value(), b.bool_field_ref().value());
  swap(a.byte_field_ref().value(), b.byte_field_ref().value());
  swap(a.short_field_ref().value(), b.short_field_ref().value());
  swap(a.int_field_ref().value(), b.int_field_ref().value());
  swap(a.long_field_ref().value(), b.long_field_ref().value());
  swap(a.float_field_ref().value(), b.float_field_ref().value());
  swap(a.double_field_ref().value(), b.double_field_ref().value());
  swap(a.string_field_ref().value(), b.string_field_ref().value());
  swap(a.binary_field_ref().value(), b.binary_field_ref().value());
  swap(a.enum_field_ref().value(), b.enum_field_ref().value());
  swap(a.list_field_ref().value(), b.list_field_ref().value());
  swap(a.set_field_ref().value(), b.set_field_ref().value());
  swap(a.map_field_ref().value(), b.map_field_ref().value());
  swap(a.__isset, b.__isset);
}

template void StructWithDefaultStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t StructWithDefaultStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t StructWithDefaultStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithDefaultStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void StructWithDefaultStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t StructWithDefaultStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t StructWithDefaultStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t StructWithDefaultStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



}}} // apache::thrift::test

namespace apache { namespace thrift { namespace test { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}}}} // apache::thrift::test
