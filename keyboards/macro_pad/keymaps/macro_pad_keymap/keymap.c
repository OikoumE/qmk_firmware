#include QMK_KEYBOARD_H


enum layer_names{ 
    BLENDER,
    LAYERNAME
};

enum {
    TD_ESC_CAPS,
    
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_TAB, KC_ESCAPE, KC_A, KC_Q, KC_E, KC_F, KC_J, 
        KC_I, KC_F, KC_H, KC_LEFT_CTRL, KC_LEFT_SHIFT, KC_LEFT_ALT, KC_S, 
        KC_G, KC_P, KC_M, KC_X, KC_Z, KC_Y
    ),
    [1] = LAYOUT(
        KC_TAB, KC_ESCAPE, KC_A, KC_Q, KC_E, KC_F, KC_J, 
        KC_I, KC_F, KC_H, KC_LEFT_CTRL, KC_LEFT_SHIFT, KC_LEFT_ALT, KC_S, 
        KC_G, KC_P, KC_M, KC_X, KC_Z, KC_Y
    ),
};
