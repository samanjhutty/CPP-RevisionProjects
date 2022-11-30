#include <iostream>
#include "MisssingNoInArray.h"
#include "PyramidStar.h"

using namespace std;

int getList();
int programList();

int main()
{
    getList();

    return 0;
}
int getList(){
    cout<<"\nPress 1 to get list of programs else press 0: ";
    bool bo;

    cin>>bo;
    if(bo){
            cout<<endl;
            programList();
    }
    else{
        return 0;
    }
}
int programList(){
    cout<<"\n1. Pyramid of Stars\n2. Array Programs\n3. Palindrome String"<<endl;

    cout<<"\n press the corresponding no for the program or 0 to exit: ";

    int input;
    cin>>input;
    cout<<endl;

    switch(input){
        case 0:return 0;
        break;

        case 1: PyramidStar();
        getList();
        break;

        case 2: MisssingNoInArray();
        getList();
        break;

        default: cout<<"Invalid Input"<<endl;
        getList();
    }
}
