/*
 * Copyright (C) 2019 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TNT_UTILS_APILEVEL_H
#define TNT_UTILS_APILEVEL_H

#include <utils/compiler.h>

namespace utils {

/**
 * Returns this platform's API level. On Android this function will return
 * the API level as defined by the SDK API level version. If a platform does
 * not have an API level, this function returns 0.
 */
UTILS_PUBLIC
int api_level();

} // namespace utils

#endif // TNT_UTILS_APILEVEL_H
