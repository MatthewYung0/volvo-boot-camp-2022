#include <iostream>
#include "variables.h"
#include "check_valid_keys.h"

bool check_valid_keys(const int key) {
    bool valid_key = false;
    if (key == VALID_INPUT_KEYS::ESC_KEY || 
        key == VALID_INPUT_KEYS::START_STOP ||
        key == VALID_INPUT_KEYS::THROTTLE_0 ||
        key == VALID_INPUT_KEYS::THROTTLE_10 ||
        key == VALID_INPUT_KEYS::THROTTLE_20 ||
        key == VALID_INPUT_KEYS::THROTTLE_30 ||
        key == VALID_INPUT_KEYS::THROTTLE_40 ||
        key == VALID_INPUT_KEYS::THROTTLE_50 ||
        key == VALID_INPUT_KEYS::THROTTLE_60 ||
        key == VALID_INPUT_KEYS::THROTTLE_70 ||
        key == VALID_INPUT_KEYS::THROTTLE_80 ||
        key == VALID_INPUT_KEYS::THROTTLE_90 ||
        key == VALID_INPUT_KEYS::INDICATE_LEFT ||
        key == VALID_INPUT_KEYS::INDICATE_RIGHT ||
        key == VALID_INPUT_KEYS::GEAR_DRIVE ||
        key == VALID_INPUT_KEYS::GEAR_NEUTRAL ||
        key == VALID_INPUT_KEYS::GEAR_MANUAL ||
        key == VALID_INPUT_KEYS::GEAR_REVERSE ||
        key == VALID_INPUT_KEYS::GEAR_PARK) {
            valid_key = true;
        }
        return valid_key;
}
