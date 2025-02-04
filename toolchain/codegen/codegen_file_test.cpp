// Part of the Carbon Language project, under the Apache License v2.0 with LLVM
// Exceptions. See /LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#include <filesystem>
#include <string>

#include "llvm/ADT/SmallVector.h"
#include "llvm/ADT/StringRef.h"
#include "toolchain/driver/driver_file_test_base.h"

namespace Carbon::Testing {
namespace {

class CodeGenFileTest : public DriverFileTestBase {
 public:
  using DriverFileTestBase::DriverFileTestBase;

  auto GetDefaultArgs() -> llvm::SmallVector<std::string> override {
    CARBON_FATAL() << "ARGS is always set in these tests";
  }
};

}  // namespace

auto RegisterFileTests(const llvm::SmallVector<std::filesystem::path>& paths)
    -> void {
  CodeGenFileTest::RegisterTests<CodeGenFileTest>("CodeGenFileTest", paths);
}

}  // namespace Carbon::Testing
