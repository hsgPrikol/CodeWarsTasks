#pragma once
#include <iostream>
#include <vector>


// Считаем еденички в двоичной системе
class Bit_Counting
{
public:
    unsigned int countBits(unsigned long long n)
    {
        unsigned int ostatok = 0;
        std::vector<int> vector;

        if (n < 0)
            return 0;

        while (n)
        {
            ostatok = n % 2;

            vector.push_back(ostatok);

            n /= 2;
        }

        int count = 0;
        for (int i = 0; i < vector.size(); i++)
        {
            if (vector[i] == 1)
            {
                count++;
            }
        }
        return count;
    }
};

