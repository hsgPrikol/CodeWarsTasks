#pragma once
#include <vector>
#include <algorithm>
#include <iostream>

class Sort_the_odd
{
public:
    std::vector<int> oddArray;

    std::vector<int> sortArray(std::vector<int> array)
    {
        for (int i = 0; i < array.size(); i++)
        {
            if (array[i] % 2 != 0)
            {
                oddArray.push_back(array[i]);
            }
        }

        std::sort(oddArray.begin(), oddArray.end());
        std::cout << "\n";

        int j = 0;
        for (int i = 0; i < array.size(); i++)
        {
            if (array[i] % 2 != 0)
            {
                array[i] = oddArray[j++];
            }
        }

        for (int i = 0; i < array.size(); i++)
            std::cout << array[i] << " ";

        return array;
    }
};

