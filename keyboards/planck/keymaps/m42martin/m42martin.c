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
/* [   ]
* ,-----------------------------------------------------------------------------------.
* |      |      |      |      |      |      |      |      |      |      |      |      |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      |      |      |      |      |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* |      |      |      |      |      |      |      |      |      |      |      |      |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |      |      |      |      |      |             |      |      |      |      |      |
* `-----------------------------------------------------------------------------------'
*/

#include "eeprom.h"
#include "m42martin.h"
#include "wrapper.h"
#include "leader.h"
// #include "rgb_matrix_ledmaps.h"

// Add reconfigurable functions here, for keymap customization
// This allows for a global, userspace functions, and continued
// customization of the keymap.  Use _keymap instead of _user
// functions in the keymaps
enum planck_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
};

enum planck_layers {
  _BASE = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
  _NUMPAD,
};

#define tg__BASE TG(_BASE)
#define tg_LOWER TG(_LOWER)
#define tg_RAISE TG(_RAISE)
#define tg_ADJST TG(_ADJUST)
#define tg_NUMPD TG(_NUMPAD)
#define mo__BASE MO(_BASE)
#define mo_LOWER MO(_LOWER)
#define mo_RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// clang format-off

/* DVORAK
* ,-----------------------------------------------------------------------------------.
* |   '  |   ,  |   .  |   p  |   y  | BASE | LOWR |   F  |   G  |   C  |   R  |   L  |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* |   A  |   O  |   E  |   U  |   I  |   ?  |   -  |   D  |   H  |   N  |   T  |   S  |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* |  m;  |   Q  |   J  |   K  |   X  |   ;  |  ENT |   B  |   M  |   W  |   V  |   Z  |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* | CTRL |  GUI | ALT  | BKSP | ESC  |    LEADER   | ENT  | SPCE | TAB  |  ALT | PRT  |
* `-----------------------------------------------------------------------------------'
*/
[_BASE] = LAYOUT_planck_grid(
SN_QUOTE, _COMMA__, _DOT____, ___P____, ___Y____, tg_LOWER, tg_RAISE, ___F____, ___G____, ___C____, ___R____, ___L____,
___A____, ___O____, ___E____, ___U____, ___I____, _QUESTN_, _MINUS__, ___D____, ___H____, ___T____, ___N____, ___S____,
_m_SEMI_, ___Q____, ___J____, ___K____, ___X____, _SMCOLN_, _ENTER__, ___B____, ___M____, ___W____, ___V____, ___Z____,
_L_CTRL_, _L_GUI__, _L_ALT__, _BKSPACE, _ESCAPE_, _LEADER_, _N_O_P_E, _ENTER__, _SPACE__, _TAB____, _L_ALT__, _PRINT__
),
/* LOWER
* ,-----------------------------------------------------------------------------------.
* |  f1  |  f2  |  f3  |  f4  |   $  | BASE |   %  |   &  |   *  |   (  |   )  | HOME |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* |  f5  |  f6  |  f7  |  f8  |   #  |   ,  |   ~  |   _  |   +  |   [  |   ]  | END  |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* |  f9  | f10  | f11  | f12  |   @  |   !  |   ^  |   /  |   |  |   {  |   }  | PGUP |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* | CUT  | COPY | PSTE | BACK | FWD  |             |      |      |   <  |   >  | PGDN |
* `-----------------------------------------------------------------------------------'
*/
[_LOWER] = LAYOUT_planck_grid (
_F_01___, _F_02___, _F_03___, _F_04___, _DOLLAR_, mo__BASE, _PERCENT, _AMPRSND, _ASTERSK, _L_PAREN, _R_PAREN, _HOME___,
_F_05___, _F_06___, _F_07___, _F_08___, _HASH___, _COMMA__, _TILDE__, UNDRSCOR, _PLUS___, _L_SQUAR, _R_SQUAR, _END____,
_F_09___, _F_10___, _F_11___, _F_12___, _AT_____, _EXCLM__, _CARET__, _SLASH__, _PIPE___, _L_CURLY, _R_CURLY, _PAGE_UP,
_CUT____, _COPY___, _PASTE__, WWW_BACK, WWW_FWD_, ________, _N_O_P_E, ________, ________, _L_ANGLE, _R_ANGLE, _PAGE_DN
),

/* RAISE
* ,-----------------------------------------------------------------------------------.
* |  "   |      |      |      |      | BASE | ADJT |   (  |   )  |   &  |   *  |      |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* |      |      |      |      |      |      |      |   [  |   ]  |   $  |   %  |  ^   |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* |      |      |      |      |      |      |      |   {  |   }  |   !  |   @  |   #  |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* | CUT  | COPY | PSTE |      |      |     ORYX    |   <  |   >  |      |      | PGDN |
* `-----------------------------------------------------------------------------------'
*/
[_RAISE] = LAYOUT_planck_grid (
DB_QUOTE, ________, ________, ________, ________, tg__BASE, tg_ADJST, _L_PAREN, _R_PAREN, _AMPRSND, _ASTERSK, ________,
________, ________, ________, ________, ________, ________, ________, _L_SQUAR, _R_SQUAR, _DOLLAR_, _PERCENT, _CARET__,
________, ________, ________, ________, ________, ________, ________, _L_CURLY, _R_CURLY, _EXCLM__, _AT_____, _HASH___,
_CUT____, _COPY___, _PASTE__, ________, ________, _ORYX___, _N_O_P_E, _L_ANGLE, _R_ANGLE, _PIPE___, _R_PAREN, _TILDE__
),

/* ADJUST
* ,-----------------------------------------------------------------------------------.
* |  "   |      |      |      |      | BASE | NUMP |   (  |   )  |   &  |   *  |      |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* |      |      |      |      |      |      |      |   [  |   ]  |   $  |   %  |  ^   |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* |      |      |      |      |      |      |      |   {  |   }  |   !  |   @  |   #  |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* | CUT  | COPY | PSTE |      |      |     ORYX    |   <  |   >  |      |      | PGDN |
* `-----------------------------------------------------------------------------------'
*/
[_ADJUST] = LAYOUT_planck_grid (
MUS_PREV, MUS_PLAY, VOLUME_U, ________, ________, tg__BASE, tg_NUMPD, RGB_TOGG, RGB_SLOW, RGB_BGTD, RGB_CNTD, RGB_HUED,
MUS_NEXT, MUS_MUTE, VOLUME_D, ________, ________, ________, ________, RGB_MODE, RGB_FAST, RGB_BGTI, RGB_CNTI, RGB_HUEI,
MCROREC1, MCROSTOP, MCROEXE1, ________, ________, ________, ________, ________, ________, ________, ________, ________,
MCROREC2, MCROSTOP, MCROEXE2, ________, ________, ________, _N_O_P_E, ________, ________, ________, ________, ________
),

/* NUMPAD
* ,-----------------------------------------------------------------------------------.
* |  /   |   7  |   8  |   9  | bksp | BASE |      |      |      |      |      |      |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* |  *   |   4  |   5  |   6  |      |      |      |      |      |      |      |      |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* |  +   |   1  |   2  |   3  |      |      |      |      |      |      |   ^  |      |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* |  -   |   .  |   0  |   =  |  ENT |             |      |      |   <   |  V   |  >  |
* `-----------------------------------------------------------------------------------'
*/
[_NUMPAD] = LAYOUT_planck_grid (
NUM_DIVD, NUM_7___, NUM_8___, NUM_9___, _BKSPACE,  mo__BASE, ________, ________, ________, ________, ________,  ________,
NUM_ASTR, NUM_4___, NUM_5___, NUM_6___, _ESCAPE_,  ________, ________, ________, ________, ________, ________,  ________,
NUM_PLUS, NUM_1___, NUM_2___, NUM_3___, NUM_COMA,  ________, ________, ________, ________, ________, _UP_____,  ________,
NUM_MINU, NUM_DOT_, NUM_0___, NUM_EQUL, NUM_ENTR,  ________, _N_O_P_E, ________, ________, _LEFT___, _DOWN___,  _RIGHT__
),
  // clang format-on
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  /* switch (keycode) { } */
  return true;
}

// uint32_t layer_state_set_user(uint32_t state) {
    // return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }

// layer_state_t layer_state_set_user(layer_state_t state) {
  // return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }

#define COMBO_COUNT 0
