#include QMK_KEYBOARD_H

enum layer_names {
  _QWERTZ,
  _FNARROW,
  _FNNUM,
  _SPECIAL,
};


#define FNARROW MO(_FNARROW)
#define FNNUM TT(_FNNUM)
#define SPECIAL MO(_SPECIAL)

// brackets L (left) and R (right)
// BCK_R = Bracket round
#define BCK_R_L LSFT(KC_8)
#define BCK_R_R LSFT(KC_9)
// BCK_C = Bracket curly
#define BCK_C_L RALT(KC_7)
#define BCK_C_R RALT(KC_0)
// BCK_S = Bracket square
#define BCK_S_L RALT(KC_8)
#define BCK_S_R RALT(KC_9)
// BCK_A = Bracket angled
#define BCK_A_L KC_NUBS
#define BCK_A_R LSFT(KC_NUBS)

#define MY_FWSD LSFT(KC_7)
#define MY_BCKS RALT(KC_MINS)

#define MY_QSMA LSFT(KC_MINS)
#define MY_EXMA LSFT(KC_1)

#define MY_CIRC KC_GRV
#define MY_DASH KC_SLASH
#define MY_PERC LSFT(KC_5)
#define MY_COLO LSFT(KC_DOT)
#define MY_PIPE RALT(KC_NUBS)
#define MY_DQUO LSFT(KC_2)
#define MY_SQUO LSFT(KC_NUHS)
#define MY_TILD RALT(KC_RBRC)
#define MY_SCOL LSFT(KC_COMM)
#define MY_BCTC LSFT(KC_EQL)
#define MY_USCO LSFT(KC_SLASH)
#define MY_AT RALT(KC_Q)
#define MY_DOT KC_DOT
#define MY_ASTR LSFT(KC_RBRC)
#define MY_EQ LSFT(KC_0)
#define MY_HASH KC_NUHS
#define MY_DLLR LSFT(KC_4)
#define MY_AMP LSFT(KC_6)
#define MY_PLUS KC_RBRC
#define MY_COMM KC_COMM
#define MY_EUR RALT(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTZ] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    FNARROW,          KC_LALT, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_BSPC, KC_LCTL,                   KC_ENT,  KC_SPC,  SPECIAL
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FNARROW] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NLCK, KC_MPLY, KC_MUTE, KC_PSCR, KC_SLCK, KC_PAUS,                            KC_MYCM, KC_CALC, KC_MAIL, KC_MSEL, KC_NO,   KC_RBRC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_CAPS, KC_MNXT, KC_VOLU, KC_INS,  KC_HOME, KC_PGUP,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   KC_NUHS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_MPRV, KC_VOLD, KC_DEL,  KC_END,  KC_PGDN, KC_TRNS,          FNNUM,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_EQL,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, KC_NO,   KC_LCTL,                   KC_NO,   KC_LCTL, KC_LALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


  [_FNNUM] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO,   KC_NO,   KC_PEQL, KC_PSLS, KC_PAST, KC_PMNS,                            RGB_TOG, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_G,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_P7,   KC_P8,   KC_P9,   KC_PPLS,                            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_P4,   KC_P5,   KC_P6,   KC_PDOT,                            RGB_MOD, KC_NO,   RGB_SPI, RGB_VAI, RGB_SAI, RGB_HUI,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   KC_NO,   KC_P1,   KC_P2,   KC_P3,   KC_PENT,  KC_TRNS,         FNNUM,   RGB_RMOD,KC_NO,   RGB_SPD, RGB_VAD, RGB_SAD, RGB_HUD,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_P0,   KC_PCMM,  KC_PENT,                  KC_BSPC, KC_SPC,  KC_NO
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SPECIAL] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_NO,   MY_DASH, MY_SCOL, MY_COMM, MY_TILD, MY_DQUO,                            MY_SQUO, MY_PIPE, MY_DOT,  MY_COLO, MY_USCO, KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     MY_QSMA, BCK_A_L, BCK_S_L, BCK_C_L, BCK_R_L, MY_FWSD,                            MY_BCKS, BCK_R_R, BCK_C_R, BCK_S_R, BCK_A_R, MY_EXMA,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     MY_EUR,  MY_CIRC, MY_PERC, MY_ASTR, MY_EQ,   MY_HASH, KC_NO,            KC_TRNS, MY_DLLR, MY_AMP,  MY_PLUS, MY_BCTC, MY_AT,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_NO,   KC_DEL,  KC_HOME,                   KC_END,  KC_SPC,  KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};
