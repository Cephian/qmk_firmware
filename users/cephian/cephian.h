#pragma once

// Layer names
#define _QWE 0
#define _NAV 1
#define _SYM 2
#define _NUM 3
#define _FNC 4
#define _MSE 5

// Helpers
#define __THUMB_TRNS__ KC_TRNS, KC_TRNS
#define __THUMB_NONE__ KC_TRNS, KC_TRNS
#define __THUMB_BASE_L__ MO(_NAV), KC_LSFT
#define __THUMB_BASE_R__ KC_SPC, MO(_SYM)
#define __EMPTY_BASE__ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO

// Misc
#define ADD_NO_L(...) KC_NO,
#define ADD_NO_R

// QWERTY LAYER
#define __QWE_UP_L__ KC_Q, KC_W, KC_E, KC_R, KC_T
#define __QWE_MD_L__ KC_A, KC_S, KC_D, KC_F, KC_G
#define __QWE_DN_L__ KC_Z, KC_X, KC_C, KC_V, KC_B
#define __QWE_TH_L__ __THUMB_BASE_L__

#define __QWE_UP_R__ KC_Y, KC_U, KC_I, KC_O, KC_P
#define __QWE_MD_R__ KC_H, KC_J, KC_K, KC_L, KC_QUOT
#define __QWE_DN_R__ KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH
#define __QWE_TH_R__ __THUMB_BASE_R__

// COLEMAK-DH LAYER
#define __CDH_UP_L__ KC_Q, KC_W, KC_F, KC_P, KC_B
#define __CDH_MD_L__ KC_A, KC_R, KC_S, KC_T, KC_G
#define __CDH_DN_L__ KC_Z, KC_X, KC_C, KC_D, KC_V
#define __CDH_TH_L__ __THUMB_BASE_L__

#define __CDH_UP_R__ KC_J, KC_L, KC_U, KC_Y, KC_P
#define __CDH_MD_R__ KC_M, KC_N, KC_E, KC_I, KC_O
#define __CDH_DN_R__ KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH
#define __CDH_TH_R__ __THUMB_BASE_R__

// NAVIGATION LAYER
#define __NAV_UP_L__ KC_NO, KC_ESC, KC_BSPC, KC_ENT, KC_NO
#define __NAV_MD_L__ OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LGUI), KC_NO
#define __NAV_DN_L__ MO(_MSE), LCTL_T(KC_X), LCTL_T(KC_C), LCTL(KC_V), KC_NO
#define __NAV_TH_L__ __THUMB_TRNS__

#define __NAV_UP_R__ KC_PSCR, KC_DEL, QK_REP, KC_NO, KC_NO
#define __NAV_MD_R__ KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TAB
#define __NAV_DN_R__ KC_NO, KC_PGDN, KC_PGUP, KC_VOLD, KC_VOLU
#define __NAV_TH_R__ __THUMB_TRNS__

// SYMBOL LAYER
#define __SYM_UP_L__ KC_PERC, KC_LCBR, KC_RCBR, KC_PIPE, KC_NO
#define __SYM_MD_L__ KC_UNDS, KC_LPRN, KC_RPRN, KC_SCLN, KC_GRV
#define __SYM_DN_L__ KC_CIRC, KC_LBRC, KC_RBRC, KC_NO, KC_NO
#define __SYM_TH_L__ __THUMB_TRNS__

#define __SYM_UP_R__ KC_NO, KC_BSLS, KC_HASH, KC_DLR, KC_PLUS
#define __SYM_MD_R__ KC_TILD, KC_COLN, KC_EXLM, KC_ASTR, KC_EQL
#define __SYM_DN_R__ KC_NO, KC_NO, KC_AT, KC_AMPR, KC_MINS
#define __SYM_TH_R__ __THUMB_TRNS__

// NUMBER LAYER
#define __NUM_UP_L__ KC_NO, KC_NO, KC_BSPC, KC_NO, KC_NO
#define __NUM_MD_L__ KC_1, KC_2, KC_3, KC_4, KC_5
#define __NUM_DN_L__ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
#define __NUM_TH_L__ __THUMB_TRNS__

#define __NUM_UP_R__ KC_NO, KC_NO, QK_REP, KC_NO, KC_NO
#define __NUM_MD_R__ KC_6, KC_7, KC_8, KC_9, KC_0
#define __NUM_DN_R__ KC_NO, KC_NO, KC_NO, KC_NO, OSL(_FNC)
#define __NUM_TH_R__ __THUMB_TRNS__

// FUNCTION LAYER
// #define __FNC_UP_L__ DF(_QWE), DF(_CDH), KC_NO, KC_NO, KC_NO
#define __FNC_UP_L__ DF(_QWE), KC_NO, KC_NO, KC_NO, KC_NO
#define __FNC_MD_L__ KC_F1, KC_F2, KC_F3, KC_F4, KC_F5
#define __FNC_DN_L__ KC_F11, KC_F12, KC_NO, KC_NO, KC_NO
#define __FNC_TH_L__ __THUMB_NONE__

#define __FNC_UP_R__ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
#define __FNC_MD_R__ KC_F6, KC_F7, KC_F8, KC_F9, KC_F10
#define __FNC_DN_R__ KC_NO, KC_NO, KC_NO, KC_HOME, KC_END
#define __FNC_TH_R__ __THUMB_NONE__

// MOUSE LAYER
#define __MSE_UP_L__ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
#define __MSE_MD_L__ KC_LALT, KC_LSFT, KC_LCTL, KC_LGUI, KC_NO
#define __MSE_DN_L__ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
#define __MSE_TH_L__ __THUMB_NONE__

#define __MSE_UP_R__ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
#define __MSE_MD_R__ KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN3
#define __MSE_DN_R__ KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO
#define __MSE_TH_R__ KC_BTN1, KC_BTN2

// Lulu generic wrappers
#define LULU_WRAP(...) KC_TRNS, __VA_ARGS__, KC_TRNS
#define LULU_TH_WRAP(...) KC_TRNS, KC_TRNS, __VA_ARGS__, KC_TRNS, KC_TRNS
#define LULU_DN_WRAP(A, B) KC_TRNS, A, KC_TRNS, KC_TRNS, B, KC_TRNS
#define LULU_INNER_WRAP(A, B) KC_TRNS, A, KC_TRNS, KC_TRNS, B, KC_TRNS
#define __LULU_EMPTY__ LULU_WRAP(__EMPTY_BASE__, __EMPTY_BASE__)

// lulu specific wrappers
#define __LULU_MODKEY_MD_L__ KC_LALT
#define __LULU_MODKEY_MD_R__ KC_RALT
#define __LULU_QWE_DN__ __LULU_MODKEY_DN_L__, __QWE_DN_L__, KC_TRNS, KC_TRNS, __QWE_DN_R__, __LULU_MODKEY_DN_R__
#define __LULU_CDH_DN__ __LULU_MODKEY_DN_L__, __CDH_DN_L__, KC_TRNS, KC_TRNS, __CDH_DN_R__, __LULU_MODKEY_DN_R__

#define __LULU_MODKEY_DN_L__ KC_LCTL
#define __LULU_MODKEY_DN_R__ KC_RCTL
#define __LULU_QWE_MD__ __LULU_MODKEY_MD_L__, __QWE_MD_L__, __QWE_MD_R__, __LULU_MODKEY_MD_R__
#define __LULU_CDH_MD__ __LULU_MODKEY_MD_L__, __CDH_MD_L__, __CDH_MD_R__, __LULU_MODKEY_MD_R__

// Mouse setings
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY 0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 64
