//
// Created by jakob on 27.01.19.
//

#ifndef CPPPLAY_FORMATTER_H
#define CPPPLAY_FORMATTER_H

#include <iostream>
#include <algorithm>

// --------------------------------------------------------------------------------------------------------------------

/*
  case 'h':
    return "....";
  case 'i':
    return "..";
  case 'j':
    return ".---";
  case 'k':
    return "-.-";
  case 'l':
    return ".-..";
  case 'm':
    return "--";
  case 'n':
    return "-.";
  case 'o':
    return "---";
  case 'p':
    return ".--.";
  case 'q':
    return "--.-";
  case 'r':
    return ".-.";
  case 's':
    return "...";
  case 't':
    return "-";
  case 'u':
    return "..-";
  case 'v':
    return "...-";
  case 'w':
    return ".--";
  case 'x':
    return "-..-";
  case 'y':
    return "-.--";
  // for space
  case 'z':
    return "--..";
 * */

/*
 * Prints following string in format:
 *
 *  {'a', ".-"},
    {'b', "-..."},
    {'c', "-.-."},
    {'d', "-.."},
    {'e', "."},
    {'f', "..-."},
 * */

void printFormat(std::string str)
{
    int keyCount = 0;
    std::for_each(str.begin(), str.end(), [&](auto&& s)
    {

        if (s == '\'')
        {
            if (keyCount == 0)
            {
                std::cout << "{\'";
                keyCount = 1;
            }
            else
            {
                std::cout << "\', ";
                keyCount = 0;
            }
        }

        else if (s == '\"')
        {
            if (keyCount == 0)
            {
                std::cout << "\"";
                keyCount = 1;
            }
            else
            {
                std::cout << "\"}, \n";
                keyCount = 0;
            }
        }

        else if (keyCount == 1)
        {
            std::cout << char(s);
        }



    });
}

// --------------------------------------------------------------------------------------------------------------------

#endif //CPPPLAY_FORMATTER_H
