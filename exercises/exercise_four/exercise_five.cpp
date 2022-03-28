#include <iostream>

int *createNewArray(int size, int* array, int* new_array);

int main() {

    int array[] = {5,4,3,2,4,10,40};
    int size = sizeof(array)/sizeof(array[0]);
    int new_array[size];

    int *array_ptr = array;
    int *new_array_ptr = new_array;
    createNewArray(size, array_ptr, new_array_ptr);


    for (int i = 0; i < sizeof(new_array) / sizeof(new_array[0]); i++)
    {
        std::cout << *new_array_ptr << " ";
        new_array_ptr++;
    }

}

int *createNewArray(int size, int* array, int* new_array) {

    for (int i = 0; i < size; i++) {
        *new_array = *array;
        new_array++;
        array++;
    }
    return new_array;
}