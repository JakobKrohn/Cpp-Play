#include <iostream>
#include <vector>
#include <algorithm>

#include "WordSpin.h"
#include "Timer.h"
#include "MultiplesOfThreeOrFive.h"

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

    Multiples_Of_Three_Or_Five::solution(100000);

    return 0;
}