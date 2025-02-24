/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/patch/gen-cpp2/module_types.h"

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::test::fixtures::patch::InnerUnion::Type> {
  using type = ::test::fixtures::patch::InnerUnion::Type;
  static constexpr const std::size_t size = 1;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TEnumDataStorage<::test::fixtures::patch::MyUnion::Type> {
  using type = ::test::fixtures::patch::MyUnion::Type;
  static constexpr const std::size_t size = 3;
  static const std::array<type, size> values;
  static const std::array<folly::StringPiece, size> names;
};

template <> struct TStructDataStorage<::test::fixtures::patch::MyData> {
  static constexpr const std::size_t fields_size = 2;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::test::fixtures::patch::InnerUnion> {
  static constexpr const std::size_t fields_size = 1;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::test::fixtures::patch::MyUnion> {
  static constexpr const std::size_t fields_size = 3;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::test::fixtures::patch::MyStruct> {
  static constexpr const std::size_t fields_size = 24;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::test::fixtures::patch::MyDataFieldPatchStruct> {
  static constexpr const std::size_t fields_size = 2;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::test::fixtures::patch::MyDataPatchStruct> {
  static constexpr const std::size_t fields_size = 5;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::test::fixtures::patch::InnerUnionFieldPatchStruct> {
  static constexpr const std::size_t fields_size = 1;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::test::fixtures::patch::InnerUnionPatchStruct> {
  static constexpr const std::size_t fields_size = 5;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::test::fixtures::patch::MyUnionFieldPatchStruct> {
  static constexpr const std::size_t fields_size = 3;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::test::fixtures::patch::MyUnionPatchStruct> {
  static constexpr const std::size_t fields_size = 5;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::test::fixtures::patch::MyStructField21PatchStruct> {
  static constexpr const std::size_t fields_size = 4;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::test::fixtures::patch::MyStructField22PatchStruct> {
  static constexpr const std::size_t fields_size = 4;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::test::fixtures::patch::MyStructField23PatchStruct> {
  static constexpr const std::size_t fields_size = 4;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::test::fixtures::patch::MyStructFieldPatchStruct> {
  static constexpr const std::size_t fields_size = 24;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

template <> struct TStructDataStorage<::test::fixtures::patch::MyStructPatchStruct> {
  static constexpr const std::size_t fields_size = 5;
  static const std::array<folly::StringPiece, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;
};

}} // apache::thrift
