#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

#include "WordSpin.h"
#include "Timer.h"
#include "MultiplesOfThreeOrFive.h"
#include "SafeCalculator.h"
#include "DigitalRoot.h"
#include "Morse.h"
#include "Format/Formatter.h"

// --------------------------------------------------------------------------------------------------------------------

void minMaxLambda()
{
    std::vector<int> v{1, 2, 3, 4, 5, 6,67, 7, 8, 8, 9, 6, 5, 34, 2, 4, 5,5, 150, -5 };

    auto max = v.at(static_cast<unsigned long>(std::distance(v.begin(), std::max_element(v.begin(), v.end()))));
    auto min = v.at(static_cast<unsigned long>(std::distance(v.begin(), std::min_element(v.begin(), v.end()))));

    std::cout << "Largest element is: " << max << std::endl;
    std::cout << "Smallest element is: " << min << std::endl;
}

// --------------------------------------------------------------------------------------------------------------------

void wordSpin()
{
    Timer timer;
    WordSpin ws;

    timer.start();
    std::cout << ws.spinWords("Hey my fellow warriors") << std::endl;
    timer.stop();
    std::cout << "First version took: " << timer.getElapsed() << " microseconds" << std::endl;

    timer.start();
    std::cout << ws.spinWordsReverse("Hey my fellow warriors") << std::endl;
    timer.stop();
    std::cout << "Second version took: " << timer.getElapsed() << " microseconds" << std::endl;
}

// --------------------------------------------------------------------------------------------------------------------

void multiples_of_three_or_five()
{
    Multiples_Of_Three_Or_Five::solution(10);
}

// --------------------------------------------------------------------------------------------------------------------

void safeCalculator()
{
    std::cout << "Max limit of short: " << getMaxLimit(short()) << std::endl;
    std::cout << "Max limit of int: " << getMaxLimit(int()) << std::endl;
    std::cout << "Max limit of long: " << getMaxLimit(long()) << std::endl;
    std::cout << "Max limit of double: " << getMaxLimit(double()) << std::endl;

    short value = getMaxLimit(short());
    increment(value);
    std::cout << value << std::endl;
}

// --------------------------------------------------------------------------------------------------------------------

void sumOfDigits_digitalRoot()
{
    std::cout << "Digital root of 16: " << digitalRoot(16) << std::endl;
    std::cout << "Digital root of 195: " << digitalRoot(195) << std::endl;
    std::cout << "Digital root of 0: " << digitalRoot(0) << std::endl;
    std::cout << "Digital root of 132189132189: " << digitalRoot(132189132189) << std::endl;
    std::cout << "(solution)Digital root of 16: " << solutionDigitalRoot(16) << std::endl;
}

// --------------------------------------------------------------------------------------------------------------------

void morseSignal()
{
    const std::string tiny = "A tiny string";
    const std::string medium("This is a medium long message");
    const std::string large("Real recognize that stainless silverspoon what my aim is");
    const std::string wrong("Denne stringen inneholder æ ø å");

    Morse morse;

    auto encoded = morse.encode(tiny);
    auto decoded = morse.decode(encoded);

    //assert(tiny == decoded);

    encoded = morse.encode(medium);
    decoded = morse.decode(encoded);

    encoded = morse.encode(large);
    decoded = morse.decode(encoded);

    encoded = morse.encode(wrong);
    decoded = morse.decode(encoded);
}

// --------------------------------------------------------------------------------------------------------------------

void formatTest()
{
    ns_format::Formatter fm;
}

// --------------------------------------------------------------------------------------------------------------------

int main()
{
    Timer timer;

    // minMaxLambda();

    // wordSpin();

    // multiples_of_three_or_five();

    // safeCalculator();

    //sumOfDigits_digitalRoot();

    //morseSignal();

    //std::cout << char(0) << std::endl;

    formatTest();

    return 0;
}