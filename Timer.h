//
// Created by jakob on 26.01.19.
//

#ifndef CPPPLAY_TIMER_H
#define CPPPLAY_TIMER_H

#include <chrono>

class Timer
{

public:

    Timer() = default;
    ~Timer() = default;

    void start();

    double stop();

    double getElapsed() const;

private:

    std::chrono::time_point<std::chrono::system_clock> _start, _stop;

    double _elapsed{};


};


#endif //CPPPLAY_TIMER_H
