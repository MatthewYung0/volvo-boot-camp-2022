#include <iostream>

int main() {
    
    // int counter_one = 0;
    // int counter_two = 0;
    // int print_times = 0;

    char star = '*';
    int number = 0;
    std::cout << "Enter how many rows of stars to print: ";
    scanf("%d", &number);

    // while (counter_one <= number) {
    //     while (counter_two < print_times) {
    //         std::cout << star << " ";
    //         counter_two++;
    //     }
    //     std::cout << std::endl;
    //     print_times++;
    //     counter_one++;
    //     counter_two = 0;
    // }

    for (int i = 1; i <= number; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << star << " ";
        }
        std::cout << std::endl;
    }
}