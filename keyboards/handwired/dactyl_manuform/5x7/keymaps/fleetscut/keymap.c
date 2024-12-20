#include QMK_KEYBOARD_H
#include "custom.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

typedef struct TapHolds {
    char            tap_char;
    uint16_t        hold_code;
} TapHold;

TapHold tapholds[] = {
    { .tap_char = ')',  .hold_code = KC_LSFT },
    { .tap_char = '~',  .hold_code = KC_LCTL },
    { .tap_char = '(',  .hold_code = KC_LALT },
    { .tap_char = '-',  .hold_code = KC_RSFT },
    { .tap_char = ':',  .hold_code = KC_RCTL },
    { .tap_char = '+',  .hold_code = KC_RALT },
};

enum CustomKeycodes {
    KC_L1 = SAFE_RANGE,
    KC_L2,
    KC_L3,
    KC_R1,
    KC_R2,
    KC_R3,
    KC_LAST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DHM] = LAYOUT_5x7(
        // left hand
           M0W0, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, _______,
           M1W1,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B, _______,
           M1W0,   GUI_A,   ALT_R,   CTL_S,  SHFT_T,    KC_G, _______,
           M1W2,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,
           M0W1,    M1W5, KC_LEFT,KC_RIGHT,
                                KC_LPRN, KC_ESC,
                               KC_TILDE,  LTNAV,
                                KC_RPRN, KC_TAB,
        // right hand
                         _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
                         _______,    KC_J,    KC_L,    WM_U,    WM_Y,   WM_QT, _______,
                         _______,    KC_M,   SFT_N,   CTL_E,   ALT_I,   GUI_O, _______,
                                     KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH, _______,
                                                    KC_DOWN,   KC_UP, _______, _______,
             LTFN,    KC_EQL,
             LTNUM, KC_COLON,
             LTSYM,  KC_MINS
    ),
    [_FN] = LAYOUT_5x7(
        // left hand
      QK_REBOOT, _______, _______, _______,  _______, _______, QK_BOOT,
        _______,  KC_F12,   KC_F7,   KC_F8,    KC_F9, KC_PSCR, _______,
        _______,  KC_F11,   KC_F4,   KC_F5,    KC_F6, KC_SCRL, _______,
        _______,  KC_F10,   KC_F1,   KC_F2,    KC_F3, KC_PAUSE,
        _______, _______, _______, _______,
                                _______,   QK_BOOT,
                                _______, QK_REBOOT,
                                _______,   _______,
        // right hand
                         _______, _______, _______, _______, _______, _______, _______,
                         _______, _______, _______, _______, _______, _______, _______,
                         _______, _______, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, _______,
                                  _______, _______, _______, _______, _______, _______,
                                                    _______, _______, _______, _______,
             _______, _______,
             _______, _______,
             _______, _______
    ),
    [_NUM] = LAYOUT_5x7(
        // left hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, KC_PLUS,    KC_7,    KC_8,    KC_9,  KC_EQL, _______,
        _______, KC_SCLN,    KC_4,    KC_5,    KC_6, KC_COLON, _______,
        _______, KC_GRV,     KC_1,    KC_2,    KC_3, KC_BSLS,
        _______, _______, _______, _______,
                                _______, KC_DOT,
                                _______, KC_0,
                                _______, KC_MINS,
        // right hand
                         _______, _______, _______, _______, _______, _______, _______,
                         _______, _______, _______, _______, _______, _______, _______,
                         _______, _______, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, _______,
                                  _______, _______, _______, _______, _______, _______,
                                                    _______, _______, _______, _______,
             _______, _______,
             _______, _______,
             _______, _______
    ),
    [_SYM] = LAYOUT_5x7(
        // left hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, KC_LCBR, KC_AMPR, KC_ASTR,KC_TILDE, KC_RCBR, _______,
        _______, KC_LPRN,  KC_DLR, KC_PERC, KC_CIRC, KC_RPRN, _______,
        _______, KC_LBRC, KC_EXLM,   KC_AT, KC_HASH, KC_RBRC,
        _______, _______, _______, _______,
                                _______, _______,
                                _______, KC_PIPE,
                                _______, KC_UNDS,
        // right hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, _______,
                                   _______, _______, _______, _______, _______, _______,
                                                     _______, _______, _______, _______,
             _______, _______,
             _______, _______,
             _______, _______
    ),
    [_NAV] = LAYOUT_5x7(
        // left hand
        _______,   _______,   _______,   _______,   _______,   _______,  _______,
        _______,   _______,   _______,   _______,   _______,   _______,  _______,
        _______,   KC_LGUI,   KC_LALT,   KC_LCTL,   KC_LSFT,   _______,  _______,
        _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,
                                    _______, _______,
                                    _______, _______,
                                    _______, _______,
        // right hand
                          _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______, _______, _______,
                          _______, KC_CAPS, KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, _______,
                                    KC_INS, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, _______,
                                                     _______, _______, _______, _______,
             KC_MNXT, _______,
             KC_MPLY, _______,
             KC_MPRV, _______
    ),
    [_SWAY1] = LAYOUT_5x7(
        // left hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______,    M0W7,    M0W8,    M0W9, _______, _______,
        _______, _______,    M0W4,    M0W5,    M0W6, _______, _______,
        _______, _______,    M0W1,    M0W2,    M0W3, _______,
        _______, _______, _______, _______,
                                _______, _______,
                                _______,    M0W0,
                                _______, _______,
        // right hand
                          _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, _______,
                                   _______, _______, _______, _______, _______, _______,
                                                     _______, _______, _______, _______,
             _______, _______,
             _______, _______,
             _______, _______
    ),
    [_SWAY2] = LAYOUT_5x7(
        // left hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______,    M1W7,    M1W8,    M1W9, _______, _______,
        _______, _______,    M1W4,    M1W5,    M1W6, _______, _______,
        _______, _______,    M1W1,    M1W2,    M1W3, _______,
        _______, _______, _______, _______,
                                    _______, _______,
                                    _______,    M1W0,
                                    _______, _______,
        // right hand
                          _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, _______,
                                   _______, _______, _______, _______, _______, _______,
                                                     _______, _______, _______, _______,
             _______, _______,
             _______, _______,
             _______, _______
    ),
    [_SWAY3] = LAYOUT_5x7(
        // left hand
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______,    M2W7,    M2W8,    M2W9, _______, _______,
        _______, _______,    M2W4,    M2W5,    M2W6, _______, _______,
        _______, _______,    M2W1,    M2W2,    M2W3, _______,
        _______, _______, _______, _______,
                                _______, _______,
                                _______, M2W0,
                                _______, _______,
        // right hand
                          _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______, _______, _______,
                          _______, _______, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, _______,
                                   _______, _______, _______, _______, _______, _______,
                                                     _______, _______, _______, _______,
             _______, _______,
             _______, _______,
             _______, _______
    ),
};

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        //case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
        case KC_MINS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}

const key_override_t symbol_swap_one = ko_make_basic(MOD_MASK_SHIFT, KC_EXLM, KC_1);
const key_override_t symbol_swap_two = ko_make_basic(MOD_MASK_SHIFT, KC_AT, KC_2);
const key_override_t symbol_swap_three = ko_make_basic(MOD_MASK_SHIFT, KC_HASH, KC_3);
const key_override_t symbol_swap_four = ko_make_basic(MOD_MASK_SHIFT, KC_DLR, KC_4);
const key_override_t symbol_swap_five = ko_make_basic(MOD_MASK_SHIFT, KC_PERC, KC_5);
const key_override_t symbol_swap_six = ko_make_basic(MOD_MASK_SHIFT, KC_CIRC, KC_6);
const key_override_t symbol_swap_seven = ko_make_basic(MOD_MASK_SHIFT, KC_AMPR, KC_7);
const key_override_t symbol_swap_eight = ko_make_basic(MOD_MASK_SHIFT, KC_ASTR, KC_8);
const key_override_t symbol_swap_nine = ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_9);
const key_override_t symbol_swap_zero = ko_make_basic(MOD_MASK_SHIFT, KC_RPRN, KC_0);
const key_override_t symbol_swap_colon = ko_make_basic(MOD_MASK_SHIFT, KC_COLON, KC_SCLN);

const key_override_t *key_overrides[] = {
    &symbol_swap_one,
    &symbol_swap_two,
    &symbol_swap_three,
    &symbol_swap_four,
    &symbol_swap_five,
    &symbol_swap_six,
    &symbol_swap_seven,
    &symbol_swap_eight,
    &symbol_swap_nine,
    &symbol_swap_zero,
    &symbol_swap_colon,
    NULL
};


bool process_record_user(uint16_t keycode, keyrecord_t *record){
    static uint16_t timer;

    if (SAFE_RANGE <= keycode && keycode < KC_LAST) {
        TapHold taphold = tapholds[keycode - SAFE_RANGE];

        if (record->event.pressed) {
            timer = timer_read();
            register_code(taphold.hold_code);
        } else {
            unregister_code(taphold.hold_code);
            if (timer_elapsed(timer) < TAPPING_TERM) {
                send_char(taphold.tap_char);
            }
        }
        return false;
    }
    return true;


}
