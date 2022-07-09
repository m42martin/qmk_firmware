#pragma once

#define XXXXXXX KC_NO
#undef  XXXXXXX
// #undef  _______
// #define _______ KC_NO
#define _NO_OP_ KC_NO
#undef  KC_NO

#define ___A___ MT(MOD_RSFT, KC_A)
#define ___B___ KC_B
#define ___C___ LT(SYS, KC_C)
#define ___D___ MT(MOD_LSFT, KC_D)
#define ___E___ MT(MOD_RGUI, KC_E)
#define ___F___ KC_F
#define ___G___ KC_G
#define ___H___ KC_H
#define ___I___ LT(WIN, KC_I)
#define ___J___ KC_J
#define ___K___ KC_K
#define ___L___ KC_L
#define ___M___ MT(MOD_LALT, KC_M)
#define ___N___ MT(MOD_LGUI, KC_N)
#define ___O___ KC_O
#define ___P___ MT(MOD_LCTL, KC_P)
#define ___Q___ KC_Q
#define ___R___ KC_R
#define ___S___ LT(NUM, KC_S)
#define ___T___ LT(NAV, KC_T)
#define ___U___ KC_U
#define ___V___ KC_V
#define ___W___ KC_W
#define ___X___ KC_X
#define ___Y___ KC_Y
#define ___Z___ KC_Z

#define _m_SEMI MT(MOD_LSHFT, KC_COLON)

#define ___0___ KC_0
#define ___1___ KC_1
#define ___2___ KC_2
#define ___3___ KC_3
#define ___4___ KC_4
#define ___5___ KC_5
#define ___6___ KC_6
#define ___7___ KC_7
#define ___8___ KC_8
#define ___9___ KC_9

#define __F01__ KC_F1
#define __F02__ KC_F2
#define __F03__ KC_F3
#define __F04__ KC_F4
#define __F05__ KC_F5
#define __F06__ KC_F6
#define __F07__ KC_F7
#define __F08__ KC_F8
#define __F09__ KC_F9
#define __F10__ KC_F10
#define __F11__ KC_F11
#define __F12__ KC_F12

/* // WORKS FOR ABC EXTENDED
 * #define _ARING_ ROPT(KC_A)
 * #define _OSLSH_ ROPT(KC_O)
 * #define _AELIG_ ROPT(KC_QUOTE) */

#define _tog_1_ TG(1)
#define _tog_2_ TG(2)

#define _LABRC_ KC_LEkFT_ANGLE_BRACKET
#define _LCBRC_ KC_LEFT_CURLY_BRACE
#define _LPARN_ KC_LEFT_PAREN
#define _LSBRC_ KC_LBRACKET
#define _RABRC_ KC_RIGHT_ANGLE_BRACKET
#define _RCBRC_ KC_RIGHT_CURLY_BRACE
#define _RPARN_ KC_RIGHT_PAREN
#define _RSBRC_ KC_RBRACKET

#define __AT___ KC_AT
#define __DOT__ KC_DOT
#define _AMPRS_ KC_AMPERSAND
#define _ASTER_ KC_ASTERISK
#define _BSLSH_ KC_BSLASH
#define _CIRCF_ KC_CIRCUMFLEX
#define _COLON_ KC_COLON
#define _COMMA_ KC_COMMA
#define _DOLLR_ KC_DOLLAR
#define _DQUOT_ KC_DOUBLE_QUOTE
#define _EQUAL_ KC_EQUAL
#define _EXCLM_ KC_EXCLAIM
#define _GRAVE_ KC_GRAVE
#define _HASH__ KC_HASH
#define _MINUS_ KC_MINUS
#define _PERCT_ KC_PERCENT
#define _PIPE__ LSFT(KC_BSLS)
#define _PLUS__ KC_PLUS
#define _QUEST_ KC_QUESTION
#define _SCOLN_ KC_SCOLON
#define _SLASH_ MT(MOD_RALT, KC_SLASH)
#define _SQUOT_ KC_QUOTE
#define _TILDE_ LSFT(KC_GRAVE)
#define _UNDRS_ KC_UNDERSCORE

#define __DEL__ KC_DELETE
#define __ESC__ KC_ESCAPE
#define __TAB__ KC_TAB
#define _BKSPC_ KC_BSPACE
#define _ENTER_ KC_ENTER
#define _LEADR_ KC_LEAD
#define _PRINT_ KC_PSCREEN
#define _SPACE_ KC_SPACE

#define __UP___ KC_UP
#define _DOWN__ KC_DOWN
#define _LEFT__ KC_LEFT
#define _RIGHT_ KC_RIGHT

#define _LALT__ KC_LALT
#define _LCMD__ KC_LCMD
#define _LCTRL_ KC_LCTL
#define _LGUI__ KC_LGUI  // macOS Command
#define _LOPT__ KC_LOPT
#define _LSHFT_ KC_LSFT
#define _RSHFT_ KC_RSFT

#define _TABL__ LSFT(LCMD(KC_LBRACKET))
#define _TABR__ LSFT(LCMD(KC_RBRACKET))

// LCTL(LALT(KC_DEL))

#define DBG_RESUME KC_F5
#define DBG_DEBUG_ A(S(KC_F9))
#define DBG_HOT_RL A(KC_F10)
#define DBG_PAUSE_ C(A(S(KC_P)))
#define DBG_STP_OV KC_F10
#define DBG_STP_IN KC_F11
#define DBG_SMT_IN S(KC_F7)
#define DBG_FRC_IN A(KC_F11)
#define DBG_STP_OU S(KC_F11)

#define _WNEXT_ LGUI(KC_NONUS_BSLASH)
#define _WPREV_ LSFT(_WNEXT_)

#define _RESET_ RESET

#define PC_CUT_ KC_PC_CUT
#define PC_COPY KC_PC_COPY
#define PC_PSTE KC_PC_PASTE

#define MAC_COPY LCMD(KC_C)
#define MAC_CUT LCMD(KC_X)
#define MAC_PASTE LCMD(KC_V)
#define MAC_PASTE_MATCH LSFT(LOPT(LCMD(KC_C)))
#define MAC_REDO LSFT(LCMD(KC_Z))
#define MAC_SELECT_ALL LCMD(KC_A)
#define MAC_UNDO LCMD(KC_Z)

#define _BRIMN_ KC_F14
#define _BRIMX_ KC_F15

#define _WWW_B_ KC_WWW_BACK
#define _WWW_F_ KC_WWW_FORWARD

#define _DSKT1_ HYPR(___1___)
#define _DSKT2_ HYPR(___2___)
#define _DSKT3_ HYPR(___3___)
#define _DSKT4_ HYPR(___4___)
#define _DSKT5_ HYPR(___5___)
#define _DSKT6_ HYPR(___6___)

#define _SCRSH_ LCMD(LSFT(___4___))

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
