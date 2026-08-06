/* SPDX-License-Identifier: BSD-3-Clause */

#ifndef SPDK_NVMF_BREAKDOWN_H
#define SPDK_NVMF_BREAKDOWN_H

#include "spdk/stdinc.h"

#ifdef __cplusplus
extern "C" {
#endif

#if defined(SEMIRAID_ENABLE_LATENCY_BREAKDOWN)
uint64_t spdk_nvmf_breakdown_current_correlation(void);
#endif

#ifdef __cplusplus
}
#endif

#endif
