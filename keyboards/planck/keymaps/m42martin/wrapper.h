
// #include "m42martin.h"


/* DVORAK
* ,-----------------------------------------------------------------------------------.
* |   '  |   ,  |   .  |   p  |   y  | tog1 | tog2 |   F  |   G  |   C  |   R  |   L  |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* |   A  |   O  |   E  |   U  |   I  |   ?  |   -  |   D  |   H  |   N  |   T  |   S  |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* |  m;  |   Q  |   J  |   K  |   X  |   ;  |  ENT |   B  |   M  |   W  |   V  |   Z  |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* | CTRL |  GUI | ALT  | BKSP | ESC  |    LEADER   | ENT  | SPCE | TAB  |  ALT | PRT  |
* `-----------------------------------------------------------------------------------'
*/
// #define _DVORAK_LEFT____1_    SN_QUOTE, _COMMA__, _DOT____, ___P____, ___Y____, _tog__1_
// #define _DVORAK_LEFT____2_    ___A____, ___O____, ___E____, ___U____, ___I____, _QUESTN_
// #define _DVORAK_LEFT____3_    _m_SEMI_, ___Q____, ___J____, ___K____, ___X____, _SMCOLN_
// #define _DVORAK_LEFT____4_    _L_CTRL_, _L_GUI__, _L_ALT__, _BKSPACE, _ESCAPE_, _LEADER_

// #define _DVORAK_RIGHT___1_    _tog__2_, ___F____, ___G____, ___C____, ___R____, ___L____
// #define _DVORAK_RIGHT___2_    _MINUS__, ___D____, ___H____, ___T____, ___N____, ___S____
// #define _DVORAK_RIGHT___3_    _ENTER__, ___B____, ___M____, ___W____, ___V____, ___Z____
// #define _DVORAK_RIGHT___4_    _N_O_P_E, _ENTER__, _SPACE__, _TAB____, _L_ALT__, _PRINT__

/* LOWER
* ,-----------------------------------------------------------------------------------.
* |  f1  |  f2  |  f3  |  f4  |   $  |      |   %  |   &  |   *  |   (  |   )  | HOME |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* |  f5  |  f6  |  f7  |  f8  |   #  |   ,  |   ~  |   _  |   +  |   [  |   ]  | END  |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* |  f9  | f10  | f11  | f12  |   @  |   !  |   ^  |   /  |   |  |   {  |   }  | PGUP |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* | CUT  | COPY | PSTE | BACK | FWD  |             |      |      |   <  |   >  | PGDN |
* `-----------------------------------------------------------------------------------'
*/
// #define _LOWER__LEFT____1_     _F_01___, _F_02___, _F_03___, _F_04___, _DOLLAR_, ________
// #define _LOWER__LEFT____2_     _F_05___, _F_06___, _F_07___, _F_08___, _HASH___, _COMMA__
// #define _LOWER__LEFT____3_     _F_09___, _F_10___, _F_11___, _F_12___, _AT_____, _EXCLM__
// #define _LOWER__LEFT____4_     _CUT____, _COPY___, _PASTE__, WWW_BACK, WWW_FWD_, ________

// #define _LOWER__RIGHT___1_     _PERCENT, _AMPRSND, _ASTERSK, _L_PAREN, _R_PAREN, _HOME___
// #define _LOWER__RIGHT___2_     _TILDE__, UNDRSCOR, _PLUS___, _L_SQUAR, _R_SQUAR, _END____
// #define _LOWER__RIGHT___3_     _CARET__, _SLASH__, _PIPE___, _L_CURLY, _R_CURLY, _PAGE_UP
// #define _LOWER__RIGHT___4_     _N_O_P_E, ________, ________, _L_ANGLE, _R_ANGLE, _PAGE_DN


/* RAISE
* ,-----------------------------------------------------------------------------------.
* |  "   |      |      |      |      | tog0 | tog4 |   (  |   )  |   &  |   *  |      |
* |------+------+------+------+------+-------------+------+------+------+------+------|
* |      |      |      |      |      |      |      |   [  |   ]  |   $  |   %  |  ^   |
* |------+------+------+------+------+------|------+------+------+------+------+------|
* |      |      |      |      |      |      |      |   {  |   }  |   !  |   @  |   #  |
* |------+------+------+------+------+------+------+------+------+------+------+------|
* | CUT  | COPY | PSTE |      |      |     ORYX    |   <  |   >  |      |      | PGDN |
* `-----------------------------------------------------------------------------------'
*/
// #define _RAISE__LEFT____1_     DB_QUOTE, ________, ________, ________, ________, _tog__0_
// #define _RAISE__LEFT____2_     ________, ________, ________, ________, ________, ________
// #define _RAISE__LEFT____3_     ________, ________, ________, ________, ________, ________
// #define _RAISE__LEFT____4_     _CUT____, _COPY___, _PASTE__, ________, ________, _ORYX___

// #define _RAISE__RIGHT___1_     _tog__4_, _L_PAREN, _R_PAREN, _AMPRSND, KC_ASTR,  ________
// #define _RAISE__RIGHT___2_     ________, _L_SQUAR, _R_SQUAR, _DOLLAR_, KC_PERC,  _CARET__,
// #define _RAISE__RIGHT___3_     ________, _L_CURLY, _R_CURLY, _EXCLM__, _AT_____, _HASH___,
// #define _RAISE__RIGHT___4_     _N_O_P_E, _L_ANGLE, _R_ANGLE, _PIPE___, _R_PAREN, _TILDE__

// #define _ADJUST__LEFT___1_     MUS_PREV, MUS_PLAY, VOLUME_U, ________, ________, _tog__0_
// #define _ADJUST__LEFT___2_     MUS_NEXT, MUS_MUTE, VOLUME_D, ________, ________, ________
// #define _ADJUST__LEFT___3_     MCROREC1, MCROSTOP, MCROEXE1, ________, ________, ________
// #define _ADJUST__LEFT___4_     MCROREC2, MCROSTOP, MCROEXE2, ________, ________, ________

// #define _ADJUST__RIGHT__1_     _tog__4_, RGB_TOGG, RGB_SLOW, RGB_BGTD, RGB_CNTD, RGB_HUED
// #define _ADJUST__RIGHT__2_     ________, RGB_MODE, RGB_FAST, RGB_BGTI, RGB_CNTI, RGB_HUEI
// #define _ADJUST__RIGHT__3_     ________, ________, ________, ________, ________, ________
// #define _ADJUST__RIGHT__4_     _N_O_P_E, ________, ________, ________, ________, ________


// #define _NUMPAD__LEFT___1_     NUM_DIVD, NUM_7___, NUM_8___, NUM_9___, _BKSPACE,  _tog_4__
// #define _NUMPAD__LEFT___2_     NUM_ASTR, NUM_4___, NUM_5___, NUM_6___, _ESCAPE_,  ________
// #define _NUMPAD__LEFT___3_     NUM_PLUS, NUM_1___, NUM_2___, NUM_3___, NUM_COMA,  ________
// #define _NUMPAD__LEFT___4_     NUM_MINU, NUM_DOT_, NUM_0___, NUM_EQUL, NUM_ENTER, ________

// #define _NUMPAD__RIGHT__1_     ________, ________, ________, ________, ________, ________
// #define _NUMPAD__RIGHT__2_     ________, ________, ________, ________, ________, ________
// #define _NUMPAD__RIGHT__3_     ________, ________, ________, ________, _UP____,  ________
// #define _NUMPAD__RIGHT__4_     _N_O_P_E, ________, ________, _LEFT___, _DOWN__,  _RIGHT__

// clang-format on
