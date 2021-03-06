/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "flashlight/autograd/Utils.h"

#include "flashlight/common/Utils.h"

namespace fl {

bool allClose(
    const Variable& a,
    const Variable& b,
    double absTolerance /* = 1e-5 */) {
  return allClose(a.array(), b.array(), absTolerance);
}

} // namespace fl
