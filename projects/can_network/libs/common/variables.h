#pragma once

#include <string>

const std::string can_network_name = "vcan0";

const uint32_t frame_id_input_handler_to_message_hander = 0xAAA;
const uint32_t frame_id_message_handler_to_output_display = 0xBBB;
const uint32_t frame_id_input_handler_to_output_display = 0xCCC;

namespace VALID_INPUT_KEYS{
    const int ESC_KEY = 27;
    const int START_STOP = 115;
    const int THROTTLE_0 = 48;
    const int THROTTLE_10 = 49;
    const int THROTTLE_20 = 50;
    const int THROTTLE_30 = 51;
    const int THROTTLE_40 = 52;
    const int THROTTLE_50 = 53;
    const int THROTTLE_60 = 54;
    const int THROTTLE_70 = 55;
    const int THROTTLE_80 = 56;
    const int THROTTLE_90 = 57;
    const int INDICATE_LEFT = 260;
    const int INDICATE_RIGHT = 261;
    const int GEAR_DRIVE= 100;
    const int GEAR_NEUTRAL = 110;
    const int GEAR_MANUAL = 109;
    const int GEAR_REVERSE = 114;
    const int GEAR_PARK = 98;
};