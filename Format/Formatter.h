//
// Created by jakob on 29.01.19.
//

#ifndef CPPPLAY_FORMATTER_H
#define CPPPLAY_FORMATTER_H

#include <string>

namespace ns_format
{

    class Formatter
    {

    public:

        Formatter();
        ~Formatter() = default;

        std::string stringToHex(std::string str);

        template <class T>
        std::string myToString(const T& n);

    private:

        void listFiles();


    };

}


#endif //CPPPLAY_FORMATTER_H
