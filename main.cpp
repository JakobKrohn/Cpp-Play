#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <string>
#include <sstream>
#include <memory>

#include "WordSpin.h"
#include "Timer.h"
#include "MultiplesOfThreeOrFive.h"
#include "SafeCalculator.h"
#include "DigitalRoot.h"
#include "Morse.h"
#include "Format/Formatter.h"
#include "SafeVector.h"
#include "PrimeNumbers.h"
#include "NumberContainer/NumberContainer.h"

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

    // 11AD30DFFE567CE0
    fm.stringToHex("11AD30DFFE567CE0");
    fm.stringToHex("37992628F04EF57F649BB964765F18D9");
    fm.stringToHex("83751634c0e5f9170518d1a537e28034");
    fm.stringToHex("4063C35F0A800E0001FE8521AED1FB08A9930E6FC6DE2ED44D6B24F1044D8F01796ED94269");

    //fm.myToString(1);
    //std::cout << "-0.99 = " << fm.myToString(1) << std::endl;
}

// --------------------------------------------------------------------------------------------------------------------

int main()
{
    //Timer timer;

    // minMaxLambda();

    // wordSpin();

    // multiples_of_three_or_five();

    // safeCalculator();

    //sumOfDigits_digitalRoot();

    //morseSignal();

    //std::cout << char(0) << std::endl;

    //formatTest();

    /*double n = -0.99;

    std::ostringstream stm ;
    stm << n ;
    std::cout << stm.str() << std::endl;

    std::string s = "4063C35F0A80000001B9024BB13AE40748";
    std::cout << "length: " << s.length() << std::endl;*/

    uint8_t mydata[6] = {5, 10};

    std::cout << mydata << std::endl;

    //testSafeVector();

//    printPrimeNumbers();

    std::vector<int> first {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector<int> seconds {-1, -2, -3, -4, -5};

    //auto it = seconds.begin();
    //first.assign(it, seconds.end());

    std::vector<int> _readings(12, -999);

    std::copy(seconds.begin(), seconds.end(), _readings.begin());

    const std::vector<std::string> _debugTags = { "\tPM0.1", "\tPM2.5", "\tPM10", "\tPC0.3", "\tPC0.5", "\tPC1.0", "\tPC2.5", "\tPC5.0", "\tPC10" };



    std::unique_ptr<std::vector<int>> vec(new std::vector<int>(9, -9));

    //std::vector<int> _values(1, -999);
    std::vector<int> _values;
    std::vector<int> _values2(9, 2);

    std::vector<std::vector<int>> _averageValues(9, _values);

    std::cout << "Size: " << _averageValues.at(0).size() << std::endl;

    _averageValues.at(0).push_back(1);

    std::cout << "Size: " << _averageValues.at(0).size() << std::endl;

    int i = 0;
    for (auto & x : _averageValues)
    {
        int j = 0;
        std::cout << "[" << i++ << "]";
        for (auto & y : x)
        {

            std::cout << " #" << j++ << ": " << y;
        }
        std::cout << std::endl;
    }

    std::cout << "===============" << std::endl;

    _averageValues = std::vector<std::vector<int>> (21, _values2);


    std::cout << "Size: " << _averageValues.size() << std::endl;

    i = 0;
    for (auto & x : _averageValues)
    {
        int j = 0;
        std::cout << "[" << i++ << "]";
        for (auto & y : x)
        {

            std::cout << " #" << j++ << ": " << y;
        }
        std::cout << std::endl;
    }


    std::cout << "\n\n\n==================\n\n\n" << std::endl;


    NumberContainer<int> container;

    //container.add<int>(1);
    container.add(3);
    container.add(-7);
    container.add(5);
    container.add(13);
    container.add(-2);

    container.printData();

    std::cout << "Average: " << container.getAverage() << std::endl;

    return 0;
}