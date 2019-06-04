/*
 * Copyright (c) 2019, NVIDIA CORPORATION.
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

#include <cuML_api.h>

#ifdef __cplusplus
extern "C" {
#endif

cumlError_t knn_search(
  const cumlHandle_t handle,
  float **input, int *size, int n_params, int D,
  const float *search_items, int n,
  long *res_I, float *res_D, int k
);

cumlError_t chunk_host_array(
  const cumlHandle_t handle,
  const float *ptr, int n, int D,
  int* devices, float **output, int *sizes, int n_chunks,
);

#ifdef __cplusplus
}
#endif
