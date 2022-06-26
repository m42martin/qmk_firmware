#pragma once

#ifdef AUDIO_ENABLE
#define STARTUP_SONG SONG(PLANCK_SOUND)
#endif

#define MIDI_BASIC

#define ENCODER_RESOLUTION 4

/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT
#undef RGB_DISABLE_TIMEOUT
#define RGB_DISABLE_TIMEOUT 300000

#undef RGB_MATRIX_VAL_STEP
#define RGB_MATRIX_VAL_STEP 8

#define USB_SUSPEND_WAKEUP_DELAY 0
#define AUTO_SHIFT_TIMEOUT 195
#define NO_AUTO_SHIFT_TAB
#define NO_AUTO_SHIFT_ALPHA
#define FIRMWARE_VERSION u8"BzYwW/WEaL3"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define RGB_MATRIX_STARTUP_SPD 60
