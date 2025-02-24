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

#include <folly/GLog.h>
#include <folly/synchronization/RelaxedAtomic.h>
#include <thrift/lib/cpp2/server/ServerFlags.h>

THRIFT_FLAG_DEFINE_bool(experimental_use_resource_pools, false);
FOLLY_GFLAGS_DEFINE_bool(
    thrift_experimental_use_resource_pools,
    false,
    "Use experimental resource pools");
THRIFT_FLAG_DEFINE_bool(allow_resource_pools_for_wildcards, false);
THRIFT_FLAG_DEFINE_bool(allow_wildcard_process_via_execute_request, true);

THRIFT_FLAG_DEFINE_bool(
    allow_resource_pools_set_thread_manager_from_executor, false);

namespace apache::thrift {

bool useResourcePoolsFlagsSet() {
  static bool gFlag = FLAGS_thrift_experimental_use_resource_pools;
  static bool thriftFlag = THRIFT_FLAG(experimental_use_resource_pools);
  return gFlag || thriftFlag;
}

} // namespace apache::thrift
