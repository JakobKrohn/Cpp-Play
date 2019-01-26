//
// Created by jakob on 26.01.19.
//

#include "WordSpin.h"
#include <iostream>

std::string WordSpin::spinWords(const std::string &str)
{
    std::cout << str << std::endl;
    std::string ret = str;
    int index = 0;
    int temp = 0;

    while (index != std::string::npos)
    {
        index = static_cast<int>(str.find(' ', index + 1));

        std::string word = str.substr(temp, (index - temp));

        std::cout << "-[" << temp << "/" << index << "]: [" << word << "]";

        if (word.length() >= 5)
        {
            std::cout << " (shuffle) -> ";
            std::string spinWord;
            for (auto cs = word.rbegin(); cs != word.rend(); cs++)
            {
                spinWord += *cs;
                std::cout << *cs;
            }

            word = spinWord;
            std::cout << "[" << word << "]";
        }

        ret.replace(temp, word.length(), word);

        temp = index+1;
        //ret += word;
        //ret += " ";

        std::cout << std::endl;
    }

    return ret;

}