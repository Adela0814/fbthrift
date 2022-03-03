/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <type_traits>
#include <utility>

#include <thrift/lib/cpp2/op/Clear.h>

namespace apache {
namespace thrift {
namespace op {
namespace detail {

template <typename Patch, typename Derived>
class BasePatch {
 public:
  using value_type = std::decay_t<decltype(*std::declval<Patch>().assign())>;

  BasePatch() = default;
  explicit BasePatch(const Patch& patch) : patch_(patch) {}
  explicit BasePatch(Patch&& patch) noexcept : patch_(std::move(patch)) {}

  const Patch& get() const& { return patch_; }
  Patch&& get() && { return std::move(patch_); }

  void clear() { clearAnd(); }

  bool hasAssign() const noexcept { return patch_.assign().has_value(); }
  void assign(const value_type& val) { clearAnd().assign().emplace(val); }
  void assign(value_type&& val) { clearAnd().assign().emplace(std::move(val)); }

  Derived& operator=(const value_type& val) { return (assign(val), derived()); }
  Derived& operator=(value_type&& val) {
    assign(std::move(val));
    return derived();
  }

 protected:
  Patch patch_;

  ~BasePatch() = default; // abstract base class

  Patch& clearAnd() {
    op::clear<type::struct_t<Patch>>(patch_);
    return patch_;
  }

  value_type& assignOr(value_type& value) noexcept {
    return hasAssign() ? *patch_.assign() : value;
  }

  bool applyAssign(value_type& val) const {
    if (hasAssign()) {
      val = *patch_.assign();
      return true;
    }
    return false;
  }

  template <typename U>
  bool mergeAssign(U&& next) {
    if (next.hasAssign()) {
      patch_ = std::forward<U>(next).get();
      return true;
    }
    if (hasAssign()) {
      next.apply(*patch_.assign());
      return true;
    }
    return false;
  }

  Derived& derived() { return static_cast<Derived&>(*this); }
  const Derived& derived() const { return static_cast<Derived&>(*this); }
};

template <typename Patch>
class BoolPatch : public BasePatch<Patch, BoolPatch<Patch>> {
  using Base = BasePatch<Patch, BoolPatch>;
  using T = typename Base::value_type;
  using Base::applyAssign;
  using Base::mergeAssign;

 public:
  using Base::Base;
  using Base::hasAssign;
  using Base::operator=;

  bool empty() const noexcept { return !hasAssign(); }
  void apply(T& val) const noexcept { applyAssign(val); }
  template <typename U>
  void merge(U&& next) {
    mergeAssign(std::forward<U>(next));
  }
};

template <typename Patch>
class NumberPatch : public BasePatch<Patch, NumberPatch<Patch>> {
  using Base = BasePatch<Patch, NumberPatch>;
  using T = typename Base::value_type;
  using Base::applyAssign;
  using Base::mergeAssign;

 public:
  using Base::Base;
  using Base::hasAssign;
  using Base::operator=;

  bool empty() const noexcept { return !hasAssign(); }
  void apply(T& val) const noexcept { applyAssign(val); }
  template <typename U>
  void merge(U&& next) {
    mergeAssign(std::forward<U>(next));
  }
};

template <typename Patch>
class StringPatch : public BasePatch<Patch, StringPatch<Patch>> {
  using Base = BasePatch<Patch, StringPatch<Patch>>;
  using T = typename Base::value_type;
  using Base::applyAssign;
  using Base::mergeAssign;

 public:
  using Base::Base;
  using Base::hasAssign;
  using Base::operator=;

  bool empty() const noexcept { return !hasAssign(); }
  void apply(T& val) const noexcept { applyAssign(val); }
  template <typename U>
  void merge(U&& next) {
    mergeAssign(std::forward<U>(next));
  }
};

template <typename Patch>
class BinaryPatch : public BasePatch<Patch, BinaryPatch<Patch>> {
  using Base = BasePatch<Patch, BinaryPatch<Patch>>;
  using T = typename Base::value_type;
  using Base::applyAssign;
  using Base::mergeAssign;

 public:
  using Base::Base;
  using Base::hasAssign;
  using Base::operator=;

  bool empty() const noexcept { return !hasAssign(); }
  void apply(T& val) const noexcept { applyAssign(val); }
  template <typename U>
  void merge(U&& next) {
    mergeAssign(std::forward<U>(next));
  }
};

template <template <typename> class PatchType>
struct PatchAdapter {
  template <typename Patch>
  static decltype(auto) toThrift(Patch&& value) {
    return std::forward<Patch>(value).get();
  }

  template <typename Patch>
  static PatchType<Patch> fromThrift(Patch&& value) {
    return PatchType<Patch>{std::forward<Patch>(value)};
  }
};

// Adapter for all base types.
using BoolPatchAdapter = PatchAdapter<BoolPatch>;
using NumberPatchAdapter = PatchAdapter<NumberPatch>;
using StringPatchAdapter = PatchAdapter<StringPatch>;
using BinaryPatchAdapter = PatchAdapter<BinaryPatch>;

} // namespace detail
} // namespace op
} // namespace thrift
} // namespace apache