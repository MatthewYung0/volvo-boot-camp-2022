#include <iostream>

bool IsEven(int number);

int main() {
    int input = 0;
    std::cout << "Enter a number: ";
    scanf("%d", &input);
    
    if (IsEven(input)) {
        std::cout << input << " is an even number!";
    } else {
        std::cout << input << " is an odd number!";
    }
}

bool IsEven(int number) {
    return number % 2 == 0;
}