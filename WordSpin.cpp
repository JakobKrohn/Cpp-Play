//
// Created by jakob on 26.01.19.
//

#include "WordSpin.h"
#include <iostream>
#include <sstream>
#include <algorithm>

std::string WordSpin::spinWords(const std::string &str)
{
    std::string ret = str;
    unsigned long index = 0;
    unsigned long temp = 0;

    while (index != std::string::npos)
    {
        index = (str.find(' ', index + 1));

        std::string word = str.substr(temp, (index - temp));

        if (word.length() >= 5)
        {
            std::string spinWord;
            for (auto cs = word.rbegin(); cs != word.rend(); cs++)
            {
                spinWord += *cs;
            }

            word = spinWord;
        }

        ret.replace(temp, word.length(), word);

        temp = index+1;
    }

    return ret;
}

std::string WordSpin::spinWordsReverse(const std::string &str)
{
    std::stringstream ss(str);
    std::string result;
    std::string buff;
    while (ss >> buff) {
        if (buff.size() >= 5) {
            std::reverse(buff.begin(), buff.end());
        }
        result += buff + ' ';
    }
    result.pop_back();
    return result;
    //return std::__cxx11::string();
}
