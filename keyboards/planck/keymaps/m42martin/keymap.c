#include QMK_KEYBOARD_H
#ifdef AUDIO_ENABLE
#include "muse.h"
#endif

#include "eeprom.h"
#include "keymap_contributions.h"
#include "keymap_us_international.h"

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
  _NUMPAD4,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define KC_PC_P KC_PC_PASTE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // clang format-off

  [_BASE] = LAYOUT_planck_grid(
    _SQUOT_,    _COMMA_,    __DOT__,	___P___,    ___Y___,    _tog_1_,        _tog_2_,    ___F___,    ___G___,    ___C___,    ___R___,    ___L___,
    ___A___,    ___O___,    ___E___,	___U___,    ___I___,    _QUEST_,        _MINUS_,    ___D___,    ___H___,    ___T___,    ___N___,    ___S___,
    _m_SEMI,	___Q___,	___J___,    ___K___,    ___X___,    _SCOLN_,        _ENTER_,    ___B___,    ___M___,    ___W___,    ___V___,    ___Z___,
    _LCTRL_,    _LGUI__,    _LALT__,	_BKSPC_,    __ESC__,    _LEADR_,	    _NO_OP_,    _ENTER_,    _SPACE_,    __TAB__,    _LALT__,    _PRINT_
  ),

  [_LOWER] = LAYOUT_planck_grid(
    __F01__,    __F02__,    __F03__,    __F04__,    _DOLLR_,    ________,       _PERCT_,    _AMPRS_,    _ASTER_,    KC_LPRN,    KC_RPRN,        KC_HOME,
    __F05__,    __F06__,    __F07__,    __F08__,    _HASH__,    _COMMA_,        _TILDE_,    _UNDRS_,    _PLUS__,    KC_LCBR,    KC_RCBR,        KC_END,
    __F09__,    __F10__,    __F11__,    __F12__,    __AT___,    _EXCLM_,        KC_CIRC,    _SLASH_,    _PIPE__,    KC_LBRACKET,KC_RBRACKET,    KC_PGUP,
    PC_CUT_,    PC_COPY,    PC_PSTE,    _WWW_B_,    _WWW_F_,    ________,       _NO_OP_,    ST_MACRO_0, ST_MACRO_1, ST_MACRO_2, ST_MACRO_3,     KC_PGDOWN
  ),

  [_RAISE] = LAYOUT_planck_grid(
    KC_DQUO,        ________,       ________,           ________,       ________,       TO(0),                  TT(4),              KC_LPRN,            KC_RPRN,        KC_AMPR,        KC_ASTR,        KC_LPRN,
    ________,       ________,       ________,           ________,       ________,       ________,               ________,           KC_LBRACKET,        KC_RBRACKET,    KC_DLR,         KC_PERC,        KC_CIRC,
    ________,       ________,       ________,           ________,       ________,       ST_MACRO_4,             ST_MACRO_5,         KC_LCBR,            KC_RCBR,        KC_EXLM,        KC_AT,          KC_HASH,
    WEBUSB_PAIR,    KC_PC_CUT,      KC_PC_COPY,         KC_PC_PASTE,    ________,       ________,               KC_NO,              KC_LABK,            KC_RABK,        KC_PIPE,        KC_RPRN,        KC_TILD
  ),

  [_ADJUST] = LAYOUT_planck_grid(
    AU_ON,          AU_OFF,         AU_TOG,             ________,       ________,       TO(0),                  TO(4),              RGB_TOG,            RGB_SPD,        RGB_VAD,        RGB_SAD,        HSV_186_176_220,
    MU_ON,          MU_OFF,         MU_TOG,             MU_MOD,         ________,       KC_MEDIA_NEXT_TRACK,    KC_AUDIO_VOL_DOWN,  TOGGLE_LAYER_COLOR, RGB_SPI,        RGB_VAI,        RGB_SAI,        HSV_141_246_216,
    DYN_REC_START1, DYN_REC_STOP,   DYN_MACRO_PLAY1,    ________,       ________,       KC_MEDIA_PLAY_PAUSE,    KC_AUDIO_VOL_UP,    ________,           RGB_SLD,        RGB_HUD,        ________,       HSV_118_221_236,
    DYN_REC_START2, DYN_REC_STOP,   DYN_MACRO_PLAY2,    ________,       ________,       ________,               KC_NO,              ________,           RGB_MOD,        RGB_HUI,        ________,       HSV_77_255_218
  ),

  [_NUMPAD4] = LAYOUT_planck_grid(
    KC_KP_SLASH,    KC_KP_7,        KC_KP_8,            KC_KP_9,        KC_BSPACE,      TO(0),                  ________,           ________,           ________,       ________        ________        ________,
    KC_KP_ASTERISK, KC_KP_4,        KC_KP_5,            KC_KP_6,        KC_ESCAPE,      ________,               ________,           ________,           ________,       ________        ________        ________,
    KC_KP_PLUS,     KC_KP_1,        KC_KP_2,            KC_KP_3,        KC_KP_COMMA,    ________,               ________,           ________,           ________,       ________        KC_UP,          ________,
    KC_KP_MINUS,    KC_KP_DOT,      KC_KP_0,            KC_EQUAL,       KC_KP_ENTER,    ________,               KC_NO,              ________,           ________,       KC_LEFT,        KC_DOWN,        KC_RIGHT
  ),

  // clang format-on

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
/*     case ST_MACRO_0:
 *     if (record->event.pressed) {
 *       SEND_STRING(SS_TAP(X_LALT) SS_DELAY(100) SS_TAP(X_5));
 *
 *     }
 *     break;
 *     case ST_MACRO_1:
 *     if (record->event.pressed) {
 *       SEND_STRING(SS_TAP(X_LALT) SS_DELAY(100) SS_TAP(X_0));
 *
 *     }
 *     break;
 *     case ST_MACRO_2:
 *     if (record->event.pressed) {
 *       SEND_STRING(SS_TAP(X_LALT) SS_DELAY(100) SS_TAP(X_9));
 *
 *     }
 *     break;
 *     case ST_MACRO_3:
 *     if (record->event.pressed) {
 *       SEND_STRING(SS_TAP(X_LALT) SS_DELAY(100) SS_TAP(X_8));
 *
 *     }
 *     break;
 *     case ST_MACRO_4:
 *     if (record->event.pressed) {
 *       SEND_STRING(SS_LALT(SS_TAP(X_LCTRL) SS_TAP(X_RALT) SS_TAP(X_9) SS_TAP(X_6) ));
 *
 *     }
 *     break;
 *     case ST_MACRO_5:
 *     if (record->event.pressed) {
 *       SEND_STRING(SS_LALT(SS_TAP(X_LCTRL) SS_TAP(X_RALT) SS_TAP(X_9) SS_TAP(X_6) ));
 *
 *     } */
  return true;
    }
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


LEADER_EXTERNS();

// Declare a boolean variable to keep track of whether any sequence
// will have been matched.
bool did_leader_succeed;

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    // Initialize did_leader_succeed as well as leading to be false
    did_leader_succeed = leading = false;

    // SEQ_ONE_KEY,
    // SEQ_TWO_KEYS,
    // SEQ_THREE_KEYS,
    // SEQ_FOUR_KEYS,
    // SEQ_FIVE_KEYS.

    // Replace the sequences below with your own sequences.
    SEQ_ONE_KEY(KC_T) {
      // When I press KC_LEAD and then T, this sends CTRL + SHIFT + T
      SEND_STRING(SS_LCTRL(SS_LSFT("t")));
    }
    // Note: This is not an array, you don't need to put any commas
    // or semicolons between sequences.
    SEQ_TWO_KEYS(KC_N, KC_T) {
      // When I press KC_LEAD and then N followed by T, this sends CTRL + T
      SEND_STRING(SS_LCTRL("t"));
    }

    leader_end();
  }
}

void leader_start(void) {
  // Add your code to run when pressing the leader key here
}

void leader_end(void) {
  // Add your code to run when a leader key sequence ends here
  if (did_leader_succeed) {
    // If any sequence was matched, did_leader_succeed will have
    // been set to true up in the matrix_scan_user function.
    // Put your code for a matched leader key sequence here.
  } else {
    // If no sequence was matched, did_leader_succeed will not
    // have been set to true anywhere, so we'll end up here.
    // Put your code for an unmatched leader key sequence here.
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
