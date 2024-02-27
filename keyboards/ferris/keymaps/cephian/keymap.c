
#include QMK_KEYBOARD_H
#include "cephian.h"
#define ONESHOT_TIMEOUT 2000

#ifdef TAPPING_TERM
#undef TAPPING_TERM
#endif // TAPPING_TERM
#define TAPPING_TERM 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

#define LAYOUT_wrap(...) LAYOUT_split_3x5_2(__VA_ARGS__)

[_QWE] = LAYOUT_wrap(
        __QWE_UP_L__, __QWE_UP_R__,
        __QWE_MD_L__, __QWE_MD_R__,
        __QWE_DN_L__, __QWE_DN_R__,
        __QWE_TH_L__, __QWE_TH_R__
    ),

[_CDH] = LAYOUT_wrap(
        __CDH_UP_L__, __CDH_UP_R__,
        __CDH_MD_L__, __CDH_MD_R__,
        __CDH_DN_L__, __CDH_DN_R__,
        __CDH_TH_L__, __CDH_TH_R__
    ),

[_NAV] = LAYOUT_wrap(
        __NAV_UP_L__, __NAV_UP_R__,
        __NAV_MD_L__, __NAV_MD_R__,
        __NAV_DN_L__, __NAV_DN_R__,
        __NAV_TH_L__, __NAV_TH_R__
    ),

[_SYM] = LAYOUT_wrap(
        __SYM_UP_L__, __SYM_UP_R__,
        __SYM_MD_L__, __SYM_MD_R__,
        __SYM_DN_L__, __SYM_DN_R__,
        __SYM_TH_L__, __SYM_TH_R__
    ),

[_NUM] = LAYOUT_wrap(
        __NUM_UP_L__, __NUM_UP_R__,
        __NUM_MD_L__, __NUM_MD_R__,
        __NUM_DN_L__, __NUM_DN_R__,
        __NUM_TH_L__, __NUM_TH_R__
    ),

[_FNC] = LAYOUT_wrap(
        __FNC_UP_L__, __FNC_UP_R__,
        __FNC_MD_L__, __FNC_MD_R__,
        __FNC_DN_L__, __FNC_DN_R__,
        __FNC_TH_L__, __FNC_TH_R__
    ),

[_MSE] = LAYOUT_wrap(
        __MSE_UP_L__, __MSE_UP_R__,
        __MSE_MD_L__, __MSE_MD_R__,
        __MSE_DN_L__, __MSE_DN_R__,
        __MSE_TH_L__, __MSE_TH_R__
    )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _NAV, _SYM, _NUM);
}

