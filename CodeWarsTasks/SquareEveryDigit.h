#pragma once
#include <vector>
#include <string>
#include <iostream>

class SquareEveryDigit
{
public:
    int squareDigits(int num)
    {
        std::string strNum = std::to_string(num);
        std::vector<std::string> vector;

        std::string tempStr;
        int temp = 0;

        for (int i = 0; i < strNum.size(); i++)
        {
            temp = pow(strNum[i] - 48, 2);
            vector.push_back(std::to_string(temp));
            tempStr += vector[i];
        }

        num = std::stoi(tempStr);

        return num;
    }
};

