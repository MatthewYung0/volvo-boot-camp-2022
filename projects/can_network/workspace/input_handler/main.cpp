#include <curses.h>
#include <iostream>
#include <thread>
#include <chrono>
#include "check_input.h"
#include "can_message.h"
#include "check_input.h"
#include "socket_can_setup.h"
#include "socket_can.h"

int main()
{
    initscr();
    cbreak();
    noecho(); // Prevents the key itself from being printed.
    keypad(stdscr, TRUE); // Allows the capture of special keystrokes such as Backspace, Delete
    int ch = 0;
    nodelay(stdscr, TRUE);
    std::chrono::seconds interval (1); // Just to allow for easier visualisation of output.
    
    scpp::SocketCan sockat_can;
    InitSocketcan(sockat_can);

    CanMessage can_msg;
    
    int current_value = 0; // Variable to hold the previous keyboard input
    for (;;)
    {
        if ((ch = getch()) == ERR)
        {
            //printf("Previous value : %d \n", current_value); // Prints out the previous input
            std::this_thread::sleep_for(interval); // Delays printing by 1 second for easier visualisation of output.
            can_msg.SetFrame(ch);
            SendMessage(sockat_can, can_msg);
        }
        else
        {
            if (checkInput(ch) != -1) {
                // Assigns current value with new input
                current_value = ch;
                printf("Current value : %d \n", current_value);
                can_msg.SetFrame(ch);
                SendMessage(sockat_can, can_msg);
            } else {
                printf("Invalid Input!\n");
            } 
        }
    }
    endwin();
    return 0;
}