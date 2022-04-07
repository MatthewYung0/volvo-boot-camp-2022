#include <iostream>

int convertToBinary(int number)
{
    int binary = 0, remainder, product = 1;
    while (number != 0)
    {
        remainder = number % 2;
        binary = binary + (remainder * product);
        number = number / 2;
        product *= 10;
    }
    return binary;
}

int main() {
    //Binary input
    uint16_t binary_input = 0b1011101001011011;

    //Masks for grabbing the Seatbelts, Windows, Doors, and Lights
    uint16_t MASKS[4] = {0b1111100000000000, 0b0000011110000000, 0b0000000001111000, 0b0000000000000111};

    //Array to hold value for components; 0 - Seatbelts, 1 - Windows, 2 - Doors, 3 - Lights
    uint16_t components[4] = {0};

    //Getting Seatbelts value
    components[0] = (binary_input & MASKS[0]) >> 11;
    //Getting Windows value
    components[1] = (binary_input & MASKS[1]) >> 7;
    //Getting Doors value
    components[2] = (binary_input & MASKS[2]) >> 3;
    //Getting Lights value
    components[3] = (binary_input & MASKS[3]) >> 0;

    std::cout << "Seatbelt binary value: " << convertToBinary(components[0]) << std::endl;
    std::cout << "Seatbelt decimal value: " << components[0] << std::endl << std::endl;

    std::cout << "Window binary value: " << convertToBinary(components[1]) << std::endl;
    std::cout << "Window decimal value: " << components[1] << std::endl << std::endl;

    std::cout << "Door binary value: " << convertToBinary(components[2]) << std::endl;
    std::cout << "Door decimal value: " << components[2] << std::endl << std::endl;
    
    std::cout << "Light binary value: " << convertToBinary(components[3]) << std::endl;
    std::cout << "Light decimal value: " << components[3] << std::endl << std::endl;
}