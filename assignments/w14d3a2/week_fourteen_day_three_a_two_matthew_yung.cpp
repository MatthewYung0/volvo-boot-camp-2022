#include <iostream>
#include <iomanip>
#include <random>
#include <map>

// Function to generate random numbers between 0-33
int generateRandomNum(int min, int max)
{
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(min, max);
    return uni(rng);
}

int main()
{
    // Creating unordered map called number_list.
    std::map<int, int> number_list;

    // Populating number_list with keys from 0-33, and initialising values to 0;
    for (int i = 0; i < 34; i++)
    {
        number_list[i] = 0;
    }

    // Generating random numbers between 0-33 10000 times, and adding to number_list
    int number = 0;
    for (int counter = 0; counter < 10001; counter++)
    {
        number = generateRandomNum(0, 33);
        if (number_list.find(number) != number_list.end())
        {
            number_list[number]++;
        }
    }

    // Printing out the number of occurences
    std::cout << "Number" << " | " << "No of occurrences\n";
    for (auto x : number_list)
    {
        std::cout << std::setw(5) << x.first << ": " << std::setw(5) << x.second << std::endl;
    }
}