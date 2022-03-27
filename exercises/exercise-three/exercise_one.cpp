#include <iostream>

int summation(int numbers_size, int * numbers);

int main() {
    int array[] = {5,4,3,5,3,2,1};
    int *array_ptr = array;

    std::cout << "The sum of the array is: " << summation((sizeof array / sizeof array[0]), array_ptr);
}

int summation (int numbers_size, int *numbers) {
    int sum = 0;
    for (int i = 0; i < numbers_size; i++) {
        sum += numbers[i];
    }
    return sum;
}