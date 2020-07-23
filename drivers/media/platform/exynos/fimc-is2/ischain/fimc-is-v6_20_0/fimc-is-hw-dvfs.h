/*
 * Samsung Exynos SoC series FIMC-IS driver
 *
 * exynos fimc-is2 core functions
 *
 * Copyright (c) 2017 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_HW_DVFS_H
#define FIMC_IS_HW_DVFS_H

#include "fimc-is-framemgr.h"
#include "fimc-is-groupmgr.h"

/* dvfs table idx ex.different dvfa table  pure bayer or dynamic bayer */
#define FIMC_IS_DVFS_TABLE_IDX_MAX 3
#define FIMC_IS_DVFS_CAPTURE_TICK (KEEP_FRAME_TICK_DEFAULT + 3)
#define FIMC_IS_DVFS_DUAL_CAPTURE_TICK (2 * FIMC_IS_DVFS_CAPTURE_TICK)

/* FIMC-IS DVFS SCENARIO enum */
enum FIMC_IS_SCENARIO_ID {
	FIMC_IS_SN_DEFAULT,
	FIMC_IS_SN_FRONT2_PREVIEW,
	FIMC_IS_SN_FRONT2_CAPTURE,
	FIMC_IS_SN_FRONT2_CAMCORDING,
	FIMC_IS_SN_FRONT2_CAMCORDING_CAPTURE,
	FIMC_IS_SN_FRONT_PREVIEW,
	FIMC_IS_SN_FRONT_CAPTURE,
	FIMC_IS_SN_FRONT_CAMCORDING,
	FIMC_IS_SN_FRONT_CAMCORDING_WHD,
	FIMC_IS_SN_FRONT_CAMCORDING_CAPTURE,
	FIMC_IS_SN_FRONT_CAMCORDING_WHD_CAPTURE,
	FIMC_IS_SN_FRONT_NO_PREPROC,
	FIMC_IS_SN_FRONT_VT1,
	FIMC_IS_SN_FRONT_VT2,
	FIMC_IS_SN_FRONT_VT4,
	FIMC_IS_SN_REAR2_PREVIEW_FHD,
	FIMC_IS_SN_REAR2_CAPTURE,
	FIMC_IS_SN_REAR2_CAMCORDING_FHD,
	FIMC_IS_SN_REAR2_CAMCORDING_FHD_CAPTURE,
	FIMC_IS_SN_REAR3_PREVIEW,
	FIMC_IS_SN_REAR3_CAPTURE,
	FIMC_IS_SN_REAR3_CAMCORDING,
	FIMC_IS_SN_REAR_PREVIEW_FHD,
	FIMC_IS_SN_REAR_PREVIEW_WHD,
	FIMC_IS_SN_REAR_PREVIEW_UHD,
	FIMC_IS_SN_REAR_PREVIEW_UHD_60FPS,
	FIMC_IS_SN_REAR_CAPTURE,
	FIMC_IS_SN_REAR_CAMCORDING_FHD,
	FIMC_IS_SN_REAR_CAMCORDING_WHD,
	FIMC_IS_SN_REAR_CAMCORDING_UHD,
	FIMC_IS_SN_REAR_CAMCORDING_UHD_60FPS,
	FIMC_IS_SN_REAR_CAMCORDING_FHD_CAPTURE,
	FIMC_IS_SN_REAR_CAMCORDING_WHD_CAPTURE,
	FIMC_IS_SN_REAR_CAMCORDING_UHD_CAPTURE,
	FIMC_IS_SN_SECURE_FRONT,
	FIMC_IS_SN_DUAL_PREVIEW,
	FIMC_IS_SN_DUAL_CAPTURE,
	FIMC_IS_SN_DUAL_CAMCORDING,
	FIMC_IS_SN_DUAL_CAMCORDING_CAPTURE,
	FIMC_IS_SN_PIP_PREVIEW,
	FIMC_IS_SN_PIP_CAPTURE,
	FIMC_IS_SN_PIP_CAMCORDING,
	FIMC_IS_SN_PIP_CAMCORDING_CAPTURE,
	FIMC_IS_SN_PREVIEW_HIGH_SPEED_FPS,
	FIMC_IS_SN_VIDEO_HIGH_SPEED_60FPS_SWVDIS,
	FIMC_IS_SN_VIDEO_HIGH_SPEED_60FPS,
	FIMC_IS_SN_VIDEO_HIGH_SPEED_120FPS,
	FIMC_IS_SN_VIDEO_HIGH_SPEED_240FPS,
	FIMC_IS_SN_EXT_REAR,
	FIMC_IS_SN_EXT_FRONT,
	FIMC_IS_SN_MAX,
	FIMC_IS_SN_END,
};

/* for assign staic / dynamic scenario check logic data */
int fimc_is_hw_dvfs_init(void *dvfs_data);

void fimc_is_dual_mode_update(struct fimc_is_device_ischain *device,
		struct fimc_is_group *group,
		struct fimc_is_frame *frame);
void fimc_is_dual_dvfs_update(struct fimc_is_device_ischain *device,
		struct fimc_is_group *group,
		struct fimc_is_frame *frame);
#endif /* FIMC_IS_HW_DVFS_H */
