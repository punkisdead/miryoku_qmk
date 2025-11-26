// Copyright 2025 punkisdead
// Based on manna-harbour_miryoku

#pragma once

// Custom base layer with modified thumb keys MUST be defined BEFORE including miryoku headers
// Standard QWERTY alphas with modified thumb row
// Thumb keys from left to right: ESC, TAB, RET, SPC, BSPC, DEL
#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),   \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_TAB),  LT(U_MOUSE,KC_ENT),LT(U_SYM,KC_SPC),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#include "users/manna-harbour_miryoku/manna-harbour_miryoku.h"
