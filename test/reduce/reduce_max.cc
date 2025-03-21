/*
 * Copyright Codeplay Software Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use these files except in compliance with the License.
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

// DO NOT MODIFY BY HAND
// This file was automatically generated by generate_reduce_tests.py.
// Results calculated using Tensorflow v2.11.0.

#include <gtest/gtest.h>
#include <vector>

#include "portdnn/reduce/operators.h"
#include "test/reduce/fixture.h"
#include "test/types/cartesian_product.h"
#include "test/types/kernel_data_types.h"
#include "test/types/test_backend_types.h"
#include "test/types/to_gtest_types.h"

using DataTypeList = sycldnn::types::KernelDataTypes;
using Backends = sycldnn::types::AllBackendTypes;

using TypeBackendPairs =
    sycldnn::types::CartesianProduct<DataTypeList, Backends>::type;

using GTestTypePair = sycldnn::types::ToGTestTypes<TypeBackendPairs>::type;

template <typename Pair>
using ReduceMax = ReduceFixture<Pair, sycldnn::reduce::Max>;
TYPED_TEST_SUITE(ReduceMax, GTestTypePair);
TYPED_TEST(ReduceMax, Batch1Outer1Inner1) {
  using DataType = typename TestFixture::DataType;
  const std::vector<DataType> exp_out = {1.};
  const int batches = 1;
  const int outer = 1;
  const int inner = 1;
  const DataType max_input_val = 2048.0;
  this->run(exp_out, batches, outer, inner, max_input_val);
}
TYPED_TEST(ReduceMax, Batch1Outer1Inner11) {
  using DataType = typename TestFixture::DataType;
  const std::vector<DataType> exp_out = {1., 2., 3., 4.,  5., 6.,
                                         7., 8., 9., 10., 11.};
  const int batches = 1;
  const int outer = 1;
  const int inner = 11;
  const DataType max_input_val = 2048.0;
  this->run(exp_out, batches, outer, inner, max_input_val);
}
TYPED_TEST(ReduceMax, Batch1Outer11Inner1) {
  using DataType = typename TestFixture::DataType;
  const std::vector<DataType> exp_out = {11.};
  const int batches = 1;
  const int outer = 11;
  const int inner = 1;
  const DataType max_input_val = 2048.0;
  this->run(exp_out, batches, outer, inner, max_input_val);
}
TYPED_TEST(ReduceMax, Batch1Outer11Inner11) {
  using DataType = typename TestFixture::DataType;
  const std::vector<DataType> exp_out = {111., 112., 113., 114., 115., 116.,
                                         117., 118., 119., 120., 121.};
  const int batches = 1;
  const int outer = 11;
  const int inner = 11;
  const DataType max_input_val = 2048.0;
  this->run(exp_out, batches, outer, inner, max_input_val);
}
TYPED_TEST(ReduceMax, Batch2Outer1Inner1) {
  using DataType = typename TestFixture::DataType;
  const std::vector<DataType> exp_out = {1., 2.};
  const int batches = 2;
  const int outer = 1;
  const int inner = 1;
  const DataType max_input_val = 2048.0;
  this->run(exp_out, batches, outer, inner, max_input_val);
}
TYPED_TEST(ReduceMax, Batch2Outer1Inner11) {
  using DataType = typename TestFixture::DataType;
  const std::vector<DataType> exp_out = {1.,  2.,  3.,  4.,  5.,  6.,  7.,  8.,
                                         9.,  10., 11., 12., 13., 14., 15., 16.,
                                         17., 18., 19., 20., 21., 22.};
  const int batches = 2;
  const int outer = 1;
  const int inner = 11;
  const DataType max_input_val = 2048.0;
  this->run(exp_out, batches, outer, inner, max_input_val);
}
TYPED_TEST(ReduceMax, Batch2Outer11Inner1) {
  using DataType = typename TestFixture::DataType;
  const std::vector<DataType> exp_out = {11., 22.};
  const int batches = 2;
  const int outer = 11;
  const int inner = 1;
  const DataType max_input_val = 2048.0;
  this->run(exp_out, batches, outer, inner, max_input_val);
}
TYPED_TEST(ReduceMax, Batch2Outer11Inner11) {
  using DataType = typename TestFixture::DataType;
  const std::vector<DataType> exp_out = {
      111., 112., 113., 114., 115., 116., 117., 118., 119., 120., 121.,
      232., 233., 234., 235., 236., 237., 238., 239., 240., 241., 242.};
  const int batches = 2;
  const int outer = 11;
  const int inner = 11;
  const DataType max_input_val = 2048.0;
  this->run(exp_out, batches, outer, inner, max_input_val);
}
