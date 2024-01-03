/**
 ******************************************************************************
 * File     : Pwm.h
 * Date     : Oct 5, 2023
 ******************************************************************************
 *
 * Copyright (c) 2023, AeroVironment, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1.Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * 2.Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3.Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 **/

#ifndef PWM_H_
#define PWM_H_

#include <BoardConfig.h>


class Pwm
{
public:
	uint32_t init(TIM_HandleTypeDef *htim, uint16_t chan, uint16_t min, uint16_t center, uint16_t max)
	{
		htim_ 	= htim;
		chan_ 	= chan;
		min_ 		= min;
		center_ = center;
		max_ 		= max;

		disable();
		writeUs(center_);
		return DRIVER_OK;
	}
	void enable()
	{
		if(htim_)
		{
			HAL_TIM_PWM_Start(htim_, chan_);
		}
	}

	void disable()
	{
		if(htim_) HAL_TIM_PWM_Stop(htim_, chan_);
	}

	void writeUs(uint16_t us)
	{
		if(htim_)
		{
			us = (us<min_)?min_:us;
			us = (us>max_)?max_:us;
			__HAL_TIM_SET_COMPARE(htim_, chan_, us);
		}
	}
	void write(double val)
	{
		if(htim_)
		{
			val = (val<0)?0:val;
			val = (val>1)?1:val;
			uint16_t us = val*(double)(max_-min_)+min_;
			__HAL_TIM_SET_COMPARE(htim_, chan_, us);
		}
	}

private:
	TIM_HandleTypeDef *htim_;
	uint32_t chan_;
	uint16_t min_; // us
	uint16_t center_; // us
	uint16_t max_; // us
};

#endif /* PWM_H_ */
