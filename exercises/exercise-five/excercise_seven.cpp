#include <iostream>

enum FanLevel {
    Level1,
    Level2,
    Level3
};

FanLevel low = Level1;
FanLevel medium = Level2;
FanLevel high = Level3;

int main() {
    FanLevel *input;
    char *ptr = input;

    std::cout << "Enter the fan level: ";
    std::cin >> ptr;

    switch(input) {
        case low: 
            std::cout << "Fan level set to level 1";
        
    }

    std::cout << ptr;
}