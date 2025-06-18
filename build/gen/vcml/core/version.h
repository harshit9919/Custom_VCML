/******************************************************************************
 *                                                                            *
 * Copyright (C) 2022 MachineWare GmbH                                        *
 * All Rights Reserved                                                        *
 *                                                                            *
 * This is work is licensed under the terms described in the LICENSE file     *
 * found in the root directory of this source tree.                           *
 *                                                                            *
 ******************************************************************************/

#ifndef VCML_VERSION_H
#define VCML_VERSION_H

#define VCML_VERSION_MAJOR    2025
#define VCML_VERSION_MINOR    6
#define VCML_VERSION_PATCH    4

#define VCML_GIT_REV          "90e2fe4c42221f62d75cbee1c078d2f4e89604f0-dirty"
#define VCML_GIT_REV_SHORT    "90e2fe4c-dirty"

#define VCML_VERSION          20250604
#define VCML_VERSION_STRING   "vcml-2025.06.04-90e2fe4c-dirty"

#include <mwr.h>

MWR_DECLARE_MODULE(VCML, "vcml", "Apache-2.0");

#endif
