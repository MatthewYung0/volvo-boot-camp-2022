#include <iostream>

void PrintPrimeNumbers(int number_one, int number_two);

int main() {
    int input_one = 0;
    int input_two = 0;
    std::cout << "Enter 2 numbers: ";
    scanf("%d %d", &input_one, &input_two);

    PrintPrimeNumbers(input_one, input_two);

}
void PrintPrimeNumbers(int number_one, int number_two) {

    int start;
    int end;
    bool isPrime = true;

    if (number_one <= number_two) {
        start = number_one;
        end = number_two;
    } else {
        start = number_two;
        end = number_one;
    }

    while (start <= end) {
        if (start <= 1) {
            continue;
        }
        for (int i = 2; i < start; i++) {
            if (start % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
        std::cout << start << " ";
        }
        isPrime = true;
        start++;
    }
    std::cout << " are prime numbers between " << number_one << " and " << number_two;
}