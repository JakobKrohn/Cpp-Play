//
// Created by jakob on 26.01.19.
//

#ifndef CPPPLAY_SAFECALCULATOR_H
#define CPPPLAY_SAFECALCULATOR_H

#include <limits>

template <class T>
T getMaxLimit(T)
{
    return std::numeric_limits<T>::max();
}

template <class T>
void increment(T& value)
{
    if (value < std::numeric_limits<T>::max())
        value++;
}

template <class T>
void decrement(T& value)
{
    if (value > std::numeric_limits<T>::max())
        value--;
}

#endif //CPPPLAY_SAFECALCULATOR_H
