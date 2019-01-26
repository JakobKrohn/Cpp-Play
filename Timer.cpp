//
// Created by jakob on 26.01.19.
//

#include "Timer.h"
#include <iostream>

void Timer::start()
{
    _start = std::chrono::system_clock::now();
}

double Timer::stop()
{
    _stop = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed = _stop - _start;
    _elapsed = elapsed.count();

    return getElapsed();
}

double Timer::getElapsed() const
{
    return _elapsed;
}

