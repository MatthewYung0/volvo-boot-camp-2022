#include <iostream>

int numberCount(int a_size, int a[]);

int main()
{
    int a[] = {1,2,2,3,3,3,3,4,4,4,4,3,3,3,3,3,3,3};
    int a_size = sizeof (a) / sizeof (a[0]);

    int size = numberCount(a_size, a);
    std::cout << size;
}

int numberCount(int a_size, int a[]) {

    int number_of_occurances = 0;
    int temporary = 0;

    for (int i = 0; i < a_size; i++) {
        if (a[i] == a[i+1]) {
            for (int j = i; a[i] == a[j]; j++) {
                temporary++;
            }
            if (temporary > number_of_occurances) {
                number_of_occurances = temporary;
            }
            temporary = 0;
        }
    }
    return number_of_occurances;
}