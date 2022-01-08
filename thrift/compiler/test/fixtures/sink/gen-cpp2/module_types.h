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
struct content;
struct content;
struct content;
struct sink;
struct reason;
struct reason;
struct reason;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_content
#define APACHE_THRIFT_ACCESSOR_content
APACHE_THRIFT_DEFINE_ACCESSOR(content);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_content
#define APACHE_THRIFT_ACCESSOR_content
APACHE_THRIFT_DEFINE_ACCESSOR(content);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_content
#define APACHE_THRIFT_ACCESSOR_content
APACHE_THRIFT_DEFINE_ACCESSOR(content);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_sink
#define APACHE_THRIFT_ACCESSOR_sink
APACHE_THRIFT_DEFINE_ACCESSOR(sink);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_reason
#define APACHE_THRIFT_ACCESSOR_reason
APACHE_THRIFT_DEFINE_ACCESSOR(reason);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_reason
#define APACHE_THRIFT_ACCESSOR_reason
APACHE_THRIFT_DEFINE_ACCESSOR(reason);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_reason
#define APACHE_THRIFT_ACCESSOR_reason
APACHE_THRIFT_DEFINE_ACCESSOR(reason);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class InitialResponse;
class FinalResponse;
class SinkPayload;
class CompatibleWithKeywordSink;
class InitialException;
class SinkException1;
class SinkException2;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
} // cpp2
namespace cpp2 {
class InitialResponse final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = InitialResponse;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  InitialResponse() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  InitialResponse(apache::thrift::FragileConstructor, ::std::string content__arg);

  InitialResponse(InitialResponse&&) noexcept;

  InitialResponse(const InitialResponse& src);


  InitialResponse& operator=(InitialResponse&&) noexcept;
  InitialResponse& operator=(const InitialResponse& src);
 private:
  ::std::string __fbthrift_field_content;
 private:
  apache::thrift::detail::isset_bitset<1, false> __isset;

 public:

  bool operator==(const InitialResponse&) const;
  bool operator<(const InitialResponse&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> content_ref() const& {
    return {this->__fbthrift_field_content, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> content_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_content), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> content_ref() & {
    return {this->__fbthrift_field_content, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> content_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_content), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> content() const& {
    return {this->__fbthrift_field_content, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> content() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_content), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> content() & {
    return {this->__fbthrift_field_content, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> content() && {
    return {static_cast<T&&>(this->__fbthrift_field_content), __isset.at(0), __isset.bit(0)};
  }

  const ::std::string& get_content() const& {
    return __fbthrift_field_content;
  }

  ::std::string get_content() && {
    return std::move(__fbthrift_field_content);
  }

  template <typename T_InitialResponse_content_struct_setter = ::std::string>
  [[deprecated("Use `FOO.content_ref() = BAR;` instead of `FOO.set_content(BAR);`")]]
  ::std::string& set_content(T_InitialResponse_content_struct_setter&& content_) {
    content_ref() = std::forward<T_InitialResponse_content_struct_setter>(content_);
    return __fbthrift_field_content;
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

  friend class ::apache::thrift::Cpp2Ops<InitialResponse>;
  friend void swap(InitialResponse& a, InitialResponse& b);
};

template <class Protocol_>
uint32_t InitialResponse::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class FinalResponse final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = FinalResponse;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  FinalResponse() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  FinalResponse(apache::thrift::FragileConstructor, ::std::string content__arg);

  FinalResponse(FinalResponse&&) noexcept;

  FinalResponse(const FinalResponse& src);


  FinalResponse& operator=(FinalResponse&&) noexcept;
  FinalResponse& operator=(const FinalResponse& src);
 private:
  ::std::string __fbthrift_field_content;
 private:
  apache::thrift::detail::isset_bitset<1, false> __isset;

 public:

  bool operator==(const FinalResponse&) const;
  bool operator<(const FinalResponse&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> content_ref() const& {
    return {this->__fbthrift_field_content, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> content_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_content), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> content_ref() & {
    return {this->__fbthrift_field_content, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> content_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_content), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> content() const& {
    return {this->__fbthrift_field_content, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> content() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_content), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> content() & {
    return {this->__fbthrift_field_content, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> content() && {
    return {static_cast<T&&>(this->__fbthrift_field_content), __isset.at(0), __isset.bit(0)};
  }

  const ::std::string& get_content() const& {
    return __fbthrift_field_content;
  }

  ::std::string get_content() && {
    return std::move(__fbthrift_field_content);
  }

  template <typename T_FinalResponse_content_struct_setter = ::std::string>
  [[deprecated("Use `FOO.content_ref() = BAR;` instead of `FOO.set_content(BAR);`")]]
  ::std::string& set_content(T_FinalResponse_content_struct_setter&& content_) {
    content_ref() = std::forward<T_FinalResponse_content_struct_setter>(content_);
    return __fbthrift_field_content;
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

  friend class ::apache::thrift::Cpp2Ops<FinalResponse>;
  friend void swap(FinalResponse& a, FinalResponse& b);
};

template <class Protocol_>
uint32_t FinalResponse::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class SinkPayload final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = SinkPayload;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  SinkPayload() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  SinkPayload(apache::thrift::FragileConstructor, ::std::string content__arg);

  SinkPayload(SinkPayload&&) noexcept;

  SinkPayload(const SinkPayload& src);


  SinkPayload& operator=(SinkPayload&&) noexcept;
  SinkPayload& operator=(const SinkPayload& src);
 private:
  ::std::string __fbthrift_field_content;
 private:
  apache::thrift::detail::isset_bitset<1, false> __isset;

 public:

  bool operator==(const SinkPayload&) const;
  bool operator<(const SinkPayload&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> content_ref() const& {
    return {this->__fbthrift_field_content, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> content_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_content), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> content_ref() & {
    return {this->__fbthrift_field_content, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> content_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_content), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> content() const& {
    return {this->__fbthrift_field_content, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> content() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_content), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> content() & {
    return {this->__fbthrift_field_content, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> content() && {
    return {static_cast<T&&>(this->__fbthrift_field_content), __isset.at(0), __isset.bit(0)};
  }

  const ::std::string& get_content() const& {
    return __fbthrift_field_content;
  }

  ::std::string get_content() && {
    return std::move(__fbthrift_field_content);
  }

  template <typename T_SinkPayload_content_struct_setter = ::std::string>
  [[deprecated("Use `FOO.content_ref() = BAR;` instead of `FOO.set_content(BAR);`")]]
  ::std::string& set_content(T_SinkPayload_content_struct_setter&& content_) {
    content_ref() = std::forward<T_SinkPayload_content_struct_setter>(content_);
    return __fbthrift_field_content;
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

  friend class ::apache::thrift::Cpp2Ops<SinkPayload>;
  friend void swap(SinkPayload& a, SinkPayload& b);
};

template <class Protocol_>
uint32_t SinkPayload::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class CompatibleWithKeywordSink final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = CompatibleWithKeywordSink;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  CompatibleWithKeywordSink() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  CompatibleWithKeywordSink(apache::thrift::FragileConstructor, ::std::string sink__arg);

  CompatibleWithKeywordSink(CompatibleWithKeywordSink&&) noexcept;

  CompatibleWithKeywordSink(const CompatibleWithKeywordSink& src);


  CompatibleWithKeywordSink& operator=(CompatibleWithKeywordSink&&) noexcept;
  CompatibleWithKeywordSink& operator=(const CompatibleWithKeywordSink& src);
 private:
  ::std::string __fbthrift_field_sink;
 private:
  apache::thrift::detail::isset_bitset<1, false> __isset;

 public:

  bool operator==(const CompatibleWithKeywordSink&) const;
  bool operator<(const CompatibleWithKeywordSink&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> sink_ref() const& {
    return {this->__fbthrift_field_sink, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> sink_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_sink), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> sink_ref() & {
    return {this->__fbthrift_field_sink, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> sink_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_sink), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> sink() const& {
    return {this->__fbthrift_field_sink, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> sink() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_sink), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> sink() & {
    return {this->__fbthrift_field_sink, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> sink() && {
    return {static_cast<T&&>(this->__fbthrift_field_sink), __isset.at(0), __isset.bit(0)};
  }

  const ::std::string& get_sink() const& {
    return __fbthrift_field_sink;
  }

  ::std::string get_sink() && {
    return std::move(__fbthrift_field_sink);
  }

  template <typename T_CompatibleWithKeywordSink_sink_struct_setter = ::std::string>
  [[deprecated("Use `FOO.sink_ref() = BAR;` instead of `FOO.set_sink(BAR);`")]]
  ::std::string& set_sink(T_CompatibleWithKeywordSink_sink_struct_setter&& sink_) {
    sink_ref() = std::forward<T_CompatibleWithKeywordSink_sink_struct_setter>(sink_);
    return __fbthrift_field_sink;
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

  friend class ::apache::thrift::Cpp2Ops<CompatibleWithKeywordSink>;
  friend void swap(CompatibleWithKeywordSink& a, CompatibleWithKeywordSink& b);
};

template <class Protocol_>
uint32_t CompatibleWithKeywordSink::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class FOLLY_EXPORT InitialException : public apache::thrift::TException {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;
  static constexpr ::apache::thrift::ExceptionKind __fbthrift_cpp2_gen_exception_kind =
         ::apache::thrift::ExceptionKind::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionSafety __fbthrift_cpp2_gen_exception_safety =
         ::apache::thrift::ExceptionSafety::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionBlame __fbthrift_cpp2_gen_exception_blame =
         ::apache::thrift::ExceptionBlame::UNSPECIFIED;

 public:
  using __fbthrift_cpp2_type = InitialException;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  InitialException();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  InitialException(apache::thrift::FragileConstructor, ::std::string reason__arg);

  InitialException(InitialException&&) noexcept;

  InitialException(const InitialException& src);


  InitialException& operator=(InitialException&&) noexcept;
  InitialException& operator=(const InitialException& src);

  ~InitialException() override;

 private:
  ::std::string reason;
 private:
  apache::thrift::detail::isset_bitset<1, false> __isset;

 public:

  bool operator==(const InitialException&) const;
  bool operator<(const InitialException&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> reason_ref() const& {
    return {this->reason, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> reason_ref() const&& {
    return {static_cast<const T&&>(this->reason), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> reason_ref() & {
    return {this->reason, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> reason_ref() && {
    return {static_cast<T&&>(this->reason), __isset.at(0), __isset.bit(0)};
  }

  const ::std::string& get_reason() const& {
    return reason;
  }

  ::std::string get_reason() && {
    return std::move(reason);
  }

  template <typename T_InitialException_reason_struct_setter = ::std::string>
  [[deprecated("Use `FOO.reason_ref() = BAR;` instead of `FOO.set_reason(BAR);`")]]
  ::std::string& set_reason(T_InitialException_reason_struct_setter&& reason_) {
    reason_ref() = std::forward<T_InitialException_reason_struct_setter>(reason_);
    return reason;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return "::cpp2::InitialException";
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<InitialException>;
  friend void swap(InitialException& a, InitialException& b);
};

template <class Protocol_>
uint32_t InitialException::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class FOLLY_EXPORT SinkException1 : public apache::thrift::TException {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;
  static constexpr ::apache::thrift::ExceptionKind __fbthrift_cpp2_gen_exception_kind =
         ::apache::thrift::ExceptionKind::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionSafety __fbthrift_cpp2_gen_exception_safety =
         ::apache::thrift::ExceptionSafety::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionBlame __fbthrift_cpp2_gen_exception_blame =
         ::apache::thrift::ExceptionBlame::UNSPECIFIED;

 public:
  using __fbthrift_cpp2_type = SinkException1;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  SinkException1();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  SinkException1(apache::thrift::FragileConstructor, ::std::string reason__arg);

  SinkException1(SinkException1&&) noexcept;

  SinkException1(const SinkException1& src);


  SinkException1& operator=(SinkException1&&) noexcept;
  SinkException1& operator=(const SinkException1& src);

  ~SinkException1() override;

 private:
  ::std::string reason;
 private:
  apache::thrift::detail::isset_bitset<1, false> __isset;

 public:

  bool operator==(const SinkException1&) const;
  bool operator<(const SinkException1&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> reason_ref() const& {
    return {this->reason, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> reason_ref() const&& {
    return {static_cast<const T&&>(this->reason), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> reason_ref() & {
    return {this->reason, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> reason_ref() && {
    return {static_cast<T&&>(this->reason), __isset.at(0), __isset.bit(0)};
  }

  const ::std::string& get_reason() const& {
    return reason;
  }

  ::std::string get_reason() && {
    return std::move(reason);
  }

  template <typename T_SinkException1_reason_struct_setter = ::std::string>
  [[deprecated("Use `FOO.reason_ref() = BAR;` instead of `FOO.set_reason(BAR);`")]]
  ::std::string& set_reason(T_SinkException1_reason_struct_setter&& reason_) {
    reason_ref() = std::forward<T_SinkException1_reason_struct_setter>(reason_);
    return reason;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return "::cpp2::SinkException1";
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<SinkException1>;
  friend void swap(SinkException1& a, SinkException1& b);
};

template <class Protocol_>
uint32_t SinkException1::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class FOLLY_EXPORT SinkException2 : public apache::thrift::TException {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;
  static constexpr ::apache::thrift::ExceptionKind __fbthrift_cpp2_gen_exception_kind =
         ::apache::thrift::ExceptionKind::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionSafety __fbthrift_cpp2_gen_exception_safety =
         ::apache::thrift::ExceptionSafety::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionBlame __fbthrift_cpp2_gen_exception_blame =
         ::apache::thrift::ExceptionBlame::UNSPECIFIED;

 public:
  using __fbthrift_cpp2_type = SinkException2;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  SinkException2();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  SinkException2(apache::thrift::FragileConstructor, ::std::int64_t reason__arg);

  SinkException2(SinkException2&&) noexcept;

  SinkException2(const SinkException2& src);


  SinkException2& operator=(SinkException2&&) noexcept;
  SinkException2& operator=(const SinkException2& src);

  ~SinkException2() override;

 private:
  ::std::int64_t reason;
 private:
  apache::thrift::detail::isset_bitset<1, false> __isset;

 public:

  bool operator==(const SinkException2&) const;
  bool operator<(const SinkException2&) const;

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> reason_ref() const& {
    return {this->reason, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> reason_ref() const&& {
    return {static_cast<const T&&>(this->reason), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> reason_ref() & {
    return {this->reason, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> reason_ref() && {
    return {static_cast<T&&>(this->reason), __isset.at(0), __isset.bit(0)};
  }

  ::std::int64_t get_reason() const {
    return reason;
  }

  [[deprecated("Use `FOO.reason_ref() = BAR;` instead of `FOO.set_reason(BAR);`")]]
  ::std::int64_t& set_reason(::std::int64_t reason_) {
    reason_ref() = reason_;
    return reason;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return "::cpp2::SinkException2";
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<SinkException2>;
  friend void swap(SinkException2& a, SinkException2& b);
};

template <class Protocol_>
uint32_t SinkException2::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
