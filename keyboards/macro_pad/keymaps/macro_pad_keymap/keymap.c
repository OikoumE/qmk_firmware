#include QMK_KEYBOARD_H


enum layer_names{ 
    BLENDER,
    LAYERNAME
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, 
        KC_H, KC_I, KC_J, KC_K, KC_L, KC_M, KC_N, 
        KC_O, KC_P, KC_Q, KC_R, KC_S, KC_T, KC_U
    ),
    [1] = LAYOUT(
        KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, 
        KC_H, KC_I, KC_J, KC_K, KC_L, KC_M, KC_N, 
        KC_O, KC_P, KC_Q, KC_R, KC_S, KC_T, KC_U
    )
};
