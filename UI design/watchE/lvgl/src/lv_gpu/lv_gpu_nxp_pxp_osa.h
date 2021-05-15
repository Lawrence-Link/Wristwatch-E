/**
 * @file lv_gpu_nxp_pxp_osa.h
 *
 */

/**
 * SPDX-License-Identifier: MIT
 * Copyright 2020-2021 NXP
 */

#ifndef LV_SRC_LV_GPU_LV_GPU_NXP_PXP_OSA_H_
#define LV_SRC_LV_GPU_LV_GPU_NXP_PXP_OSA_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "lv_conf.h"

#if LV_USE_GPU_NXP_PXP && LV_USE_GPU_NXP_PXP_AUTO_INIT
extern lv_nxp_pxp_cfg_t pxp_default_cfg;
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LV_SRC_LV_GPU_LV_GPU_NXP_PXP_OSA_H_ */
