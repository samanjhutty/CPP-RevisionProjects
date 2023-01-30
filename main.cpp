#include "MisssingNoInArray.h"
#include "PyramidStar.h"
#include "PalindromeString.h"
#include "RandomNumber.h"
#include "FactorialNumber.h"
#include "FunctionOverloading.h"
#include "Pointers.h"
#include "PassingValues.h"
#include "Constants.h"
#include "MemberInitializer.h"
#include "Keywords.h"
#include "Documentation.h"

#include <iostream>
using namespace std;

int getList();
int programList();

int main(){

    getList();
}

int getList(){
    cout<<"\nPress 1 to get list of programs else press 0: ";
    bool bo;

    cin>>bo;
    if(bo)
        programList();
    else
        return 0;
}

int programList()
{
    cout<<"\n 1.  Pyramid of Stars (Print STAR Triangle)"
    <<"\n 2.  Array Programs"
    <<"\n 3.  Palindrome String"
    <<"\n 4.  Random Number Generator"
    <<"\n 5.  Factorial Number using Recursion + Default parameter example"
    <<"\n 6.  Function overloading"
    <<"\n 7.  Memory Address (uses Arrow Member selection Operator to access Member functions)"
    <<"\n 8.  Pass by Value/Reference"
    <<"\n 9.  Constant  functions + Constructor/De-constructor"
    <<"\n 10. Member Initializer Syntax (assigning values to constant variable)"
    <<"\n 11. 'this' Keyword (Different ways of Referencing a variable)"

    <<endl;
    cout<<"\n press the corresponding no for the program or 0 to exit, 999 for Documentation: ";

    int input;
    cin>>input;
    cout<<endl;

    switch(input){
        case 0:return 0;
        break;

        case 999:Documentation();
        getList();
        break;

        case 1:PyramidStar();
        getList();
        break;

        case 2:MisssingNoInArray();
        getList();
        break;

        case 3:PalindromeString();
        getList();
        break;

        case 4:RandomNumber();
        getList();
        break;

        case 5:FactorialNumber();
        getList();
        break;

        case 6: FunctionOverloading();
        getList();
        break;

        case 7:{
        Pointers obj;
        obj.memAddress();

        Pointers *pointerPointer;
        pointerPointer -> memAllocation();
        }
        getList();
        break;

        case 8: PassingValues();
        getList();
        break;

        case 9:{
            Constants objs;
            objs.regFun();

            const Constants constobj;
            constobj.constFun();
        }
        getList();
        break;

        case 10: MemberInitializer(69);
        getList();
        break;

        case 11:{
        Keywords kws(5);
        kws.thiskeyword();
        }
        getList();
        break;

        default: cout<<"Invalid Input"<<endl;
        getList();
    }
}

