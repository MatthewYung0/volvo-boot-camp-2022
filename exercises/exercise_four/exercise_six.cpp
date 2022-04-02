#include <iostream>

void printArray(int array[], int size) {
    int max = *array;
    int *array_ptr[size];

    for (int i = 0; i < size; i++) {
        array_ptr[i] = &array[i];
        if (*array_ptr[i] > max) {
            max = *array_ptr[i];
        }
        std::cout << *array_ptr[i] << " ";
    }
    std::cout << "\n" << max;
}

int main() {
    int array[] = {5,4,35,2,4,59,40};
    int size = sizeof(array)/sizeof(array[0]);
    printArray(array, size);
}