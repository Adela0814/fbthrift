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

#include <thrift/conformance/GTestHarness.h>
#include <thrift/conformance/Utils.h>
#include <thrift/conformance/if/gen-cpp2/RPCConformanceServiceAsyncClient.h>

namespace apache::thrift::conformance {

// Register the tests with gtest.
THRIFT_CONFORMANCE_TEST(
    getSuites(),
    getServers<Client<RPCConformanceService>>(ChannelType::Rocket),
    getNonconforming());

} // namespace apache::thrift::conformance
