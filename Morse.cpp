//
// Created by jakob on 27.01.19.
//

#include "Morse.h"
#include <map>
#include <iostream>
#include <algorithm>

const std::map<char, std::string> morseMap = {
        {' ', " "}, // todo shitty solution, fix
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

// --------------------------------------------------------------------------------------------------------------------

std::string Morse::encode(std::string message)
{
    std::string encoded;

    std::for_each(message.begin(), message.end(), [&](auto&& s)
    {
        encoded += getMorse(s);

        // Add a space between each character
        encoded += ' '; // todo shitty solution, fix
    });

    return encoded;
}

// --------------------------------------------------------------------------------------------------------------------

std::string Morse::decode(std::string message)
{
    return std::__cxx11::string();
}

// --------------------------------------------------------------------------------------------------------------------

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

// --------------------------------------------------------------------------------------------------------------------

std::string Morse::getMorse(char character)
{
    auto iterator = morseMap.find(character);

    if (iterator != morseMap.end())
    {
        return iterator->second;
    }

    return "[?]";
}