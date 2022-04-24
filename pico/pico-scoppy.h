/*
 * This file is part of the scoppy-pico project.
 *
 * Copyright (C) 2021 FHDM Apps <scoppy@fhdm.xyz>
 * https://github.com/fhdm-dev
 *
 * scoppy-pico is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * scoppy-pico is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with scoppy-pico.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "pico-scoppy-pins.h"

#define MULTICORE_MSG_NONE 0
#define MULTICORE_MSG_RESTART_REQUIRED 1
#define MULTICORE_MSG_SAMPLING_STOPPED 2
#define MULTICORE_MSG_RESTART_SAMPLING 3

#define GPIO_TO_ADC_INPUT(gpio) ((gpio) - 26)

// Erik's customizations

#define VOLTAGE_RANGE_PIN_CH_0_BIT_1 18
#define VOLTAGE_RANGE_PIN_CH_0_BIT_0 19

#define VOLTAGE_RANGE_PIN_CH_1_BIT_1 24
#define VOLTAGE_RANGE_PIN_CH_1_BIT_0 25

#define LED_PIN 13

#define SIG_GEN_PWM_GPIO 20 // did not work, changed in CMakeLists

// ALSO in scoppy-pio.c set the sampling_pin_base / triggering_pin_base to 5
