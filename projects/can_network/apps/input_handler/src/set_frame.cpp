#include <iostream>
#include "set_frame.h"

int set_frame_position(const int input, scpp::CanFrame* can_frame) {
    int frame_position = -1;
    switch (input) {
        case VALID_INPUT_KEYS::START_STOP:
        frame_position = 0;
        break;
        case VALID_INPUT_KEYS::GEAR_DRIVE:
        case VALID_INPUT_KEYS::GEAR_NEUTRAL:
        case VALID_INPUT_KEYS::GEAR_MANUAL:
        case VALID_INPUT_KEYS::GEAR_REVERSE:
        case VALID_INPUT_KEYS::GEAR_PARK:
        frame_position = 1;
        break;
        case VALID_INPUT_KEYS::THROTTLE_0:
        case VALID_INPUT_KEYS::THROTTLE_10:
        case VALID_INPUT_KEYS::THROTTLE_20:
        case VALID_INPUT_KEYS::THROTTLE_30:
        case VALID_INPUT_KEYS::THROTTLE_40:
        case VALID_INPUT_KEYS::THROTTLE_50:
        case VALID_INPUT_KEYS::THROTTLE_60:
        case VALID_INPUT_KEYS::THROTTLE_70:
        case VALID_INPUT_KEYS::THROTTLE_80:
        case VALID_INPUT_KEYS::THROTTLE_90:
        frame_position = 2;
        break;
        case VALID_INPUT_KEYS::INDICATE_LEFT:
        case VALID_INPUT_KEYS::INDICATE_RIGHT:
        frame_position = 3;
        break;
    }

    if (frame_position == 0 || frame_position == 1 || frame_position == 2) {
            can_frame->id = frame_id_input_handler_to_message_hander;
    } else {
            can_frame->id = frame_id_input_handler_to_output_display;
    }
    return frame_position;
}