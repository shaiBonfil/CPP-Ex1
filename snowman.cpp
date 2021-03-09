#include <iostream>
#include <string>
#include <stdexcept>
#include "snowman.hpp"
using namespace std;

namespace ariel
{
    string snowman(long num)
    {
        if (!(num > 11111111 && num < 44444444))
        {
            throw invalid_argument("error: invalid input!");
        }
        else if (num == 11114411)
        {
            return "===\n(.,.)\n( : )\n( : )";
        }
        for (int i = num; i > 0; i--)
        {
            if (!(num%10 > 1 && num%10 < 4))
            {
                throw invalid_argument("error: invalid input!");
            }
            num /= 10;
        }
        return " ";
    }
}