#ifdef COMBO_MUST_TAP_PER_COMBO
bool get_combo_must_tap(uint16_t combo_index, combo_t *combo) {
    // All combos is tap-only
    return true;
}
#endif

void handle_layer_toggle(uint8_t layer) {
    uint8_t current_layer = get_highest_layer(layer_state);
    if (current_layer != layer) {
        layer_on(layer);
        layer_lock_on(layer);
    } else {
        layer_lock_off(layer);
        layer_off(layer);
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(0, KC_P1):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_P1);
            } else if (record->event.pressed) {
                tap_code16(KC_F1);
            }
            return false;
        case LT(0, KC_P2):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_P2);
            } else if (record->event.pressed) {
                tap_code16(KC_F2);
            }
            return false;
        case LT(0, KC_P3):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_P3);
            } else if (record->event.pressed) {
                tap_code16(KC_F3);
            }
            return false;
        case LT(0, KC_P4):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_P4);
            } else if (record->event.pressed) {
                tap_code16(KC_F4);
            }
            return false;
        case LT(0, KC_P5):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_P5);
            } else if (record->event.pressed) {
                tap_code16(KC_F5);
            }
            return false;
        case LT(0, KC_P6):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_P6);
            } else if (record->event.pressed) {
                tap_code16(KC_F6);
            }
            return false;
        case LT(0, KC_P7):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_P7);
            } else if (record->event.pressed) {
                tap_code16(KC_F7);
            }
            return false;
        case LT(0, KC_P8):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_P8);
            } else if (record->event.pressed) {
                tap_code16(KC_F8);
            }
            return false;
        case LT(0, KC_P9):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_P9);
            } else if (record->event.pressed) {
                tap_code16(KC_F9);
            }
            return false;
        case LT(0, KC_NUM):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_NUM);
            } else if (record->event.pressed) {
                tap_code16(KC_F10);
            }
            return false;
        case LT(0, KC_INS):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_INS);
            } else if (record->event.pressed) {
                tap_code16(KC_F11);
            }
            return false;
        case LT(0, KC_DEL):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_DEL);
            } else if (record->event.pressed) {
                tap_code16(KC_F12);
            }
            return false;
        case LT(0, KC_SPC):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_SPC);
            } else if (record->event.pressed) {
                tap_code16(KC_ENT);
            }
            return false;
        case LT(0, KC_A):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_A);
            } else if (record->event.pressed) {
                tap_code16(C(KC_A));
            }
            return false;
        case LT(0, KC_X):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_X);
            } else if (record->event.pressed) {
                tap_code16(C(KC_X));
            }
            return false;
        case LT(0, KC_C):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_C);
            } else if (record->event.pressed) {
                tap_code16(C(KC_C));
            }
            return false;
        case LT(0, KC_V):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_V);
            } else if (record->event.pressed) {
                tap_code16(C(KC_V));
            }
            return false;
        case TG(4):
            if (!record->event.pressed) {
                return false; // Already handled the keycode (doing nothing). Logic will happen on presses, nothing is done on releases
            }
            handle_layer_toggle(4);
            return false;
        case TG(5):
            if (!record->event.pressed) {
                return false;
            }
            handle_layer_toggle(5);
            return false;
        case TG(6):
            if (!record->event.pressed) {
                return false;
            }
            handle_layer_toggle(6);
            return false;
        case TG(7):
            if (!record->event.pressed) {
                return false;
            }
            handle_layer_toggle(7);
            return false;
        default:
            return true;
    }
    return true;
}