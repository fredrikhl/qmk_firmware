/*
 * WT60-D with a standard ISO-layout
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

/* Base layer
 *
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 * |  Grave  |    1    |    2    |    3    |    4    |    5    |    6    |    7    |    8    |    9    |    0    |    -    |    =    | Backspc |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 * |   Tab   |    Q    |    W    |    E    |    R    |    T    |    Y    |    U    |    I    |    O    |    P    |    [    |    ]    |  Enter  |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+         |
 * |   Esc   |    A    |    S    |    D    |    F    |    G    |    H    |    J    |    K    |    L    |    ;    |    '    | \ (nuhs)|         |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 * |  LShift | \ (nubs)|    Z    |    X    |    C    |    V    |    B    |    N    |    M    |    ,    |    .    |    /    | RShift  |         |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 * |  LCtrl  |  LGUI   |  LALT   |                            Space                                    |  MENU   | LAYER1  | LAYER2  |  RCtcl  |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 */
[_QWERTY] = LAYOUT_all(
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  XXXXXXX,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_ENT,
    KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,
    KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  XXXXXXX,
    KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_APP,   SH_L1,    SH_L2,    KC_RCTL
),

/* Layer 1: Function keys, arrows
 *
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 * |   Esc   |   F1    |   F2    |   F3    |   F4    |   F5    |   F6    |   F7    |   F8    |   F9    |   F10   |   F11   |   F12   |   Del   |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 * |   Tab   |         |    Up   |         |         |         |         |         |         |         |         |         |         |         |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+         |
 * |   Caps  |  Left   |   Down  |  Right  |         |         |  Left   |   Down  |   Up    |  Right  |         |         | \ (nuhs)|         |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 * |  LShift | \ (nubs)|         |         |         |         |         |         |   Mute  |  VolDn  |  VolUp  |         | RShift  |         |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 * |  LCtrl  |  LGUI   |  LALT   |                            Space                                    |  MENU   |         | LAYER3  |  RCtcl  |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 */
[_LAYER1] = LAYOUT_all(
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   XXXXXXX,
    _______,  XXXXXXX,  KC_UP,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    KC_CAPS,  KC_LEFT,  KC_DOWN,  KC_RGHT,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  XXXXXXX,  XXXXXXX,  _______,
    _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_MUTE,  KC_VOLD,  KC_VOLU,  XXXXXXX,  _______,  XXXXXXX,
    _______,  _______,  _______,                                _______,                                _______,  _______,  SH_L3,    _______
),

/* Layer 2: Function keys, arrows
 *
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 * |   Esc   |         |         |         |         |         |         |         |         |         |         |         |         |   Del   |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 * |   Tab   |   Home  |  PgUp   |   End   |         |         |         |         |         |         |         |         |         |         |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+         |
 * |         |   Ins   |  PgDn   |   Del   |         |         |         |         |         |         |         |         |         |         |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 * |  LShift | \ (nubs)|         |         |         |         |         |         |         |         |         |         | RShift  |         |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 * |  LCtrl  |  LGUI   |  LALT   |                            Space                                    |  MENU   | LAYER3  |         |  RCtcl  |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 */
[_LAYER2] = LAYOUT_all(
    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  XXXXXXX,
    _______,  KC_HOME,  KC_PGUP,  KC_END,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,
    XXXXXXX,  KC_INS,   KC_PGDN,  KC_DEL,   XXXXXXX,  XXXXXXX,  _______,  _______,  _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    _______,  _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  XXXXXXX,
    _______,  _______,  _______,                                _______,                                _______,  SH_L3,    _______,  _______
),

/* Layer 3: Board settings
 *
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 * |  RESET  |         |         |         |         |         |         |         |         |         |         |         |         |         |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 * |  EEP    |         |         |         |         |         |         |         |         |         |         |         |         |         |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+         |
 * |         |         |         |         |         |         |         |         |         |         |         |         |         |         |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 * |         |         |         |         |         |         |         |         |         |         |         |         |         |         |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 * |         |         |         |                                                                     |         |         |         |         |
 * +---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
 */
[_LAYER3] = LAYOUT_all(
    RESET,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    EEP_RST,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
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
