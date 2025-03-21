/*
 * Copyright Codeplay Software Ltd
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
#ifndef PORTDNN_TEST_TYPES_TO_GTEST_TYPES_H_
#define PORTDNN_TEST_TYPES_TO_GTEST_TYPES_H_

#include <gtest/gtest.h>

#include "test/types/type_list.h"

#include <type_traits>

namespace sycldnn {
namespace types {

template <typename T>
struct ToGTestTypes;
/** Convert a SYCL DNN TypeList into a gtest Types list. */
template <typename... Ts>
struct ToGTestTypes<TypeList<Ts...>> {
  using type = ::testing::Types<Ts...>;
};
static_assert(std::is_same<::testing::Types<char, int, unsigned, float, double>,
                           ToGTestTypes<TypeList<char, int, unsigned, float,
                                                 double>>::type>::value,
              "Error in converting to gtest type list");

}  // namespace types
}  // namespace sycldnn
#endif  // PORTDNN_TEST_TYPES_TO_GTEST_TYPES_H_
