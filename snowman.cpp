#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>
#include <array>

#include "snowman.hpp"
using namespace std;
using namespace ariel;

const int DEC = 10;

namespace ariel
{
    int charToInt(char c) { return c - '0' -1;}

    
    string snowman(long num)
    {
        // if the input number not equal to 8 digits, this is a invalid input
        if (to_string(num).length() != VALID_LEN) { throw invalid_argument("error: invalid input!");}
        
        // if the input is 8 digits, than we check it in the while loop
        long tmp = num;
        while (tmp != 0)
        {
            if ((tmp % DEC < 1) || (tmp % DEC > 4))
            {
                throw invalid_argument("error: invalid input!");
            }
            tmp /= DEC;
        }

        string ans;
        array <string, VALID_LEN> res;
        string str = to_string(num);
        int j = 0;
        for (int i = 0; i < VALID_LEN; i++)
        {
            j = charToInt(str.at(i));
            res.at(i) = presets.at(i).at(j);
        }

        ans += res[HAT] + "\n";                                        // Hat
        ans += res[LEFT_ARM].at(up);                                   // Upper Left Arm
        ans += "(" + res[LEFT_EYE] + res[NOSE] + res[RIGHT_EYE] + ")"; // Eyes and Nose
        ans += res[RIGHT_ARM].at(up);                                  // Upper Right Arm
        ans += "\n";
        ans += res[LEFT_ARM].at(down);                                 // Lower Left Arm
        ans += "(" + res[TORSO] + ")";                                 // Torso
        ans += res[RIGHT_ARM].at(down);                                // Lower Right Arm
        ans += "\n";
        ans += space + "(" + res[BASE] + ")" + "\n";                   // Base

        return ans;
    }
}
