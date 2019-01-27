//
// Created by jakob on 27.01.19.
//

#ifndef CPPPLAY_DIGITALROOT_H
#define CPPPLAY_DIGITALROOT_H

/*
 * For loops and vector: https://www.quora.com/How-do-I-iterate-through-a-vector-using-for-loop-in-C++
 *
 * Recursive lambdas: https://riptutorial.com/cplusplus/example/8508/recursive-lambdas
 *
 * lambda: https://www.geeksforgeeks.org/lambda-expression-in-c/
 *
 * */

#include <functional>

template <class T>
T digitalRoot(T number)
{
    std::vector<T> numbers{};

    std::function<T(T)> getDigits = [&](T x)
    {
        if (x >= 10) { getDigits(x / 10); }

        short digit = x % 10;

        numbers.push_back(digit);

        return digit;
    };

    getDigits(number);

    T dr = 0;

    std::for_each(numbers.begin(), numbers.end(), [&](auto&& x)
    {
        //std::cout << "[" << x << "]";
        dr += x;
    });

    //std::cout << "\t";

    if (dr >= 10) {
        return digitalRoot(dr);
    }

    return dr;
}

int solutionDigitalRoot(int Z) {
    return --Z % 9 + 1;
}

/*auto snumber = std::to_string(number);

for (auto s : snumber)
{
    dr += (int(s) - 48);
}*/



#endif //CPPPLAY_DIGITALROOT_H
