#include <iostream>

int checkPower(int number);

int main() {
    int input = 0;
    std::cout << "Enter a number: ";
    scanf("%d", &input);

    if (checkPower(input) == 1) {
        std::cout << input << " is a power of 2";
    } else if (checkPower(input) == 0) {
        std::cout << input << " is a power of 3";
    } else {
        std::cout << input << " is NOT a power of 2 or 3";
    }
}

int checkPower(int number) {

    int power_of_two = 2;
    int power_of_two_sum = 1;
    
    int power_of_three = 3;
    int power_of_three_sum = 1;

    for (int i = 0; i <= number; i++) {
        power_of_two_sum *= power_of_two;
        power_of_three_sum *= power_of_three;
        if (power_of_two_sum == number || number == 0) {
            return 1;
        } else if (power_of_three_sum == number) {
            return 0;
        }
    }
    return -1;
}