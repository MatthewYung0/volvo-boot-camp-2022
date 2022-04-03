#include <iostream>

int main() {
    char string[10] = "BAT";
    char *string_ptr = string;
    char new_string[3];

    int size = sizeof(string)/sizeof(string[0]);

    for (int i = 0; i < size; i++) {
        if (*string_ptr == 0) {
            string_ptr--;
            int j = 0;
            new_string[0] = *string_ptr;
            new_string[1] = ' ';
            string_ptr--;
            new_string[2] = *string_ptr;
            break;
        }
        string_ptr++;
    }

    for (int i = 0; i < 3; i++) {
        std::cout << new_string[i];
    }
}