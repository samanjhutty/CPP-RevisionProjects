#include "OperatorOverloading.h"
#include <iostream>
using namespace std;

OperatorOverloading::OperatorOverloading(){}

OperatorOverloading::OperatorOverloading(int q):input(q){}

OperatorOverloading OperatorOverloading::operator+(OperatorOverloading aso)
{
    OperatorOverloading newobj;
    newobj.input= input+ aso.input;

    return(newobj);
}
