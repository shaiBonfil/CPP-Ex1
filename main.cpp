#include <iostream>
#include <string>
#include "snowman.hpp"
using namespace std;
using namespace ariel;


int main()
{
    long input;
    cin >> ws;
    cin >> input;

    // print a custom snowman depended on a valid input. Valid digits are between 1-4 
    cout << snowman(input) << endl; 
    
    return 0;
}