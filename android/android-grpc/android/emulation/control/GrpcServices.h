// Copyright (C) 2019 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <memory>  // for unique_ptr
#include <string>
#include "android/console.h"  // for AndroidConsoleAgents

namespace android {
namespace emulation {

namespace control {
class EmulatorControllerService;
class RtcBridge;

class GrpcServices {
public:
    // Returns the port or -1 if the service didn't start.
    static int setup(int port,
                     const AndroidConsoleAgents* const consoleAgents,
                     const char* waterfall,
                     const char* turnCfg);

    static void teardown();

private:
    static std::unique_ptr<EmulatorControllerService> g_controler_service;
    static std::unique_ptr<RtcBridge> g_rtc_bridge;

    static const std::string kCertFileName;
    static const std::string kPrivateKeyFileName;
};
}  // namespace control
}  // namespace emulation
}  // namespace android