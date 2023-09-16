/*
Copyright 2019-2020 DMQ Design

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 5
//Matrix is 3x5 instead of 3x4, as the 3 encoders are wired into the matrix

#define MATRIX_ROW_PINS { F4, F5, F6 }
#define MATRIX_COL_PINS { F7, B1, B3, B2, B6 }
//#define DIRECT_PINS {D1}

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

//rotary encoder setup
#define ENCODERS_PAD_A { D0, D4, C6 }
#define ENCODERS_PAD_B { D7, B4, B5 }
#define ENCODER_RESOLUTION 4

//Data pin for the 3 RGB LEDs
#define RGB_DI_PIN D3
//Number of RGB LEDs
#define RGBLED_NUM 8

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
