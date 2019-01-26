//
// Created by jakob on 26.01.19.
//

#ifndef CPPPLAY_MULTIPLESOFTHREEORFIVE_H
#define CPPPLAY_MULTIPLESOFTHREEORFIVE_H

#include <iostream>

namespace Multiples_Of_Three_Or_Five
{

    int solution(int number)
    {
        std::vector<int> multiples;

        for (int i = 0; i < number; i++)
        {
            std::cout << "#" << i;

            std::cout << " -> [" << i << " % 3 = " << (i % 3) << "]";

            std::cout << " -> [" << i << " % 5 = " << (i % 5) << "]";

            if ( (i % 3) == 0 )
            {
                // Multiple of 3
                multiples.push_back(i);
                std::cout << "(" << i << ")";
            }
            else if ( (i % 5) == 0)
            {
                multiples.push_back(i);
                std::cout << "(" << i << ")";
            }

            std::cout << std::endl;
        }

        std::cout << "Multiples of 3 or 5 below " << number << " is: " << std::endl;
        int sum = 0;
        for (auto i : multiples)
        {
            sum += i;
            std::cout << i << ", ";
        }

        std::cout << "\nSum: " << sum << std::endl;

        return sum;
    }
}

#endif //CPPPLAY_MULTIPLESOFTHREEORFIVE_H
