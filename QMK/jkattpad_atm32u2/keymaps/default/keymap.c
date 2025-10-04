#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ansi(
        KC_MPRV,  KC_MPLY, KC_MNXT,
        KC_EQUAL, KC_PSLS, KC_PAST, KC_PMNS, KC_MUTE,
        KC_KP_7,  KC_KP_8, KC_KP_9, KC_PPLS, S(KC_9),
        KC_KP_4,  KC_KP_5, KC_KP_6, S(KC_8), S(KC_0),
        KC_KP_1,  KC_KP_2, KC_KP_3, KC_PENT, DM_PLY1,
        LT(1, KC_KP_0),    KC_PDOT,          DM_REC1
    ),
    [1] = LAYOUT_ansi(
        _______,  _______, _______,
        _______,  _______, _______, _______, _______,
        UC(0x394), UC(0x3C0), UC(0x3A3),  _______, _______,
        UC(0x3A6), UC(0x3A8), UC(0x3A9),  _______, _______,
        UC(0x3B8), UC(0x3C3), UC(0x3C9),  _______, _______,
        LT(0, KC_KP_0),              _______,      DM_PLY1
      )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
            if (clockwise) {
                tap_code_delay(KC_VOLU, 10);
            } else {
                tap_code_delay(KC_VOLD, 10);
            }
    return false;
}
