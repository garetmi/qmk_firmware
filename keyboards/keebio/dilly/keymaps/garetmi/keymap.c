#include QMK_KEYBOARD_H


#define _BASE 0
#define _FN1 1
#define _FN2 2
#define _FN3 3
#define _FN4 4
#define _FN5 5

// Tap-Hold keys
#define KC_ASFT MT(MOD_LSFT, KC_A)
#define KC_F_L3 LT(_FN3, KC_F)
#define KC_ZCTL MT(MOD_LCTL, KC_Z)
#define KC_XALT MT(MOD_LALT, KC_X)
#define KC_CGUI MT(MOD_LGUI, KC_C)
#define KC_V_L4 LT(_FN4, KC_V)
#define KC_SPL2 LT(_FN2, KC_SPC)
#define KC_B_L1 LT(_FN1, KC_B)
#define KC_N_L5 LT(_FN5, KC_N)
#define KC_MALT MT(MOD_RALT, KC_M)
#define KC_BSCT MT(MOD_RCTL, KC_BSPC)
#define KC_ENTS MT(MOD_RSFT, KC_ENT)
#define KC_ESCS MT(MOD_RSFT, KC_ESC)

#define KC_GUIC LGUI(KC_C)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_ortho_3x10(
    KC_ESC, KC_DEL, KC_F5, KC_F6, KC_F7, KC_F8, LALT(KC_F8), KC_F10, KC_L, KC_R,
    KC_LSFT, KC_UP, KC_S, LALT(KC_T), KC_F11, KC_F12, KC_F2, KC_F4, KC_UP, LCTL(KC_M),
    LT(2,KC_LEFT), KC_DOWN, KC_RGHT, KC_SPC, LT(1,KC_SPC), KC_SPC, LCTL(KC_SPC), KC_LEFT, KC_DOWN, LT(2,KC_RGHT)
  ),

  [_FN1] = LAYOUT_ortho_3x10(
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_BSPC,
    KC_Z, KC_X, KC_C, KC_V, KC_TRNS, KC_B, KC_N, KC_M, KC_COMM, KC_DOT
  ),

  [_FN2] = LAYOUT_ortho_3x10(
    KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
    KC_TRNS, KC_DEL, BL_TOGG, BL_STEP, KC_LSFT, KC_LCTL, RGB_MOD, RGB_TOG, KC_F11, KC_F12
  )

};

