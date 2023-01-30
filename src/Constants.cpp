#include "Constants.h"
#include <iostream>
using namespace std;

Constants::Constants()
{
    cout<<"Hey! I am a Constructor"<<endl;
}

void Constants::regFun(){
    cout<<"I am a regular function"<<endl;
}

void Constants::constFun() const{
    const string name="Samandeep";      //name cannot be changed i.e. its constant

    cout<<"Hey! "<<name<<", Welcome to constant functions and data types ;-)"
    <<endl;
}

Constants::~Constants()
{
    cout<<"Hey! I am a De-constructor"<<endl;
}
