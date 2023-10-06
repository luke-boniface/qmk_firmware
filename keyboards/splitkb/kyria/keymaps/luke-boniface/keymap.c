#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT( KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T,                                      KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, 
                KC_NO, LSFT_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LGUI_T(KC_F), KC_G,      KC_H, RGUI_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RSFT_T(KC_SCLN), KC_NO, 
                KC_NO, KC_Z, KC_X, KC_C, KC_V,                                            KC_B, KC_NO, KC_NO, KC_NO, KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_QUOT, KC_NO, 
                KC_NO, KC_NO, KC_GRV, KC_BSPC, LT(3,KC_TAB),                              LT(4,KC_ESC), KC_SPC, KC_ENT, KC_NO, KC_NO),
                
	[3] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_LALT, KC_LCTL, KC_LGUI, KC_NO, KC_NO, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_NO, KC_NO, KC_END, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MO(5), MO(5), KC_NO, KC_NO, KC_NO, KC_NO),
	[4] = LAYOUT(KC_NO, KC_QUOT, KC_PIPE, KC_UNDS, KC_DQUO, KC_DOT, KC_AMPR, KC_LBRC, KC_RBRC, KC_TILD, KC_PERC, KC_NO, KC_NO, KC_EXLM, KC_MINS, KC_EQL, KC_PLUS, KC_CIRC, KC_DLR, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_HASH, KC_BSLS, KC_ASTR, KC_SLSH, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_GRV, KC_LT, KC_GT, KC_QUES, KC_AT, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(5), MO(5), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT(KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, OSM(MOD_LCTL|MOD_LSFT|MOD_LGUI), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, OSM(MOD_LSFT|MOD_LGUI), KC_NO, KC_NO, KC_F11, KC_F12, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case 4:
        SEND_STRING(SS_TAP(X_F17));
        break;
    case 0:
        SEND_STRING(SS_TAP(X_F16));
    break;
    }
  return state;
}