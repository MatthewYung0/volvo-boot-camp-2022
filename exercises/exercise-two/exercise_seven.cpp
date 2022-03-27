#include <iostream>

bool CheckIfMultiple(int number_one, int number_two);

int main() {
    int input_one = 0;
    int input_two = 0;
    std::cout << "Enter 2 numbers: ";
    scanf("%d %d", &input_one, &input_two);

    if (CheckIfMultiple(input_one, input_two)) {
        std::cout << input_one << " is a multiple of " << input_two;
    } else {
        std::cout << input_one << " is NOT a multiple of " << input_two;
    }
}

bool CheckIfMultiple(int number_one, int number_two) {
    return number_two % number_one == 0;
}