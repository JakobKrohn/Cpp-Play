//
// Created by jakob on 07.02.19.
//

#ifndef CPPPLAY_PRIMENUMBERS_H
#define CPPPLAY_PRIMENUMBERS_H

#include <iostream>
#include "Timer.h"

void printPrimeNumbers()
{
    Timer timer;
    unsigned long n = 0;

    while (true)
    {
        timer.start();
        bool isPrime = true;

        for(int i = 2; i <= n / 2; ++i)
        {
            if(n % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        timer.stop();

        if (isPrime)
        {
            std::cout << "[" << n << "]\t";
            std::cout << "Elapsed: " << timer.getElapsed() << " microseconds" << std::endl;
        }

        n++;
    }
}

#endif //CPPPLAY_PRIMENUMBERS_H
