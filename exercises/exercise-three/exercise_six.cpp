#include <iostream>

int checkFirstOccurance(int numbers_size, int * numbers);

int main() {
    int array[] = {1,2,3,4,4,4};
    int *array_ptr = array;
    std::cout << "The index of the first occurance is: " << checkFirstOccurance ((sizeof array / sizeof array[0]), array_ptr);
}

int checkFirstOccurance (int numbers_size, int *numbers) {

    for (int i = 0; i < numbers_size; i++) {
        for (int j = i + 1; j < numbers_size; j++) {
            if (numbers[i] == numbers[j]) {
                for (int k = numbers_size; k > 0; k--) {
                    if (numbers[k] == numbers[i]) {
                        return k;
                    }
                }
            }
        }
    }
    return -1;
}