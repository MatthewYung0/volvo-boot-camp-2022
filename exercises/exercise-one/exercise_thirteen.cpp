#include <iostream>
#include <math.h>

int main() {

    int number = 0;
    bool isPrime = true;

    std::cout << "Enter a positive number: ";
    scanf("%d", &number);

    if (number <= 1) {
        std::cout << "Number must be greater than 1!";
    }

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            std::cout << number << " is NOT a prime number!";
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        std::cout << number << " is a prime number!";
    }
    
}