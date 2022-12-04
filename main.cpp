#include "MisssingNoInArray.h"
#include "PyramidStar.h"
#include "PalindromeString.h"
#include "RandomNumber.h"
#include "FactorialNumber.h"
#include "FunctionOverloading.h"

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
    cout<<"\n 1. Pyramid of Stars (print star triangle)\n 2. Array Programs\n 3. Palindrome String";
    cout<<"\n 4. Random Number Generator\n 5. Factorial Number using Recursion + default parameter example";
    cout<<"\n 6. Function overloading"<<endl;

    cout<<"\n press the corresponding no for the program or 0 to exit: ";

    int input;
    cin>>input;
    cout<<endl;

    switch(input){
        case 0:return 0;
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

        default:cout<<"Invalid Input"<<endl;
        getList();
    }
}
