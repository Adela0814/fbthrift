/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/isset_bitpacking/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::cpp2::Default> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field1_ref());
    case 2:
      return f(1, static_cast<T&&>(t).field2_ref());
    case 3:
      return f(2, static_cast<T&&>(t).field3_ref());
    case 4:
      return f(3, static_cast<T&&>(t).field4_ref());
    default:
      throwInvalidThriftId(fieldId, "::cpp2::Default");
    }
  }
};

template <>
struct VisitByFieldId<::cpp2::NonAtomic> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field1_ref());
    case 2:
      return f(1, static_cast<T&&>(t).field2_ref());
    case 3:
      return f(2, static_cast<T&&>(t).field3_ref());
    case 4:
      return f(3, static_cast<T&&>(t).field4_ref());
    default:
      throwInvalidThriftId(fieldId, "::cpp2::NonAtomic");
    }
  }
};

template <>
struct VisitByFieldId<::cpp2::Atomic> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field1_ref());
    case 2:
      return f(1, static_cast<T&&>(t).field2_ref());
    case 3:
      return f(2, static_cast<T&&>(t).field3_ref());
    case 4:
      return f(3, static_cast<T&&>(t).field4_ref());
    default:
      throwInvalidThriftId(fieldId, "::cpp2::Atomic");
    }
  }
};

template <>
struct VisitByFieldId<::cpp2::AtomicFoo> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field1_ref());
    case 2:
      return f(1, static_cast<T&&>(t).field2_ref());
    case 3:
      return f(2, static_cast<T&&>(t).field3_ref());
    case 4:
      return f(3, static_cast<T&&>(t).field4_ref());
    default:
      throwInvalidThriftId(fieldId, "::cpp2::AtomicFoo");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
