#include "ExceptionHandling.h"
#include <iostream>
using namespace std;

ExceptionHandling::ExceptionHandling(){
    cout<<"Enter your age: ";
    cin>>uAge;
    cout<<"Enter your Father's age: ";
    cin>>fAge;
    try{
        if(uAge>fAge){
            throw 99;
        }
        remAge=fAge-uAge;
        cout<<"your are "<<remAge<<" yrs younger then your father";
    }catch(int x){
        cout<<"father's age cannot be smaller then yours!!";
        }
        catch(...){
        cout<<"Unknown Error";
        }
}
