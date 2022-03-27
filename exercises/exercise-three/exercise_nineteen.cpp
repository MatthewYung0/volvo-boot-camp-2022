#include <iostream>

int compareArray(int a_size, int a[],int b[]);

int main()
{
    int a[] = {1,2,2,3,3,3,3,4,4,4,4,3,3,3,3,3,3,3};
    int a_size = sizeof (a) / sizeof (a[0]);

    int b[] = {1,2,2,3,3,3,3,5,4,4,4,3,3,3,3,3,3,3};


    int code = compareArray(a_size, a, b);
    std::cout << code;
}

int compareArray(int a_size, int a[], int b[]) {
    for (int i = 0; i < a_size; i++) {
        if (a[i] != b[i]) {
            return 1;
        } 
    }
    return 0;
}