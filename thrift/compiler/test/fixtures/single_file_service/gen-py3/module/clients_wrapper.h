/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#if __has_include(<src/gen-cpp2/A.h>)
#include <src/gen-cpp2/A.h>
#else
#include <src/gen-cpp2/module_clients.h>
#endif
#if __has_include(<src/gen-cpp2/B.h>)
#include <src/gen-cpp2/B.h>
#else
#include <src/gen-cpp2/module_clients.h>
#endif
#if __has_include(<src/gen-cpp2/C.h>)
#include <src/gen-cpp2/C.h>
#else
#include <src/gen-cpp2/module_clients.h>
#endif

#include <folly/futures/Future.h>
#include <folly/futures/Promise.h>
#include <folly/Unit.h>
#include <thrift/lib/py3/clientcallbacks.h>
#include <thrift/lib/py3/client_wrapper.h>

#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <set>
#include <vector>

namespace cpp2 {

class AClientWrapper : public ::thrift::py3::ClientWrapper {
  public:
    using ::thrift::py3::ClientWrapper::ClientWrapper;

    folly::Future<::cpp2::Foo> foo(
      apache::thrift::RpcOptions& rpcOptions);

    class IInteractionWrapper : public ClientWrapper {
      public:
        IInteractionWrapper(
          std::unique_ptr<apache::thrift::GeneratedAsyncClient> async_client,
           std::shared_ptr<apache::thrift::RequestChannel> channel)
           : ClientWrapper(std::move(async_client), channel) {}

        folly::Future<folly::Unit> interact(
          apache::thrift::RpcOptions& rpcOptions);
    };
    folly::Future<std::unique_ptr<::thrift::py3::ClientWrapper>> createI();
};


class BClientWrapper : public ::cpp2::AClientWrapper {
  public:
    using ::cpp2::AClientWrapper::AClientWrapper;

    folly::Future<folly::Unit> bar(
      apache::thrift::RpcOptions& rpcOptions,
      ::cpp2::Foo arg_foo);
    folly::Future<apache::thrift::ClientBufferedStream<int32_t>> stream_stuff(
      apache::thrift::RpcOptions& rpcOptions);
};


class CClientWrapper : public ::thrift::py3::ClientWrapper {
  public:
    using ::thrift::py3::ClientWrapper::ClientWrapper;


    class IInteractionWrapper : public ClientWrapper {
      public:
        IInteractionWrapper(
          std::unique_ptr<apache::thrift::GeneratedAsyncClient> async_client,
           std::shared_ptr<apache::thrift::RequestChannel> channel)
           : ClientWrapper(std::move(async_client), channel) {}

        folly::Future<folly::Unit> interact(
          apache::thrift::RpcOptions& rpcOptions);
    };
    folly::Future<std::unique_ptr<::thrift::py3::ClientWrapper>> createI();
};


} // namespace cpp2
