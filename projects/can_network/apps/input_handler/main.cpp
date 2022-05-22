#include <curses.h>
#include <iostream>
#include <chrono>
#include <thread>
#include <cassert>
#include "check_valid_keys.h"
#include "variables.h"
#include "socket_can.h"
#include "set_frame.h"

int main() {
    
    initscr(); // Start curses mode
    cbreak(); // Gets one character at a time
    noecho(); // Supresses playback of entered character
    keypad(stdscr, TRUE); // Enables use of special keystrokes (i.e. arrows)

    int current_value = -1; // Variable to hold current input value
    int new_input = -1; // Variable to hold the new input value
    nodelay(stdscr, TRUE);

    scpp::SocketCan socket_can; // Declaring a new SocketCan
    scpp::SocketCanStatus socket_can_status; // Setting variable for holding socket_can status
    socket_can_status = socket_can.open(can_network_name); // Opening SocketCan && socket_can_status == scpp::SocketCanStatus::STATUS_OK

    scpp::CanFrame can_frame;

    while (new_input != VALID_INPUT_KEYS::ESC_KEY && socket_can_status == scpp::SocketCanStatus::STATUS_OK)
    {
        if ((new_input = getch()) == ERR) {
            std::cout << current_value << "\n\r";
        } else if (check_valid_keys(new_input)){
            current_value = new_input;
        }
        std::cout << current_value << "\n\r";
        can_frame.data[set_frame_position(current_value, &can_frame)] = current_value;
        socket_can_status = socket_can.write(can_frame);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    endwin();
    return 0;
}