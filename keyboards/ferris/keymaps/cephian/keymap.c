#include QMK_KEYBOARD_H
#define ONESHOT_TIMEOUT 2000

#ifdef TAPPING_TERM
#undef TAPPING_TERM
#endif // TAPPING_TERM
#define TAPPING_TERM 1


// Mouse setings
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64


#define _QWE 0
#define _CDH 1
#define _NAV 2
#define _SYM 3
#define _NUM 4
#define _FNC 5
#define _MSE 6

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_QWE] = LAYOUT(
        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
        KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOT,
        KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
        MO(_NAV), KC_LSFT, KC_SPC, MO(_SYM)
    ),

 [_CDH] = LAYOUT(
        KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
        KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O,
        KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH,
        MO(_NAV), KC_LSFT, KC_SPC, MO(_SYM)
    ),

[_NAV] = LAYOUT(
        KC_NO, KC_ESC, KC_BSPC, KC_ENT, KC_NO, KC_PSCR, KC_DEL, QK_REP, KC_NO, KC_NO,
        OSM(MOD_LALT), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LGUI), KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TAB,
        MO(_MSE), LCTL_T(KC_X), LCTL_T(KC_C), LCTL(KC_V), KC_NO, KC_NO, KC_PGDN, KC_PGUP, KC_VOLD, KC_VOLU,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

[_SYM] = LAYOUT(
        KC_PERC, KC_LCBR, KC_RCBR, KC_PIPE, KC_NO, KC_NO, KC_BSLS, KC_HASH, KC_DLR, KC_PLUS,
        KC_UNDS, KC_LPRN, KC_RPRN, KC_SCLN, KC_GRV, KC_TILD, KC_COLN, KC_EXLM, KC_ASTR, KC_MINS,
        KC_CIRC, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_AT, KC_AMPR, KC_EQL,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

[_NUM] = LAYOUT(
        KC_NO, KC_NO, KC_BSPC, KC_NO, KC_NO, KC_NO, KC_NO, QK_REP, KC_NO, KC_NO,
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, OSL(_FNC),
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

[_FNC] = LAYOUT(
        DF(_QWE), DF(_CDH), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
        KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_END,
        KC_NO, KC_NO, KC_NO, KC_NO
    ),

[_MSE] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_LALT, KC_LSFT, KC_LCTL, KC_LGUI, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN3,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO,
        KC_NO, KC_NO, KC_BTN1, KC_BTN2
    )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _NAV, _SYM, _NUM);
}
