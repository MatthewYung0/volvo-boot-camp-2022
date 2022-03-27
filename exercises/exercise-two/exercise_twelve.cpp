#include <iostream>

int calculateHeaterTime(int number);

int main() {
    int input = 0;
    std::cout << "Enter a number: ";
    scanf("%d", &input);
    std::cout << calculateHeaterTime(input) << " minutes of heating time are needed at a temperature of " << input;
}

int calculateHeaterTime(int number) {
    if (number > 0 && number < 31) {
        return 7;
    } else if (number > 30 && number < 61) {
        return 5;
    } else if (number > 60 && number < 91) {
        return 3;
    } else if (number > 90 && number < 101) {
        return 1;
    } else if (number > 100) {
        return 0;
    }
    return -1;
}