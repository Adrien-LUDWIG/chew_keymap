// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_french.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
     * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
     * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
     * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
     * ├───┼───┼───┼───┼───┘       └───┼───┼───┼───┼───┤
     * │ Z │ X │ C │ V │               │ M │ , │ . │ / │
     * └───┴───┴───┴───┘               └───┴───┴───┴───┘
     *           ┌───┐                   ┌───┐
     *           │ B ├───┐           ┌───┤ N │
     *           └───┤Bsp├───┐   ┌───┤Ent├───┘
     *               └───┤Alt│   │   ├───┘
     *                   └───┘   └───┘
     */
    [0] = LAYOUT(FR_Q, FR_W, FR_E, FR_R, FR_T, FR_Y, FR_U, FR_I, FR_O, FR_P,
                 FR_A, FR_S, FR_D, FR_F, FR_G, FR_H, FR_J, FR_K, FR_L, FR_SCLN,
                 FR_Z, FR_X, FR_C, FR_V, FR_M, FR_COMM, FR_DOT, FR_SLSH, FR_B,
                 KC_BSPC, KC_RALT, KC_SPC, KC_ENT, FR_N)};
