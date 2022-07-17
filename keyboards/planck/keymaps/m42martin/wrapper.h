#pragma once
#include "keycodes.h"

/*
Since our quirky block definitions are basically a list of comma separated
arguments, we need a wrapper in order for these definitions to be
expanded before being used as arguments to the LAYOUT_xxx macro.
*/

#if (!defined(LAYOUT) && defined(KEYMAP))
#  define LAYOUT KEYMAP
#endif

// clang-format off

#define ______________DVORAK_LEFT___1______________    SN_QUOTE, _COMMA__, _DOT____, ___P____, ___Y____, _tog__1_
#define ______________DVORAK_LEFT___2______________    ___A____, ___O____, ___E____, ___U____, ___I____, _QUESTN_
#define ______________DVORAK_LEFT___3______________    _m_SEMI_, ___Q____, ___J____, ___K____, ___X____, _SMCOLN_
#define ______________DVORAK_LEFT___4______________    _L_CTRL_, _L_GUI__, _L_ALT__, _BKSPACE, _ESCAPE_, _LEADER_


#define ______________DVORAK_RIGHT__1______________    _tog__2_, ___F____, ___G____, ___C____, ___R____, ___L____
#define ______________DVORAK_RIGHT__2______________    _MINUS__, ___D____, ___H____, ___T____, ___N____, ___S____
#define ______________DVORAK_RIGHT__3______________    _ENTER__, ___B____, ___M____, ___W____, ___V____, ___Z____
#define ______________DVORAK_RIGHT__4______________     _N_O_P_E, _ENTER__, _SPACE__, _TAB____, _L_ALT__, _PRINT__



#define ______________LOWER__LEFT___1______________     _F_01___, _F_02___, _F_03___, _F_04___, _DOLLAR_, ________
#define ______________LOWER__LEFT___2______________     _F_05___, _F_06___, _F_07___, _F_08___, _HASH___, _COMMA__
#define ______________LOWER__LEFT___3______________     _F_09___, _F_10___, _F_11___, _F_12___, _AT_____, _EXCLM__
#define ______________LOWER__LEFT___4______________     _CUT____, _COPY___, _PASTE__, WWW_BACK, WWW_FWD_, ________


#define ______________LOWER__RIGHT__1______________     _PERCENT, _AMPRSND, _ASTERSK, _L_PAREN, _R_PAREN, _HOME___
#define ______________LOWER__RIGHT__2______________     _TILDE__, UNDRSCOR, _PLUS___, _L_CURLY, _R_CURLY, _END____
#define ______________LOWER__RIGHT__3______________     _CARET__, _SLASH__, _PIPE___, _L_SQUAR, _R_SQUAR, _PAGE_UP
#define ______________LOWER__RIGHT__4______________     _N_O_P_E, ________, ________, ________, ________, _PAGE_DN



#define ______________RAISE__LEFT___1______________     _DB_QUOTE, ________, ________, ________, ________, _tog__0_
#define ______________RAISE__LEFT___2______________     ________, ________, ________, ________, ________, ________
#define ______________RAISE__LEFT___3______________     ________, ________, ________, ________, ________, ________
#define ______________RAISE__LEFT___4______________     _ORYX___, _CUT____, _COPY___, _PASTE__, ________, ________


#define ______________RAISE__RIGHT__1______________     _tog__4_, _L_PAREN, _R_PAREN, _AMPRSND, KC_ASTR,  _L_PAREN,
#define ______________RAISE__RIGHT__2______________     ________, _L_SQUAR, _R_SQUAR, _DOLLAR_, KC_PERC,  _CARET__,
#define ______________RAISE__RIGHT__3______________     ________, _L_CURLY, _R_CURLY, _EXCLM__, _AT_____, _HASH___,
#define ______________RAISE__RIGHT__4______________     _N_O_P_E, _L_ANGLE, _R_ANGLE, _PIPE___, _R_PAREN, _TILDE__



#define _____________ADJUST__LEFT___1______________     MUS_PREV, MUS_PLAY, VOLUME_U, ________, ________, _tog__0_
#define _____________ADJUST__LEFT___2______________     MUS_NEXT, MUS_MUTE, VOLUME_D, ________, ________, ________
#define _____________ADJUST__LEFT___3______________     MCROREC1, MCROSTOP, MCROEXE1, ________, ________, ________
#define _____________ADJUST__LEFT___4______________     MCROREC2, MCROSTOP, MCROEXE2, ________, ________, ________


#define _____________ADJUST__RIGHT__1______________     _tog__4_, RGB_TOGG, RGB_SLOW, RGB_BGTD, RGB_CNTD, RGB_HUED
#define _____________ADJUST__RIGHT__2______________     ________, RGB_MODE, RGB_FAST, RGB_BGTI, RGB_CNTI, RGB_HUEI
#define _____________ADJUST__RIGHT__3______________     ________, ________, ________, ________, ________, ________
#define _____________ADJUST__RIGHT__4______________     _N_O_P_E, ________, ________, ________, ________, ________



#define _____________NUMPAD__LEFT___1______________     NUM_DIVD, NUM_7___, NUM_8___, NUM_9___, _BKSPACE,  _tog_4__
#define _____________NUMPAD__LEFT___2______________     NUM_ASTR, NUM_4___, NUM_5___, NUM_6___, _ESCAPE_,  ________
#define _____________NUMPAD__LEFT___3______________     NUM_PLUS, NUM_1___, NUM_2___, NUM_3___, NUM_COMA,  ________
#define _____________NUMPAD__LEFT___4______________     NUM_MINU, NUM_DOT_, NUM_0___, NUM_EQUL, NUM_ENTER, ________


#define _____________NUMPAD__RIGHT__1______________     ________, ________, ________, ________, ________, ________
#define _____________NUMPAD__RIGHT__2______________     ________, ________, ________, ________, ________, ________
#define _____________NUMPAD__RIGHT__3______________     ________, ________, ________, ________, _UP____,  ________
#define _____________NUMPAD__RIGHT__4______________     _N_O_P_E, ________, ________, _LEFT___, _DOWN__,  _RIGHT__

// clang-format on

