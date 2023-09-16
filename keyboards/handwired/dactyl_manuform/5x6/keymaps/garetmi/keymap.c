/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _GAME 3

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define GAME TG(_GAME)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
     KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_DEL,
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLS,
     KC_LSFT, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_B  , KC_N  , KC_M  ,KC_COMM,KC_DOT,KC_SLSH,
                      KC_LBRC,KC_RBRC,                                                       KC_MINS, KC_EQL,
                                      KC_SPC,LT(RAISE,KC_SPC),               LT(LOWER,KC_CAPS), KC_ENT,
                                      KC_LALT,KC_LGUI,                         KC_BSPC,  KC_SPC,
                                      KC_TAB, KC_BSPC,                        KC_PGUP, KC_PGDN
  ),

  [_LOWER] = LAYOUT_5x6(

     KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_NLCK,
     _______,KC_INS ,KC_HOME,KC_PGUP,_______,KC_LCBR,                        KC_RCBR, KC_P7 , KC_P8 , KC_P9 ,KC_PMNS,KC_PSLS,
     _______,KC_DEL ,KC_END ,KC_PGDN,_______,KC_LBRC,                        KC_RBRC, KC_P4 , KC_P5 , KC_P6 ,KC_PPLS,KC_PAST,
     _______,_______,_______,_______,_______,KC_LPRN,                        KC_RPRN, KC_P1 , KC_P2 , KC_P3 ,KC_PEQL ,KC_PCMM,
                                             KC_PWR ,KC_SLEP,            KC_P0  ,KC_PDOT,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            RESET  ,_______

  ),

  [_RAISE] = LAYOUT_5x6(
       KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_F6 ,                        KC_F7  , KC_F8 , KC_F9 , KC_F10 ,KC_F11 ,KC_F12 ,
       GAME  ,_______,_______,KC_UP  ,KC_MUTE,KC_LCBR,                        KC_RCBR,_______,KC_NLCK,KC_SLCK,_______,KC_MUTE,
       KC_VOLU,_______,KC_LEFT,KC_DOWN,KC_RGHT,KC_LBRC,                        KC_RBRC,KC_MPLY,KC_MPRV,KC_MNXT,_______,KC_VOLU,
       KC_VOLD,KC_CALC,RGB_MOD,RGB_VAI,KC_PSCR,KC_LPRN,                        KC_RPRN,_______,RGB_HUI,RGB_SAI,_______,KC_VOLD,
                                               RGB_TOG,RGB_VAD,            RGB_HUD,RGB_SAD,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,RESET  ,            _______,_______
  ),

[_GAME] = LAYOUT_5x6(
       _______, KC_ESC, KC_1  , KC_2  , KC_3  , KC_4  ,                        _______,_______,_______,_______,_______,_______,
       _______, KC_TAB, KC_Q  , KC_W  , KC_E  , KC_R  ,                        _______,_______,_______,_______,_______,_______,
       _______,KC_LSFT, KC_A  , KC_S  , KC_D  , KC_F  ,                        _______,_______,_______,_______,_______,_______,
       _______,KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  ,                        _______,_______,_______,_______,_______,_______,
                                                KC_T  , KC_V  ,            _______,_______,
                                               KC_SPC , KC_TRNS,            _______,_______,
                                                KC_F1 , KC_F2 ,            _______,_______,
                                                KC_F3 , KC_F5 ,            _______,_______
  ),
};
