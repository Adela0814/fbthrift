/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "module_fatal.h"

#include <fatal/type/enum.h>

#include <type_traits>

namespace test_cpp2 { namespace cpp_reflection {

namespace thrift_fatal_impl_detail {

struct enum1_enum_traits {
  using type = ::test_cpp2::cpp_reflection::enum1;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::enum1;

  struct str {
    using field0 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field0;
    using field1 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field1;
    using field2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field2;
  };

  using name_to_value = ::fatal::type_map<
    ::fatal::type_pair<
      str::field0,
      std::integral_constant<type, type::field0>
    >,
    ::fatal::type_pair<
      str::field1,
      std::integral_constant<type, type::field1>
    >,
    ::fatal::type_pair<
      str::field2,
      std::integral_constant<type, type::field2>
    >
  >;

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::field0: return "field0";
      case type::field1: return "field1";
      case type::field2: return "field2";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::enum1_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::fatal::type_map<
    >,
    static_cast<::apache::thrift::legacy_type_id_t>(4992076682252594856ull)
  >
);
namespace thrift_fatal_impl_detail {

struct enum2_enum_traits {
  using type = ::test_cpp2::cpp_reflection::enum2;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::enum2;

  struct str {
    using field0_2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field0_2;
    using field1_2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field1_2;
    using field2_2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field2_2;
  };

  using name_to_value = ::fatal::type_map<
    ::fatal::type_pair<
      str::field0_2,
      std::integral_constant<type, type::field0_2>
    >,
    ::fatal::type_pair<
      str::field1_2,
      std::integral_constant<type, type::field1_2>
    >,
    ::fatal::type_pair<
      str::field2_2,
      std::integral_constant<type, type::field2_2>
    >
  >;

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::field0_2: return "field0_2";
      case type::field1_2: return "field1_2";
      case type::field2_2: return "field2_2";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::enum2_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::fatal::type_map<
    >,
    static_cast<::apache::thrift::legacy_type_id_t>(6888467747342894920ull)
  >
);
namespace thrift_fatal_impl_detail {

struct enum3_enum_traits {
  using type = ::test_cpp2::cpp_reflection::enum3;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::enum3;

  struct str {
    using field0_3 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field0_3;
    using field1_3 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field1_3;
    using field2_3 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field2_3;
  };

  using name_to_value = ::fatal::type_map<
    ::fatal::type_pair<
      str::field0_3,
      std::integral_constant<type, type::field0_3>
    >,
    ::fatal::type_pair<
      str::field1_3,
      std::integral_constant<type, type::field1_3>
    >,
    ::fatal::type_pair<
      str::field2_3,
      std::integral_constant<type, type::field2_3>
    >
  >;

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::field0_3: return "field0_3";
      case type::field1_3: return "field1_3";
      case type::field2_3: return "field2_3";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::enum3_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::fatal::type_map<
      ::fatal::type_pair<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::_now_with_an_underscore,
        ::fatal::constant_sequence<char, '_', 'n', 'o', 'w', '.', 'w', 'i', 't', 'h', '.', 'a', 'n', '.', 'u', 'n', 'd', 'e', 'r', 's', 'c', 'o', 'r', 'e'>
      >,
      ::fatal::type_pair<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::another_there,
        ::fatal::constant_sequence<char, '.'>
      >,
      ::fatal::type_pair<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::duplicate_id_annotation_1,
        ::fatal::constant_sequence<char, 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'e', ' ', 'i', 'd', ' ', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n'>
      >,
      ::fatal::type_pair<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::duplicate_id_annotation_2,
        ::fatal::constant_sequence<char, 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'e', '.', 'i', 'd', '.', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n'>
      >,
      ::fatal::type_pair<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::one_here,
        ::fatal::constant_sequence<char, 'w', 'i', 't', 'h', ' ', 's', 'o', 'm', 'e', ' ', 'v', 'a', 'l', 'u', 'e', ' ', 'a', 's', 's', 'o', 'c', 'i', 'a', 't', 'e', 'd'>
      >,
      ::fatal::type_pair<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::yet_another,
        ::fatal::constant_sequence<char, 'a', 'n', 'd', ' ', 'y', 'e', 't', ' ', 'm', 'o', 'r', 'e', ' ', 't', 'e', 'x', 't', ' ', '-', ' ', 'i', 't', '\'', 's', ' ', 't', 'h', 'a', 't', ' ', 'e', 'a', 's', 'y'>
      >
    >,
    static_cast<::apache::thrift::legacy_type_id_t>(4626344424889780008ull)
  >
);

}} // test_cpp2::cpp_reflection