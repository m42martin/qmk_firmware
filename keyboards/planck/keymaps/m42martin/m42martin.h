#pragma once

#undef  XXXXXX
#undef  _______
#define ________ KC_NO
#define _N_O_P_E KC_NO
#undef  KC_NO

/*
 * DF(layer)	    Set the base (default) layer
 * LM(layer, mod)	Momentarily turn on layer (like MO) with mod active as well. Where mod is a mods_bit. Mods can be viewed here. Example Implementation: LM(LAYER_1, MOD_LALT)
 * LT(layer, kc)	Turn on layer when held, kc when tapped
 * MO(layer)	    Momentarily turn on layer when pressed (requires KC_TRNS on destination layer)
 * MT(mod, kc)		mod when held, kc when tapped
 * OSL(layer)	    Momentarily activates layer until a key is pressed. See One Shot Keys for details.
 * TG(layer)	    Toggle layer on or off
 * TO(layer)	    Turns on layer and turns off all other layers, except the default layer
 * TT(layer)	    Normally acts like MO unless it's tapped multiple times, which toggles layer on
 */

#define _ORYX___ WEBUSB_PAIR

#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_COPY LCTL(KC_X)
#define KC_PC_CUT LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_COPY LGUI(KC_X)
#define KC_MAC_CUT LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)

#define ___A____ KC_A
#define ___B____ KC_B
#define ___C____ KC_C
#define ___D____ KC_D
#define ___E____ KC_E
#define ___F____ KC_F
#define ___G____ KC_G
#define ___H____ KC_H
#define ___I____ KC_I
#define ___J____ KC_J
#define ___K____ KC_K
#define ___L____ KC_L
#define ___M____ KC_M
#define ___N____ KC_N
#define ___O____ KC_O
#define ___P____ KC_P
#define ___Q____ KC_Q
#define ___R____ KC_R
#define ___S____ KC_S
#define ___T____ KC_T
#define ___U____ KC_U
#define ___V____ KC_V
#define ___W____ KC_W
#define ___X____ KC_X
#define ___Y____ KC_Y
#define ___Z____ KC_Z

#define _m_SEMI_ MT(MOD_LSFT, KC_COLON)

#define ___0____ KC_0
#define ___1____ KC_1
#define ___2____ KC_2
#define ___3____ KC_3
#define ___4____ KC_4
#define ___5____ KC_5
#define ___6____ KC_6
#define ___7____ KC_7
#define ___8____ KC_8
#define ___9____ KC_9

#define NUM_0___ KC_KP_0
#define NUM_1___ KC_KP_1
#define NUM_2___ KC_KP_2
#define NUM_3___ KC_KP_3
#define NUM_4___ KC_KP_4
#define NUM_5___ KC_KP_5
#define NUM_6___ KC_KP_6
#define NUM_7___ KC_KP_7
#define NUM_8___ KC_KP_8
#define NUM_9___ KC_KP_9

#define NUM_PLUS KC_KP_PLUS
#define NUM_MINU KC_KP_MINUS
#define NUM_DIVD KC_KP_SLASH
#define NUM_DOT_ KC_KP_DOT
#define NUM_ENTR KC_KP_ENTER
#define NUM_COMA KC_KP_COMMA
#define NUM_ASTR KC_KP_ASTERISK
#define NUM_EQUL KC_KP_EQUAL

#define _F_01___ KC_F1
#define _F_02___ KC_F2
#define _F_03___ KC_F3
#define _F_04___ KC_F4
#define _F_05___ KC_F5
#define _F_06___ KC_F6
#define _F_07___ KC_F7
#define _F_08___ KC_F8
#define _F_09___ KC_F9
#define _F_10___ KC_F10
#define _F_11___ KC_F11
#define _F_12___ KC_F12

/* // WORKS FOR ABC EXTENDED
 * #define _ARING_ ROPT(KC_A)
 * #define _OSLSH_ ROPT(KC_O)
 * #define _AELIG_ ROPT(KC_QUOTE) */

#define _L_ANGLE KC_LEFT_ANGLE_BRACKET
#define _R_ANGLE KC_RIGHT_ANGLE_BRACKET

#define _L_CURLY KC_LEFT_CURLY_BRACE
#define _R_CURLY KC_RIGHT_CURLY_BRACE

#define _L_PAREN KC_LEFT_PAREN
#define _R_PAREN KC_RIGHT_PAREN

#define _L_SQUAR KC_LBRACKET
#define _R_SQUAR KC_RBRACKET

#define _AMPRSND KC_AMPERSAND
#define _ASTERSK KC_ASTERISK
#define _AT_____ KC_AT
#define _BKSLASH KC_BSLASH
#define _BKSPACE KC_BSPACE
#define _CARET__ KC_CIRCUMFLEX
#define _COLON__ KC_COLON
#define _COMMA__ KC_COMMA
#define _COPY___ KC_PC_COPY
#define _CUT____ KC_PC_CUT
#define _DELETE_ KC_DELETE
#define _DOLLAR_ KC_DOLLAR
#define _DOT____ KC_DOT
#define _DOWN___ KC_DOWN
#define _END____ KC_END
#define _ENTER__ KC_ENTER
#define _EQUAL__ KC_EQUAL
#define _ESCAPE_ KC_ESCAPE
#define _EXCLM__ KC_EXCLAIM
#define _GRAVE__ KC_GRAVE
#define _HASH___ KC_HASH
#define _HOME___ KC_HOME
#define _INSERT_ KC_INSERT
#define _LEADER_ KC_LEAD
#define _LEFT___ KC_LEFT
#define _MINUS__ KC_MINUS
#define _PAGE_DN KC_PAGE_DOWN
#define _PAGE_UP KC_PAGE_UP
#define _PASTE__ KC_PC_PASTE
#define _PERCENT KC_PERCENT
#define _PIPE___ KC_PIPE
#define _PLUS___ KC_PLUS
#define _PRINT__ KC_PRINT_SCREEN
#define _QUESTN_ KC_QUESTION
#define _RESET__ RESET
#define _RIGHT__ KC_RIGHT
#define _SLASH__ KC_SLASH
#define _SMCOLN_ KC_SCOLON
#define _SPACE__ KC_SPACE
#define _TAB____ KC_TAB
#define _TILDE__ KC_GRAVE
#define _UP_____ KC_UP
#define DB_QUOTE KC_DOUBLE_QUOTE
#define SN_QUOTE KC_QUOTE
#define UNDRSCOR KC_UNDERSCORE
#define WWW_BACK KC_WWW_BACK
#define WWW_FWD_ KC_WWW_FORWARD

#define CNTXMENU KC_APPLICATION // context menu
#define _L_GUI__ KC_LGUI  // macOS Command or win start menu

#define _L_ALT__ KC_LALT
#define _L_CMD__ KC_LCMD
#define _L_CTRL_ KC_LCTL
#define _L_OPT__ KC_LOPT
#define _L_SHFT_ KC_LSFT
#define _R_SHFT_ KC_RSFT

#define _L_TAB__ LSFT(LCMD(KC_LBRACKET))
#define _R_TAB__ LSFT(LCMD(KC_RBRACKET))

#define D_RESUME KC_F5
#define D_DEBUG_ A(S(KC_F9))
#define D_HOT_RL A(KC_F10)
#define D_PAUSE_ C(A(S(KC_P)))
#define D_STEPOV KC_F10
#define D_STEPIN KC_F11
#define D_SMT_IN S(KC_F7)
#define D_FRCEIN A(KC_F11)
#define D_STEPOU S(KC_F11)

#define MUS_NEXT KC_MEDIA_NEXT_TRACK
#define MUS_PREV KC_MEDIA_PREV_TRACK
#define MUS_STOP KC_MEDIA_STOP
#define MUS_PLAY KC_MEDIA_PLAY_PAUSE
#define MUS_MUTE KC_AUDIO_MUTE
#define VOLUME_U KC_AUDIO_VOL_UP
#define VOLUME_D KC_AUDIO_VOL_DOWN

#define RGB_BGTD RGB_VAI
#define RGB_BGTI RGB_VAD
#define RGB_CNTD RGB_SAI
#define RGB_CNTI RGB_SAD /* contrast */
#define RGB_FAST RGB_VAI
#define RGB_HUED RGB_HUI
#define RGB_HUEI RGB_HUD
#define RGB_MODE RGB_MODE_FORWARD
#define RGB_SLOW RGB_VAD
#define RGB_TOGG RGB_TOG

#define MCROSTOP DYN_REC_STOP
#define MCROREC1 DYN_REC_START1
#define MCROREC2 DYN_REC_START2
#define MCROEXE1 DYN_MACRO_PLAY1
#define MCROEXE2 DYN_MACRO_PLAY2

#define LANG__01 KC_LANGUAGE_1
#define LANG__02 KC_LANGUAGE_2

#define m_BT1_m KC_MS_BTN1
#define m_BT2_m KC_MS_BTN2
#define m_DWN_m KC_MS_DOWN
#define m_LFT_m KC_MS_LEFT
#define m_RGT_m KC_MS_RIGHT
#define m_UP__m KC_MS_UP
#define m_WHD_m KC_MS_WH_DOWN
#define m_WHL_m KC_MS_WH_LEFT
#define m_WHR_m KC_MS_WH_RIGHT
#define m_WHU_m KC_MS_WH_UP
