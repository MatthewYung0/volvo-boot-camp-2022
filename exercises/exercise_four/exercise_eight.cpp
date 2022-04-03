#include <iostream>

void swapArray(int *array_one_ptr, int *array_two_ptr, int size) {

    int temporary[size] = {0};

    for (int i = 0; i < size; i++) {
        temporary[i] = *(&array_one_ptr[i]);
        *(&array_one_ptr[i]) = *(&array_two_ptr[i]);
        *(&array_two_ptr[i]) = temporary[i];
    }

    std::cout << "Array One\n";
    for (int i = 0; i < size; i++) {
        std::cout << *(&array_one_ptr[i]) << " ";
    }
    
    std::cout << "Array Two\n";
    for (int i = 0; i < size; i++) {
        std::cout << *(&array_two_ptr[i]) << " ";;
    }
}

int main() {

    int array_one[5] = {5,8,45,832,321};
    int array_two[5] = {123,65,50,1,2};

    int *ptr_one = array_one;
    int *ptr_two = array_two;

    int size = sizeof(array_one)/sizeof(array_one[0]);

    swapArray(ptr_one, ptr_two, size);

}