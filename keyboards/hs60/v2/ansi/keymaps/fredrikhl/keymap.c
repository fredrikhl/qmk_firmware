/*
 * This is for the ansi version of the HS60v2 and HS60v3
 */
#include QMK_KEYBOARD_H

/** Layers **/
enum custom_layers {
  _QWERTY,
  _LAYER1,
  _LAYER2,
  _LAYER3,
};


/** Keycodes **/
enum custom_keycodes {
  COMP_AA = SAFE_RANGE,
  COMP_AE,
  COMP_OE,
};


/** Layer modifiers **/
#define SH_L1 MO(_LAYER1)
#define SH_L2 MO(_LAYER2)
#define SH_L3 MO(_LAYER3)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* base layer */
[_QWERTY] = LAYOUT_60_ansi(
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
    KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
    KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,
    KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_APP,   SH_L1,    SH_L2,    KC_RCTL
),

/* FN layer */
[_LAYER1] = LAYOUT_60_ansi(
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,
    _______,  XXXXXXX,  KC_UP,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    KC_CAPS,  KC_LEFT,  KC_DOWN,  KC_RGHT,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  XXXXXXX,  XXXXXXX,            _______,
    _______,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_MUTE,  KC_VOLD,  KC_VOLU,  XXXXXXX,            _______,
    _______,  _______,  _______,                                _______,                                _______,  _______,  SH_L3,    _______
),

/* board settings */
[_LAYER2] = LAYOUT_60_ansi(
    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,
    _______,  KC_HOME,  KC_PGUP,  KC_END,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  KC_INS,   KC_PGDN,  KC_DEL,   XXXXXXX,  XXXXXXX,  _______,  _______,  _______,  _______,  XXXXXXX,  XXXXXXX,            _______,
    _______,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            _______,
    _______,  _______,  _______,                                _______,                                _______,  SH_L3,    _______,  _______
),

/* board settings */
[_LAYER3] = LAYOUT_60_ansi(
    RESET,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    EEP_RST,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  BR_INC,   ES_INC,   H1_INC,   S1_INC,   H2_INC,   S2_INC,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,
    XXXXXXX,            BR_DEC,   ES_DEC,   H1_DEC,   S1_DEC,   H2_DEC,   S2_DEC,   XXXXXXX,  EF_DEC,   EF_INC,   XXXXXXX,            XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,                                XXXXXXX,                                XXXXXXX,  _______,  _______,  XXXXXXX
),
};


void matrix_init_user(void) {
  //user initialization
}


void matrix_scan_user(void) {
  //user matrix
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
