#pragma once

#include "variables.h"
#include "socket_can.h"

int set_frame_position(const int input, scpp::CanFrame* can_frame);