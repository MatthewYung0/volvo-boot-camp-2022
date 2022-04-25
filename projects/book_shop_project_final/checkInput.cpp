#include "checkInput.h"

bool checkInput()
{
    if (std::cin.fail())
    {
        std::cout << "\nInput needs to be a number!\n";
        std::cout << "Returning to Main Menu...\n";
        std::cin.clear();
        std::cin.ignore(255, '\n');
        return false;
    }
    return true;
};