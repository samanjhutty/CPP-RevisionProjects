#include "Pointers.h"
#include <iostream>
using namespace std;

void Pointers::memAddress(){
    int fish=5;
    cout<<"the Memory Address of Integer having value using memory address operator "
    <<fish<<" is: "<<&fish<<endl;

    int *fishPointer;
    fish=10;
    fishPointer=&fish;
    cout<<"the Memory Address of Integer using Pointer using pointer and Changed values "
    <<fish<<" is: "<<&fish<<endl;
}

void Pointers::memAllocation(){
    cout<<"\n\nRepresentation of memory allocation of pointers"<<endl;

    int arr[5];
    int *bp0=&arr[0];
    int *bp1=&arr[1];
    int *bp2=&arr[2];

    cout<<"\nThe First Element of Array is at Address: "<<bp0<<endl;
    cout<<"The Second Element of Array is at Address: "<<bp1<<endl;
    cout<<"The Third Element of Array is at Address: "<<bp2<<endl;
    cout<<"and so on......."<<endl;

    bp0+=2;
    cout<<"\nThe First Element of Array after Adding 2 to Pointer is now at at Address: "<<bp0<<endl;


}
