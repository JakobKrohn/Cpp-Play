#include <iostream>
#include <vector>
#include <algorithm>

#include "WordSpin.h"
#include "Timer.h"
#include "MultiplesOfThreeOrFive.h"
#include "SafeCalculator.h"
#include "DigitalRoot.h"

int main()
{
    Timer timer;

    std::vector<int> v{1, 2, 3, 4, 5, 6,67, 7, 8, 8, 9, 6, 5, 34, 2, 4, 5,5, 150, -5 };

    auto max = v.at(static_cast<unsigned long>(std::distance(v.begin(), std::max_element(v.begin(), v.end()))));
    auto min = v.at(static_cast<unsigned long>(std::distance(v.begin(), std::min_element(v.begin(), v.end()))));

    std::cout << "Largest element is: " << max << std::endl;
    std::cout << "Smallest element is: " << min << std::endl;

    WordSpin ws;

    timer.start();
    std::cout << ws.spinWords("Hey my fellow warriors") << std::endl;
    timer.stop();
    std::cout << "First version took: " << timer.getElapsed() << " seconds" << std::endl;

    timer.start();
    std::cout << ws.spinWordsReverse("Hey my fellow warriors") << std::endl;
    timer.stop();
    std::cout << "Second version took: " << timer.getElapsed() << " seconds" << std::endl;

    Multiples_Of_Three_Or_Five::solution(1000);

    std::cout << "Max limit of short: " << getMaxLimit(short()) << std::endl;
    std::cout << "Max limit of int: " << getMaxLimit(int()) << std::endl;
    std::cout << "Max limit of long: " << getMaxLimit(long()) << std::endl;
    std::cout << "Max limit of double: " << getMaxLimit(double()) << std::endl;

    short value = getMaxLimit(short());
    increment(value);
    std::cout << value << std::endl;

    std::cout << "5%10=" << (5%10) << std::endl;

    //digitalRoot(123);

    std::cout << "Digital root of 16: " << digitalRoot(16) << std::endl;
    std::cout << "Digital root of 942: " << digitalRoot(942) << std::endl;
    std::cout << "Digital root of 132189: " << digitalRoot(132189) << std::endl;
    //std::cout << "Digital root of 132189132189: " << digitalRoot(132189132189) << std::endl;


    return 0;
}