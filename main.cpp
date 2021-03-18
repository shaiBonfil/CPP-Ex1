#include <iostream>
#include <string>

#include "snowman.hpp"
using namespace std;
using namespace ariel;

int main()
{
    long input;
    while (1)
    {
        try
        {
            cin >> ws;
            cin >> input; // insert -1 to exit
            if (input == -1)
            {
                cout << "exiting..." << endl;
                return 1;
            }

            // print a custom snowman depended on a valid input.
            // Valid digits are between 1-4, in format of HNLRXYTB:
            // Hat, Nose, Left eye, Right eye, Left arm, Right arm, Torso, Base
            cout << snowman(input) << endl;
        }
        catch (invalid_argument)
        {
            cout << "please insert 8 digits between 1-4" << endl;
        }
    }

    return 0;
}