#include <iostream>
#include <string.h>

int main() {

    char text[] = "Hello World";
    char *string_ptr = text;

    int size = 0;

    while (*string_ptr != '\0') {
        size++;
        string_ptr++;
    }
    std::cout << size;
}