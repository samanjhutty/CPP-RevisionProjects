#include "FactorialNumber.h"
#include <iostream>
using namespace std;

FactorialNumber::FactorialNumber()
{
    cout<<"Press 1 to load default parameters else put the custom value: ";
    cin>>uinput;

    if(uinput==1)
        cout<<"The factorial of 5 is: "<<getFactorial()<<endl;
    else
        cout<<"The factorial of "<<finput<<" is: "<<getFactorial(finput)<<endl;
}
int FactorialNumber::getFactorial(int factoNumber){
    if(factoNumber==1)
        return 1;
    else
        return factorial=factoNumber*getFactorial(factoNumber-1);
}
