// Copyright 2018 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <blkctl/blkctl.h>

int main(int argc, char** argv) {
    return blkctl::BlkCtl::Execute(argc, argv);
}
