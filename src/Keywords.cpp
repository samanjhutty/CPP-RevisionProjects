#include "Keywords.h"
#include <iostream>
using namespace std;

Keywords::Keywords(int num):a(num){}

void Keywords::thiskeyword(){

    //ways of referencing a variable

    cout<<"variable is: "<<a<<endl;     //using it usual way

    cout<<"this->variable is: "<<this->a<<endl;     //explicitly referencing to the refereed variable via object. also 'this' is storing address of the object of the class to reference the variable.

    cout<<"(*this).variable is: "<<(*this).a<<endl;     //De-referencing the pointer. its taking memory address of object and calling the value.

}
