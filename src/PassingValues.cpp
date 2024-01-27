#include "PassingValues.h"
#include <iostream>
using namespace std;

PassingValues::PassingValues()
{
    int betty=13;
    int sandy=15;
    string str="Value of Variable before trying to change value via Function: ";

    cout<<str<<betty<<endl;
    passByValue(betty);

    cout<<"Using Pass by Value: "<<betty<<"\n\n";

    cout<<str<<sandy<<endl;
    passByReference(&sandy);

    cout<<"Using Pass by Reference: "<<sandy<<endl;
}
void PassingValues::passByValue(int value)
{
    //int value is a copy of betty
    //this doesn't change betty value it just uses a copy of variable
    value =99;
}

void PassingValues::passByReference(int *refer)
{
    //int refer is memory address of sandy
    //means it will direct impact sandy and change its value permanently
    *refer=99;
}
