#include <iostream>
#include <string>
#include <bitset>

// Function to concatenate bitfields
template <size_t N1, size_t N2, size_t N3, size_t N4, size_t N5>
std::bitset<N1 + N2 + N3 + N4 + N5> concat(const std::bitset<N1> &b1,
                                           const std::bitset<N2> &b2,
                                           const std::bitset<N3> &b3,
                                           const std::bitset<N4> &b4,
                                           const std::bitset<N5> &b5)
{
    std::string s1 = b1.to_string();
    std::string s2 = b2.to_string();
    std::string s3 = b3.to_string();
    std::string s4 = b4.to_string();
    std::string s5 = b5.to_string();
    return std::bitset<N1 + N2 + N3 + N4 + N5>(s1 + s2 + s3 + s4 + s5);
}

// Function to convert number to string
std::string toBinary(int number)
{
    std::string binary;
    while (number != 0)
    {
        binary += (number % 2 == 0 ? "0" : "1");
        number /= 2;
    }
    return binary;
}

// Function to check if distance is incorrect
bool checkErrorDistance(int number)
{
    if (number > 7 || number < 1)
    {
        std::cout << "\nThe number entered is greater than 7 or less than 1";
        return false;
    }
    return true;
}

int main()
{
    int speed_input = 0;
    int front_input = 0;
    int rear_input = 0;
    int right_input = 0;
    int left_input = 0;

    // Speed bit calculation
    std::cout << "Enter the speed as an integer (1 = 10km/hr ... 15 = 150km/hr): ";
    std::cin >> speed_input;
    // Error checking (cannot be 0 km/hr or more than 150km/hr since it is 4 bits)
    if (speed_input > 15 || speed_input < 1)
    {
        std::cout << "The number entered is greater than 15 or less than 1";
        return 0;
    }
    std::bitset<4> speed(speed_input);
    std::cout << speed << std::endl;

    // Front distance bit calculation
    std::cout << "\nEnter the front distance as an integer (1 = 150mm ... 7 = 1050mm): ";
    std::cin >> front_input;
    // Error checking for front distance (cannot be less than 150mm or more than 1050/hr since it is 3 bits)
    if (!checkErrorDistance(front_input))
    {
        return 0;
    }
    std::bitset<3> front(front_input);
    std::cout << front << std::endl;

    // Rear distance bit calculation
    std::cout << "\nEnter the rear distance as an integer (1 = 150mm ... 7 = 1050mm): ";
    std::cin >> rear_input;
    if (!checkErrorDistance(rear_input))
    {
        return 0;
    }
    std::bitset<3> rear(rear_input);
    std::cout << rear << std::endl;

    // Right distance bit calculation
    std::cout << "\nEnter the right distance as an integer (1 = 150mm ... 7 = 1050mm): ";
    std::cin >> right_input;
    if (!checkErrorDistance(right_input))
    {
        return 0;
    }
    std::bitset<3> right(right_input);
    std::cout << right << std::endl;

    // Left distance bit calculation
    std::cout << "\nEnter the left distance as an integer (1 = 150mm ... 7 = 1050mm): ";
    std::cin >> left_input;
    if (!checkErrorDistance(left_input))
    {
        return 0;
    }
    std::bitset<3> left(left_input);
    std::cout << left << std::endl;

    // Concantentating bitfields
    std::bitset<16> result = concat(speed, front, rear, right, left);
    // Printing results
    std::cout << std::endl << result;
}