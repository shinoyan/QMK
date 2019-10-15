#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1
#define _FN2 2
#define _FN3 3

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

#define TAPPING_TOGGLE 2
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define KC_BASE TO(_BASE)
#define KC_FN1 TT(_FN1)
#define KC_FN2 TO(_FN2)
#define KC_FN3 TO(_FN3)
#define KC_SPFN1 LT(_FN1, KC_SPACE)
#define KC_BSFN2 LT(_FN2, KC_BSPC)
#define EISU KC_LANG2
#define KANA KC_LANG1
#define EMC_REP A(KC_PERC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_MINUS,  KC_BSPC,
    KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,          KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,             KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(KC_ENT),
    KC_BASE, KC_LALT, KC_LGUI, EISU,  KC_SPC, KC_SPC, KANA, KC_FN3, KC_FN2,  KC_FN1
  ),

  [_FN1] = LAYOUT(
    KC_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL, KC_BSPC,
    KC_LCTL,   RGB_HUI, RGB_SAI, RGB_VAI, KC_VOLU,  KC_3,  KC_4,    KC_5,    KC_GRAVE,    KC_LBRC, KC_RBRC,        KC_ENT,
    KC_LSFT, RGB_HUD, RGB_SAD, RGB_VAD, KC_VOLD, KC_LCBR, KC_RCBR,  KC_1, KC_BSLASH, KC_UP, _______, KC_RSFT,
    KC_BASE, KC_LALT, KC_LGUI, EISU,  KC_SPC, KC_SPC, KC_LEFT, KC_DOWN, KC_RGHT, _______
  ),

  [_FN2] = LAYOUT(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS,
    _______, _______, _______, KC_INS,  KC_PGUP, KC_HOME, _______, _______, _______, _______, KC_COLN,          _______,
    _______, _______, _______, KC_DEL,  KC_PGDN, KC_END,  _______,          _______, _______, _______, _______, _______,
    KC_BASE, _______, _______, _______, KC_DEL,           _______,                   _______, _______, _______, _______
  ),

  [_FN3] = LAYOUT(
    KC_TAB,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_EQL, KC_BSPC,
    KC_LCTL, EMC_REP, _______, KC_INS,  KC_PGUP, KC_HOME, _______, _______, _______, _______, KC_COLN,          _______,
    KC_LSFT, _______, _______, KC_DEL,  KC_PGDN, KC_END,  _______,          _______, _______, _______, _______, _______,
    KC_BASE, KC_LALT, KC_LGUI, EISU,  KC_SPC, KC_SPC, KANA, _______, _______, _______
  )
};
