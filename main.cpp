#include <iostream>
#include <string>

#include "snowman.hpp"
using namespace std;
using namespace ariel;


int main()
{
    long input;
    
    do
    {
        cin >> ws;
        cin >> input;

        // print a custom snowman depended on a valid input. Valid digits are between 1-4 
        cout << snowman(input) << endl;    
    } while (input != -1); // insert -1 to exit
    
    return 0;
}