// Copyright 2022 Cole Smith <cole@boadsource.xyz>
// SPDX-License-Identifier: GPL-2.0-or-later
#include "cephian.h"

#include QMK_KEYBOARD_H

#define LAYOUT_wrap(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWE] = LAYOUT_wrap(LULU_WRAP(__NUM_MD_L__, __NUM_MD_R__),   //
                         LULU_WRAP(__QWE_UP_L__, __QWE_UP_R__),   //
                         __LULU_QWE_MD__,                         //
                         __LULU_QWE_DN__,                         //
                         LULU_TH_WRAP(__QWE_TH_L__, __QWE_TH_R__) //
                         ),

    [_CDH] = LAYOUT_wrap(LULU_WRAP(__NUM_MD_L__, __NUM_MD_R__),   //
                         LULU_WRAP(__CDH_UP_L__, __CDH_UP_R__),   //
                         __LULU_CDH_MD__,                         //
                         __LULU_CDH_DN__,                         //
                         LULU_TH_WRAP(__CDH_TH_L__, __CDH_TH_R__) //
                         ),
    [_NAV] = LAYOUT_wrap(LULU_WRAP(__FNC_MD_L__, __FNC_MD_R__),    //
                         LULU_WRAP(__NAV_UP_L__, __NAV_UP_R__),    //
                         LULU_WRAP(__NAV_MD_L__, __NAV_MD_R__),    //
                         LULU_DN_WRAP(__NAV_DN_L__, __NAV_DN_R__), //
                         LULU_TH_WRAP(__NAV_TH_L__, __NAV_TH_R__)  //
                         ),
    [_SYM] = LAYOUT_wrap(__LULU_EMPTY__,                           //
                         LULU_WRAP(__SYM_UP_L__, __SYM_UP_R__),    //
                         LULU_WRAP(__SYM_MD_L__, __SYM_MD_R__),    //
                         LULU_DN_WRAP(__SYM_DN_L__, __SYM_DN_R__), //
                         LULU_TH_WRAP(__SYM_TH_L__, __SYM_TH_R__)  //
                         ),
    [_NUM] = LAYOUT_wrap(__LULU_EMPTY__,                           //
                         LULU_WRAP(__NUM_UP_L__, __NUM_UP_R__),    //
                         LULU_WRAP(__NUM_MD_L__, __NUM_MD_R__),    //
                         LULU_DN_WRAP(__NUM_DN_L__, __NUM_DN_R__), //
                         LULU_TH_WRAP(__NUM_TH_L__, __NUM_TH_R__)  //
                         ),
    [_FNC] = LAYOUT_wrap(__LULU_EMPTY__,                           //
                         LULU_WRAP(__FNC_UP_L__, __FNC_UP_R__),    //
                         LULU_WRAP(__FNC_MD_L__, __FNC_MD_R__),    //
                         LULU_DN_WRAP(__FNC_DN_L__, __FNC_DN_R__), //
                         LULU_TH_WRAP(__FNC_TH_L__, __FNC_TH_R__)  //
                         ),
    [_MSE] = LAYOUT_wrap(__LULU_EMPTY__,                           //
                         LULU_WRAP(__MSE_UP_L__, __MSE_UP_R__),    //
                         LULU_WRAP(__MSE_MD_L__, __MSE_MD_R__),    //
                         LULU_DN_WRAP(__MSE_DN_L__, __MSE_DN_R__), //
                         LULU_TH_WRAP(__MSE_TH_L__, __MSE_TH_R__)  //
                         ),

};

#ifdef RGB_MATRIX_ENABLE
void keyboard_post_init_useR(void) {
    rgblight_enable_noeeprom(); // Enables RGB, without saving settings
    rgblight_sethsv_noeeprom(255, 255, 255);
}
#endif

layer_state_t layer_state_set_user(layer_state_t state) {
    state = update_tri_layer_state(state, _NAV, _SYM, _NUM);
#ifdef RGB_MATRIX_ENABLE
    switch (get_highest_layer(state)) {
        case _NAV:
            rgblight_sethsv(200, 255, 255);
            break;
        case _SYM:
            rgblight_sethsv(255, 200, 255);
            break;
        case _NUM:
            rgblight_sethsv(255, 255, 200);
            break;
        case _FNC:
            rgblight_sethsv(200, 200, 255);
            break;
        case _MSE:
            rgblight_sethsv(255, 200, 200);
            break;
        default:
            rgblight_sethsv(255, 255, 255); // Blue
            break;
    }
#endif
    return state;
}
