#pragma once
#define NO_MUSIC_MODE
#undef MIDI_BASIC
#undef ENCODER_RESOLUTION

/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

// reduce the size by disabling debugging if not needed
#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT

#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT
// #undef RGB_DISABLE_TIMEOUT
// #define RGB_DISABLE_TIMEOUT 300000
#define RGB_MATRIX_LEDMAPS_ENABLED

#define RGB_MATRIX_VAL_STEP 8
#define RGBLIGHT_DEFAULT_SPD 0
#define RGBLIGHT_EFFECT_BREATHE_MAX 128
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_LIMIT_VAL 255
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
//#define RGB_MATRIX_VAL_STEP

#define AUTO_SHIFT_TIMEOUT 195
// #define FIRMWARE_VERSION u8"BzYwW/WEaL3"
#define NO_AUTO_SHIFT_ALPHA
#define NO_AUTO_SHIFT_TAB
//#define RAW_USAGE_ID 0x61
//#define RAW_USAGE_PAGE 0xFF60
#define RGB_MATRIX_STARTUP_SPD 60
#define USB_SUSPEND_WAKEUP_DELAY 0

// reduce size of output bin file
// disable lock key support
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RSYNC_ENABLE
// tell the compiler not to reserve more unneeded for layers that won't be used
// #define LAYER_STATE_8BIT // or, #define LAYER_STATE_16BIT

#define LEADER_TIMEOUT 200
#define LEADER_PER_KEY_TIMING

#define RGBLIGHT_MODE_BREATHING 1
