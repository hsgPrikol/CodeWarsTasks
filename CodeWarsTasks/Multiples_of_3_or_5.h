#pragma once
#include <iostream>
class Multiples_of_3_or_5
{
public:
    int solution(int number)
    {
        int summa = 0;

        if (number <= 0)
        {
            return 0;
        }
        for (int i = 0; i < number; i++)
        {
            if (i % 3 == 0)
            {
                summa += i;
            }

            else if (i % 5 == 0)
            {
                summa += i;
            }
        }
        return summa;
    }
};

