


#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define DEVICE_VER      0x0000
#define MANUFACTURER    JKattackk
#define PRODUCT         JKattpad

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x6465

/*enable encoder*/
//#define ENCODERS_PAD_A { D5 }
//#define ENCODERS_PAD_B { C5 }
//#define ENCODER_RESOLUTION 1

#define DEBOUNCE 5

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 5

#define MATRIX_ROW_PINS { C6, C7, B7, B6, B5, B4 }
#define MATRIX_COL_PINS { C2, D0, D1, D2, B0 }

#define ENCODERS_PAD_A { D5 }
#define ENCODERS_PAD_B { C4 }

#define DIODE_DIRECTION COL2ROW

#define USB_MAX_POWER_CONSUMPTION 100
