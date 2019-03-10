//
// Created by jakob on 07.02.19.
//

#ifndef SAFE_VECTOR_H
#define SAFE_VECTOR_H

#include <vector>
#include <iostream>

bool isSafe(std::vector<int> * vec)
{
    return vec->size() > 1;
}

void testSafeVector()
{
    std::vector<int> v;

    if (isSafe(&v))
    {
        std::cout << "Vector is safe" << std::endl;
    }
    else
    {
        std::cout << "Vector is false" << std::endl;
    }
}

#endif //SAFE_VECTOR_H
