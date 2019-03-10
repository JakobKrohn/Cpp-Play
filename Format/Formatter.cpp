//
// Created by jakob on 29.01.19.
//

#include "Formatter.h"
#include <iostream>
#include <experimental/filesystem>
#include <algorithm>
#include <string>
#include <sstream>

// --------------------------------------------------------------------------------------------------------------------

ns_format::Formatter::Formatter()
{
    std::cout << "\nFormatter created " << std::endl;
    listFiles();
}

// --------------------------------------------------------------------------------------------------------------------

void ns_format::Formatter::listFiles()
{
    std::string path = "path/to/file/";

    //auto x = std::experimental::filesystem::directory_iterator(path);
    //for (const auto & entry : std::experimental::filesystem::directory_iterator(path))
    {
     //   std::cout << entry.path() << std::endl;
    }
}

std::string ns_format::Formatter::stringToHex(std::string str)
{
    std::cout << "==================================" << std::endl;
    int length = str.length();

    if (length % 2 == 0)
    {
        std::string hex;
        hex += "0x";
        int counter = 0;

        std::cout << "Input word: ";
        for (auto & c : str)
        {
            std::cout << c;
            hex += c;

            if (++counter % 2 == 0 && counter < str.length())
            {
                hex += ", 0x";
            }
        }
        std::cout << "\nLength: " << length << std::endl;


        std::cout << "\nHex: " << hex << std::endl;
        std::cout << "==================================" << std::endl;
        return hex;
    }


    return std::__cxx11::string();
}

template<class T>
std::string ns_format::Formatter::myToString(const T& n)
{
    std::ostringstream stm ;
    stm << n ;
    std::cout << stm.str() << std::endl;
    //return stm.str();
}



