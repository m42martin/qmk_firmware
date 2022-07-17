/*
Copyright 2019 Andre Poley <andre.poley@mailbox.org>
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
#include QMK_KEYBOARD_H

#include "eeprom.h"
#include "keymap_contributions.h"
#include "keymap_us_international.h"

#include "m42martin.h"

// Add reconfigurable functions here, for keymap customization
// This allows for a global, userspace functions, and continued
// customization of the keymap.  Use _keymap instead of _user
// functions in the keymaps
enum planck_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // clang format-off

  [_BASE] = LAYOUT_planck_grid(
    ______________DVORAK_LEFT___1______________, ______________DVORAK_RIGHT__1______________    ___A____, ___O____, ___E____, ___U____, ___I____, _QUESTN_, _MINUS__, ___D____, ___H____, ___T____, ___N____, ___S____,
  ),

  [_LOWER] = LAYOUT_planck_grid(
    ______________LOWER__LEFT___1______________,  ______________LOWER__RIGHT__1______________
  ),

  [_RAISE] = LAYOUT_planck_grid(
    ______________RAISE__LEFT___1______________, ______________RAISE__RIGHT__1______________
  ),

  [_ADJUST] = LAYOUT_planck_grid(
    _____________ADJUST__LEFT___1______________, _____________ADJUST__RIGHT__1______________
  ),

  [_NUMPAD4] = LAYOUT_planck_grid(
    _____________NUMPAD__LEFT___1______________, _____________NUMPAD__RIGHT__1______________
  ),

  // clang format-on

};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0 }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {206,152,219 }, {206,152,219 }, {206,152,219 }, {206,152,219 }, {0,0,0       }, {0,0,0      }, {38,91,239   }, {0,0,0       }, {206,152,219 }, {206,152,219 }, {206,152,219 }, {206,152,219 }, {175,218,204 }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {95,255,213  }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0      }, {117,255,255 }, {8,255,213  }, {0,0,0      }, {175,218,204 }, {0,0,0       }, {43,5,255    }, {175,218,204 }, {117,255,255 }, {0,0,0       } },
    [1] = { {218,241,185 }, {218,241,185 }, {218,241,185 }, {218,241,185 }, {143,255,255 }, {0,0,0 }, {143,255,255 }, {143,255,255 }, {143,255,255 }, {143,255,255 }, {143,255,255 }, {124,218,204 }, {218,241,185 }, {218,241,185 }, {218,241,185 }, {218,241,185 }, {143,255,255 }, {0,0,0      }, {143,255,255 }, {143,255,255 }, {143,255,255 }, {143,255,255 }, {143,255,255 }, {124,218,204 }, {218,241,185 }, {218,241,185 }, {218,241,185 }, {218,241,185 }, {143,255,255 }, {143,255,255 }, {143,255,255 }, {143,255,255 }, {143,255,255 }, {143,255,255 }, {143,255,255 }, {84,218,204  }, {39,255,255  }, {39,255,255 }, {39,255,255  }, {0,0,0      }, {0,0,0      }, {0,0,0       }, {8,218,204   }, {8,218,204   }, {8,218,204   }, {8,218,204   }, {84,218,204  } },
    [2] = { {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0 }, {0,0,0       }, {129,117,225 }, {129,239,213 }, {186,188,179 }, {186,188,179 }, {186,188,179 }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0      }, {0,0,0       }, {129,117,225 }, {129,239,213 }, {186,188,179 }, {186,188,179 }, {186,188,179 }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {129,117,225 }, {129,239,213 }, {186,188,179 }, {186,188,179 }, {186,188,179 }, {226,159,203 }, {43,255,255 }, {43,255,255  }, {43,255,255 }, {0,0,0      }, {0,0,0       }, {129,117,225 }, {129,239,213 }, {0,0,0       }, {186,188,179 }, {0,0,0       } },
    [3] = { {63,218,204  }, {63,218,204  }, {63,218,204  }, {0,0,0       }, {0,0,0       }, {0,0,0 }, {0,0,0       }, {236,65,218  }, {175,75,213  }, {139,117,213 }, {164,243,108 }, {0,0,0       }, {88,218,204  }, {88,218,204  }, {88,218,204  }, {110,208,220 }, {0,0,0       }, {70,218,208 }, {127,110,213 }, {0,0,0       }, {175,231,213 }, {139,240,213 }, {0,0,0       }, {0,0,0       }, {4,255,255   }, {23,246,255  }, {66,246,239  }, {0,0,0       }, {0,0,0       }, {70,218,208  }, {126,220,242 }, {29,50,201   }, {0,0,0       }, {91,94,247   }, {0,0,0       }, {29,50,201   }, {4,255,255   }, {23,246,255 }, {66,246,239  }, {0,0,0      }, {0,0,0      }, {0,0,0       }, {0,0,0       }, {236,219,201 }, {91,233,236  }, {0,0,0       }, {0,0,0       } },
    [4] = { {44,202,255  }, {206,152,219 }, {206,152,219 }, {206,152,219 }, {1,227,242   }, {0,0,0 }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {44,202,255  }, {206,152,219 }, {206,152,219 }, {206,152,219 }, {0,0,0       }, {0,0,0      }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {44,202,255  }, {206,152,219 }, {206,152,219 }, {206,152,219 }, {41,247,242  }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {146,253,161 }, {0,0,0       }, {44,202,255  }, {41,247,242 }, {206,152,219 }, {41,247,242 }, {79,202,255 }, {0,0,0       }, {0,0,0       }, {0,0,0       }, {146,253,161 }, {146,253,161 }, {146,253,161 } },
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
  /* switch (keycode) { } */
  return true;
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

uint32_t layer_state_set_user(uint32_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

