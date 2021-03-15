#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>
#include <array>

#include "snowman.hpp"
using namespace std;
using namespace ariel;

const int MINIMUM = 11111111;
const int MAXIMUM = 44444444;

namespace ariel
{
    /* 
    This method takes the input snowman()received and fetches all the necessary
    parts from the parts matrix, puts them in their corresponding locations in an array
    and returns that array
    */

    int get_index(char digit)
    {
        int index = digit - '0' - 1;
        return index;
    }

    string snowman(long num)
    {
        // if the input greater or less than the valid input
        // if the input is 8 digits between min and max, than we check it in the while loop
        if (num < MINIMUM || num > MAXIMUM)
        {
            throw invalid_argument("error: invalid input!");
        }
        long tmp = num;
        while (tmp != 0)
        {
            if ((tmp % 10 < 1) || (tmp % 10 > 4))
            {
                throw invalid_argument("error: invalid input!");
            }
            tmp /= 10;
        }

        string ans = "";
        array <string, INPUT_LENGTH> res;
        string str = to_string(num);
        int j;
        for (int i = 0; i < INPUT_LENGTH; i++)
        {
            j = get_index(str.at(i));
            res[i] = presets[i][j];
        }

        ans += (res[HAT] + "\n");                               // Hat
        ans += res[LA].at(UP);                                  // Upper Left Arm
        ans += ("(" + res[LE] + res[NOSE] + res[RE] + ")");     // Eyes and Nose
        ans += res[RA].at(UP);                                  // Upper Right Arm
        ans += "\n";
        ans += res[LA].at(DOWN);                                // Lower Left Arm
        ans += ("(" + res[TORSO] + ")");                        // Torso
        ans += res[RA].at(DOWN);                                // Lower Right Arm
        ans += "\n";
        ans += (space + "(" + res[BASE] + ")" + "\n");          // Base

        return ans;
    }
}
