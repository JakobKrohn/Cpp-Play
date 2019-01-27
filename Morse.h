//
// Created by jakob on 27.01.19.
//

#ifndef CPPPLAY_MORSE_H
#define CPPPLAY_MORSE_H

#include <string>

class Morse
{

public:

    Morse() = default;
    ~Morse() = default;

    std::string encode(std::string message);

    std::string decode(std::string message);

private:

    char getCharacter(std::string value);

    std::string getMorse(char character);

};


#endif //CPPPLAY_MORSE_H
