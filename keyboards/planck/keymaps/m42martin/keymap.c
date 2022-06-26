#include QMK_KEYBOARD_H
#ifdef AUDIO_ENABLE
#include "muse.h"
#endif
#include "eeprom.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

enum planck_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  HSV_186_176_220,
  HSV_141_246_216,
  HSV_118_221_236,
  HSV_77_255_218,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
};


enum planck_layers {
  _BASE,
  _LOWER,
  _RAISE,
  _ADJUST,
  _LAYER4,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_planck_grid(
    KC_QUOTE,       KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           TG(1),          TG(2),          KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           
    KC_A,           KC_O,           KC_E,           KC_U,           KC_I,           KC_QUES,        KC_MINUS,       KC_D,           KC_H,           KC_T,           KC_N,           KC_S,           
    MT(MOD_LSFT, KC_SCOLON),KC_Q,           KC_J,           KC_K,           KC_X,           KC_SCOLON,      KC_ENTER,       KC_B,           KC_M,           KC_W,           KC_V,           KC_Z,           
    KC_LCTRL,       KC_LGUI,        KC_LALT,        KC_BSPACE,      KC_ESCAPE,      OSM(MOD_LSFT),  KC_NO,          KC_ENTER,       KC_SPACE,       KC_TAB,         KC_LALT,        KC_PSCREEN
  ),

  [_LOWER] = LAYOUT_planck_grid(
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_DLR,         KC_TRANSPARENT, KC_PERC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_HOME,        
    KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_HASH,        KC_COMMA,       KC_TILD,        KC_UNDS,        KC_PLUS,        KC_LCBR,        KC_RCBR,        KC_END,         
    KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_AT,          KC_EXLM,        KC_CIRC,        KC_SLASH,       KC_PIPE,        KC_LBRACKET,    KC_RBRACKET,    KC_PGUP,        
    KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_WWW_BACK,    KC_WWW_FORWARD, KC_TRANSPARENT, KC_NO,          ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     KC_PGDOWN
  ),

  [_RAISE] = LAYOUT_planck_grid(
    KC_DQUO,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          TT(4),          KC_LPRN,        KC_RPRN,        KC_AMPR,        KC_ASTR,        KC_LPRN,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRACKET,    KC_RBRACKET,    KC_DLR,         KC_PERC,        KC_CIRC,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_4,     ST_MACRO_5,     KC_LCBR,        KC_RCBR,        KC_EXLM,        KC_AT,          KC_HASH,        
    WEBUSB_PAIR,    KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_LABK,        KC_RABK,        KC_PIPE,        KC_RPRN,        KC_TILD
  ),

  [_ADJUST] = LAYOUT_planck_grid(
    AU_ON,          AU_OFF,         AU_TOG,         KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          TO(4),          RGB_TOG,        RGB_SPD,        RGB_VAD,        RGB_SAD,        HSV_186_176_220,
    MU_ON,          MU_OFF,         MU_TOG,         MU_MOD,         KC_TRANSPARENT, KC_MEDIA_NEXT_TRACK,KC_AUDIO_VOL_DOWN,TOGGLE_LAYER_COLOR,RGB_SPI,        RGB_VAI,        RGB_SAI,        HSV_141_246_216,
    DYN_REC_START1, DYN_REC_STOP,   DYN_MACRO_PLAY1,KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,KC_AUDIO_VOL_UP,KC_TRANSPARENT, RGB_SLD,        RGB_HUD,        KC_TRANSPARENT, HSV_118_221_236,
    DYN_REC_START2, DYN_REC_STOP,   DYN_MACRO_PLAY2,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, RGB_MOD,        RGB_HUI,        KC_TRANSPARENT, HSV_77_255_218
  ),

  [_LAYER4] = LAYOUT_planck_grid(
    KC_KP_SLASH,    KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_BSPACE,      TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_KP_ASTERISK, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_KP_PLUS,     KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_COMMA,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, 
    KC_KP_MINUS,    KC_KP_DOT,      KC_KP_0,        KC_EQUAL,       KC_KP_ENTER,    KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT
  ),

};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {206,152,219}, {206,152,219}, {206,152,219}, {206,152,219}, {0,0,0}, {0,0,0}, {38,91,239}, {0,0,0}, {206,152,219}, {206,152,219}, {206,152,219}, {206,152,219}, {175,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {95,255,213}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {117,255,255}, {8,255,213}, {0,0,0}, {175,218,204}, {0,0,0}, {43,5,255}, {175,218,204}, {117,255,255}, {0,0,0} },

    [1] = { {218,241,185}, {218,241,185}, {218,241,185}, {218,241,185}, {143,255,255}, {0,0,0}, {143,255,255}, {143,255,255}, {143,255,255}, {143,255,255}, {143,255,255}, {124,218,204}, {218,241,185}, {218,241,185}, {218,241,185}, {218,241,185}, {143,255,255}, {0,0,0}, {143,255,255}, {143,255,255}, {143,255,255}, {143,255,255}, {143,255,255}, {124,218,204}, {218,241,185}, {218,241,185}, {218,241,185}, {218,241,185}, {143,255,255}, {143,255,255}, {143,255,255}, {143,255,255}, {143,255,255}, {143,255,255}, {143,255,255}, {84,218,204}, {39,255,255}, {39,255,255}, {39,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {8,218,204}, {8,218,204}, {8,218,204}, {8,218,204}, {84,218,204} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,117,225}, {129,239,213}, {186,188,179}, {186,188,179}, {186,188,179}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,117,225}, {129,239,213}, {186,188,179}, {186,188,179}, {186,188,179}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,117,225}, {129,239,213}, {186,188,179}, {186,188,179}, {186,188,179}, {226,159,203}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {129,117,225}, {129,239,213}, {0,0,0}, {186,188,179}, {0,0,0} },

    [3] = { {63,218,204}, {63,218,204}, {63,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {236,65,218}, {175,75,213}, {139,117,213}, {164,243,108}, {0,0,0}, {88,218,204}, {88,218,204}, {88,218,204}, {110,208,220}, {0,0,0}, {70,218,208}, {127,110,213}, {0,0,0}, {175,231,213}, {139,240,213}, {0,0,0}, {0,0,0}, {4,255,255}, {23,246,255}, {66,246,239}, {0,0,0}, {0,0,0}, {70,218,208}, {126,220,242}, {29,50,201}, {0,0,0}, {91,94,247}, {0,0,0}, {29,50,201}, {4,255,255}, {23,246,255}, {66,246,239}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {236,219,201}, {91,233,236}, {0,0,0}, {0,0,0} },

    [4] = { {44,202,255}, {206,152,219}, {206,152,219}, {206,152,219}, {1,227,242}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {44,202,255}, {206,152,219}, {206,152,219}, {206,152,219}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {44,202,255}, {206,152,219}, {206,152,219}, {206,152,219}, {41,247,242}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {146,253,161}, {0,0,0}, {44,202,255}, {41,247,242}, {206,152,219}, {41,247,242}, {79,202,255}, {0,0,0}, {0,0,0}, {0,0,0}, {146,253,161}, {146,253,161}, {146,253,161} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LALT) SS_DELAY(100) SS_TAP(X_5));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LALT) SS_DELAY(100) SS_TAP(X_0));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LALT) SS_DELAY(100) SS_TAP(X_9));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LALT) SS_DELAY(100) SS_TAP(X_8));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_LCTRL) SS_TAP(X_RALT) SS_TAP(X_9) SS_TAP(X_6) ));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_LCTRL) SS_TAP(X_RALT) SS_TAP(X_9) SS_TAP(X_6) ));

    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_186_176_220:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(186,176,220);
      }
      return false;
    case HSV_141_246_216:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(141,246,216);
      }
      return false;
    case HSV_118_221_236:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(118,221,236);
      }
      return false;
    case HSV_77_255_218:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(77,255,218);
      }
      return false;
  }
  return true;
}

#ifdef AUDIO_ENABLE
bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update(bool clockwise) {
    if (muse_mode) {
        if (IS_LAYER_ON(_RAISE)) {
            if (clockwise) {
                muse_offset++;
            } else {
                muse_offset--;
            }
        } else {
            if (clockwise) {
                muse_tempo+=1;
            } else {
                muse_tempo-=1;
            }
        }
    } else {
        if (clockwise) {
        #ifdef MOUSEKEY_ENABLE
            register_code(KC_MS_WH_DOWN);
            unregister_code(KC_MS_WH_DOWN);
        #else
            register_code(KC_PGDN);
            unregister_code(KC_PGDN);
        #endif
        } else {
        #ifdef MOUSEKEY_ENABLE
            register_code(KC_MS_WH_UP);
            unregister_code(KC_MS_WH_UP);
        #else
            register_code(KC_PGUP);
            unregister_code(KC_PGUP);
        #endif
        }
    }
}

void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
    switch (keycode) {
    case RAISE:
    case LOWER:
        return false;
    default:
        return true;
    }
}
#endif

uint32_t layer_state_set_user(uint32_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}


