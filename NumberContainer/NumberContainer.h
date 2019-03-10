//
// Created by jakob on 10.03.19.
//

#ifndef CPPPLAY_NUMBERCONTAINER_H
#define CPPPLAY_NUMBERCONTAINER_H

#include <utility>
#include <vector>

template <typename T>
class NumberContainer
{

public:
    NumberContainer() = default;
    ~NumberContainer() = default;

    std::vector<std::pair<T, short>> getAllData() const
    {
        return _data;
    }

    double getAverage() const
    {
        double sum = 0;
        for (auto &d : _data)
        {
            //T temp = d.first * d.second;
            sum += (d.first * d.second);
        }
        return sum / _data.size();
    }

    void reset()
    {
        _data.clear();
    }

    void add(T number)
    {
        auto itr = std::find_if(_data.begin(), _data.end(), [&](const std::pair<T, short>& element) { return element.first == number; } );
        if (itr == _data.end())
        {
            std::cout << "adding new number" << std::endl;
            _data.push_back(std::make_pair(number, 1));
        }
        else
        {
            std::cout << "Counter up previous number" << std::endl;
            itr->second++;
        }

    }

    void printData() const
    {
        std::cout << "Size: " << _data.size() << std::endl;
        for (auto & d : _data)
        {
            std::cout << "Value: " << d.first << "\tAmount: " << d.second << std::endl;
        }
    }

private:
    std::vector<std::pair<T, short>> _data;

};


#endif //CPPPLAY_NUMBERCONTAINER_H
