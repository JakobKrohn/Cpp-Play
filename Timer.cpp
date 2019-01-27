//
// Created by jakob on 26.01.19.
//

#include "Timer.h"
#include <iostream>

// -----------------------------------------------------------------------------------

void Timer::start()
{
    _start = std::chrono::high_resolution_clock::now();
}

// -----------------------------------------------------------------------------------

double Timer::stop()
{
    _stop = std::chrono::high_resolution_clock::now();

    //std::chrono::duration<double> elapsed = _stop - _start;
    auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(_stop - _start);
    _elapsed = elapsed.count();

    return getElapsed();
}

// -----------------------------------------------------------------------------------

double Timer::getElapsed() const
{
    return _elapsed;
}

