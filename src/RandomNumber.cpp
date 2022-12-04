#include "RandomNumber.h"
#include <random>
#include <iostream>
#include <ctime>
using namespace std;

RandomNumber::RandomNumber()
{
    srand(time(0));

    cout << "Printing Random number with time variable: ";
    cout << rand() << endl;

}
