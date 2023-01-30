#include "MemberInitializer.h"
#include <iostream>
using namespace std;

MemberInitializer::MemberInitializer(int a): constvar(a)
//initializing a constant variable
{
    cout<<"Constant variable is: "<<constvar<<endl;
}
