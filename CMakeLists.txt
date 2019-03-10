cmake_minimum_required(VERSION 3.13)
project(CppPlay)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppPlay main.cpp WordSpin.cpp WordSpin.h Timer.cpp Timer.h MultiplesOfThreeOrFive.h SafeCalculator.h DigitalRoot.h Morse.cpp Morse.h Formatter.h Format/Formatter.cpp Format/Formatter.h SafeVector.h PrimeNumbers.h NumberContainer/NumberContainer.h)

