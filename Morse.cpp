//
// Created by jakob on 27.01.19.
//

#include "Morse.h"
#include <map>
#include <iostream>
#include <algorithm>

const std::map<char, std::string> morseMap = {
        {'a', ".-"},
        {'b', "-..."},
        {'c', "-.-."},
        {'d', "-.."},
        {'e', "."},
        {'f', "..-."},
        {'g', "--."},
        {'h', "...."},
        {'i', ".."},
        {'j', ".---"},
        {'k', "-.-"},
        {'l', ".-.."},
        {'m', "--"},
        {'n', "-."},
        {'o', "---"},
        {'p', ".--."},
        {'q', "--.-"},
        {'r', ".-."},
        {'s', "..."},
        {'t', "-"},
        {'u', "..-"},
        {'v', "...-"},
        {'w', ".--"},
        {'x', "-..-"},
        {'y', "-.--"},
        {'z', "--.."}
};



void Morse::format()
{
   std::cout << "a -> " << morseMap.find('a')->second << std::endl;
   std::cout << ".- -> " << getCharacter(".-") << std::endl;
   std::cout << "--.. -> " << getCharacter("--..") << std::endl;

}

char Morse::getCharacter(std::string value)
{
    auto iterator = morseMap.begin();

    while (iterator != morseMap.end())
    {
        if (iterator->second == value)
        {
            return iterator->first;
        }
        iterator++;
    }

    return -1;
}

