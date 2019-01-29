//
// Created by jakob on 27.01.19.
//

#include "Morse.h"
#include <map>
#include <iostream>
#include <algorithm>

const std::map<char, std::string> morseMap = {
        {' ', " "},
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
    std::cout << "Encode message: [" << message << "] -> [";

    std::string encoded;
    std::for_each(message.begin(), message.end(), [&](auto&& s){
        encoded += getMorse(s);

        // Add a space between each character
        encoded += ' ';
    });

    std::cout << encoded << "]" << std::endl;

    return encoded;
}

// --------------------------------------------------------------------------------------------------------------------

std::string Morse::decode(std::string message)
{
    std::cout << "Decode message: [" << message << "] -> \n";

    std::string decoded;
    unsigned long temp = 0;
    auto index = message.find_first_of(' ');
    while (index != std::string::npos)
    {
        if (index > temp)
        {
            std::cout << getCharacter(message.substr(temp, (index - temp)));
            decoded += getCharacter(message.substr(temp, (index - temp)));
        } else { index++; decoded += ' '; }
        std::cout << "[" << message.substr(temp, (index - temp)) << "](temp/index): " << temp << "/" << index << std::endl;

        //temp = index;
        temp = ++index;



        index = message.find_first_of(' ', index);
    }

    std::cout << decoded;
    return decoded;
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