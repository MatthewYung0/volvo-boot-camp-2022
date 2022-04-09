#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <iomanip>
#include <map>

int main()
{
    std::ifstream myfile_1;
    myfile_1.open("read_files_1.txt");
    std::string text = "";

    std::map<std::string, int> word_list;

    // For loop to read each line in text file.
    for (int i = 0; getline(myfile_1, text); i++)
    {
        // For loop to remove punctuation
        for (int k = 0, len = text.size(); k < len; k++)
        {
            if (ispunct(text[k]))
            {
                text.erase(k--, 1);
                len = text.size();
            }
        }
        // Breaking the std::string text into words, and inserting word into the key.
        std::stringstream check(text);
        std::string temporary;
        while (getline(check, temporary, ' '))
        {
            word_list.insert(std::pair<std::string, int>(temporary, 0));
        }
    }
    myfile_1.clear();
    myfile_1.close();

    // Opening and checking read_files_2
    std::ifstream myfile_2;
    myfile_2.open("read_files_2.txt");

    for (int i = 0; getline(myfile_2, text); i++)
    {
        // For loop to remove punctuation
        for (int k = 0, len = text.size(); k < len; k++)
        {
            if (ispunct(text[k]))
            {
                text.erase(k--, 1);
                len = text.size();
            }
        }
        // Breaking the std::string text into words, and inserting word into the key.
        std::stringstream check(text);
        std::string temporary;
        while (getline(check, temporary, ' '))
        {
            if (word_list.find(temporary) != word_list.end())
            {
                word_list[temporary]++;
            }
        }
    }
    myfile_2.clear();
    myfile_2.close();

    //Below code to append a list of duplicate words in read_files_2.txt.
    //The list will be appended to the end of read_files_2.txt.
    std::ofstream myfile_3;
    myfile_3.open("read_files_2.txt", std::ios_base::app);

    auto iter = word_list.begin();
    myfile_3 << "\n";
    while (iter != word_list.end())
    {
        myfile_3 << "[" << iter->first << "," << iter->second << "]\n"; 
        ++iter;
    }
    std::cout << std::endl;
    myfile_3.close();
}