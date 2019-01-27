//
// Created by jakob on 27.01.19.
//

#ifndef CPPPLAY_DIGITALROOT_H
#define CPPPLAY_DIGITALROOT_H

#include <functional>

//template <class T>
//T digitalRoot(T number)
int digitalRoot(int number)
{
    std::vector<int> numbers{};

    std::function<int(int)> getDigits = [&](int x)
    {
        if (x >= 10) { getDigits(x / 10); }

        int digit = x % 10;

        numbers.push_back(digit);

        return digit;
    };

    getDigits(number);

    int dr = 0;

    std::for_each(numbers.begin(), numbers.end(), [&](auto&& x)
    {
        std::cout << "[" << x << "]";
        dr += x;
    });

    std::cout << " ";

    /*auto snumber = std::to_string(number);

    for (auto s : snumber)
    {
        dr += (int(s) - 48);
    }*/

    return dr;
}



#endif //CPPPLAY_DIGITALROOT_H
