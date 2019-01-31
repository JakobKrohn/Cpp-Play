//
// Created by jakob on 29.01.19.
//

#include "Formatter.h"
#include <iostream>
#include <experimental/filesystem>

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
    for (const auto & entry : std::experimental::filesystem::directory_iterator(path))
    {
     //   std::cout << entry.path() << std::endl;
    }
}

