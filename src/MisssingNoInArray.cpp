#include "MisssingNoInArray.h"
#include <iostream>
#include <cmath>

using namespace std;

MisssingNoInArray::MisssingNoInArray(){
    cout<<"Programs related to Array"<<endl;
    cout<<"\n1. Program to find max and min element in array\n2. Find missing no in array"<<endl;


    cout<<"\n press the corresponding no for the program or 0 to exit to main menu: ";

    int input;
    cin>>input;
    cout<<endl;
    switch(input){
        case 0:break;

        case 1: maxMinArray();
        break;
        case 2: missingNo();
        break;

        default: cout<<"Invalid Input";
        break;
    }

}
MisssingNoInArray:: maxMinArray(){

    cout<<"Enter 5 array elements: ";
    int elements[5],newElement[5],i,n=5,arrMax=0,arrMin=0;

    for(i=0;i<n;i++){
        cin>>elements[i];
    }

    cout<<"Elements of the array are: ";
    for(i=0;i<n;i++){
        cout<<elements[i]<<" ";
    }

    cout<<endl;
    for(i=0;i<n;i++){
        if(elements[i]>elements[0])
        arrMax=elements[i];
    }

    for(i=0;i<n;i++){
        if(elements[i]<elements[0])
        arrMin=elements[i];
    }
    cout<<"The Max element in array is: "<<arrMax<<" and the minimum is: "<<arrMin<<endl;

    return 0;
}

MisssingNoInArray::missingNo(){
    cout<<"Finding missing no"<<endl;
}

