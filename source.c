#include QMK_KEYBOARD_H

#define alt_esc ALT_T(KC_ESC)
#define ctl_bsp CTL_T(KC_BSPC)
#define sft_spc SFT_T(KC_SPC)

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LT(1, KC_T):
      return true;
    case LT(1, KC_N):
      return true;
    case LT(2, KC_S):
      return true;
    case LT(2, KC_E):
      return true;
    default:
      return false;
  }
}
