/*
*
* Copyright 2015 Rockchip Electronics Co. LTD
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


#ifndef __HAL_H265D_API_H__
#define __HAL_H265D_API_H__

#include "rk_type.h"
#include "mpp_err.h"
#include "mpp_hal.h"



#ifdef __cplusplus
extern "C" {
#endif

extern const MppHalApi hal_api_h265d;

RK_S32 hal_h265d_init(void *hal, MppHalCfg *cfg);
RK_S32 hal_h265d_gen_regs(void *hal,  HalTask *syn);
RK_S32 hal_h265d_deinit(void *hal);
MPP_RET hal_h265d_start(void *hal, HalTask *task);
MPP_RET hal_h265d_wait(void *hal, HalTask *task);
MPP_RET hal_h265d_reset(void *hal);
MPP_RET hal_h265d_flush(void *hal);
MPP_RET hal_h265d_control(void *hal, RK_S32 cmd_type, void *param);

#ifdef __cplusplus
}
#endif

#endif /*__HAL_H265D_API_H__*/
