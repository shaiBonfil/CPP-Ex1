#include <iostream>
#include <string>
#include <stdexcept>
#include "snowman.hpp"
using namespace std;

const int MINIMUM = 11111111;
const int MAXIMUM = 44444444;
const int SNOWMAN = 11114411;

namespace ariel
{
    string snowman(long num)
    {
        if (num < MINIMUM || num > MAXIMUM)
        {
            throw invalid_argument("error: invalid input!");
        }
        if (num == SNOWMAN)
        {
            return "_===_\n(.,.)\n( : )\n( : )";
        }
        long tmp = num;
        while (tmp != 0)
        {
            if ((tmp%10 < 1) || (tmp%10 > 4))
            {
                throw invalid_argument("error: invalid input!");
            }
            tmp /= 10;
        }
        
        return " ";
    }
}