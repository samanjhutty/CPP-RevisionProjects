#include "FunctionOverloading.h"
#include <iostream>
#include <math.h>
using namespace std;

FunctionOverloading::FunctionOverloading()
{
    cout<<"Enter the Int number or decimal number to get square root of: ";
    cin>>input;

    cout<<" the square root of "<<input<<" is: "<<squareroot(input)<<endl;
}
int FunctionOverloading::squareroot(int iinput) {return sqrt(iinput);}

float FunctionOverloading::squareroot(float dinput) {return sqrt(dinput);}
