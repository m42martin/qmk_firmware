LEADER_EXTERNS();

// Declare a boolean variable to keep track of whether any sequence
// will have been matched.
bool did_leader_succeed;

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    did_leader_succeed = false;
    leading            = false;

    // SEQ_ONE_KEY,
    // SEQ_TWO_KEYS,
    // SEQ_THREE_KEYS,
    // SEQ_FOUR_KEYS,
    // SEQ_FIVE_KEYS.

    // Replace the sequences below with your own sequences.
    SEQ_ONE_KEY(KC_T) {
      // When I press KC_LEAD and then T, this sends CTRL + SHIFT + T
      SEND_STRING(SS_LCTRL(SS_LSFT("t")));
    }

    // Note: This is not an array, you don't need to put any commas
    // or semicolons between sequences.

    SEQ_THREE_KEYS(KC_P, KC_R, KC_T) {
        // When I press KC_LEAD P,R,T ; PRINT SCREEN
        tap_code(KC_PRINT_SCREEN);
    }


    SEQ_TWO_KEYS(KC_N, KC_T) {
      // When I press KC_LEAD and then N followed by T, this sends CTRL + T
      SEND_STRING(SS_LCTRL("t"));
    }

    leader_end();
  }
}

void leader_start(void) {
  // Add your code to run when pressing the leader key here
}

void leader_end(void) {
  // Add your code to run when a leader key sequence ends here
  if (did_leader_succeed) {
    // If any sequence was matched, did_leader_succeed will have
    // been set to true up in the matrix_scan_user function.
    // Put your code for a matched leader key sequence here.
  } else {
    // If no sequence was matched, did_leader_succeed will not
    // have been set to true anywhere, so we'll end up here.
    // Put your code for an unmatched leader key sequence here.
  }
}
