#include "MisssingNoInArray.h"
#include <iostream>
#include <cmath>

using namespace std;

MisssingNoInArray::MisssingNoInArray()
{
    cout<<"Programs related to Array"<<endl;
    cout<<"\n 1. Program to find max and min element in Array";
    cout<<"\n 2. Find missing no in Array";
    cout<<"\n 3. Sort Array in Ascending/Descending order\n 4.Multidimensional Array (Matrix)";
    cout<<endl;

    cout<<"\n Press the corresponding no for the program or 0 to exit to Main Menu: ";

    cin>>input;
    cout<<endl;
    switch(input)
    {
    case 0:
        break;

    case 1:
        maxMinArray();
        break;
    case 2:
        missingNo();
        break;
    case 3:
        sortArray();
        break;

    default:
        cout<<"Invalid Input"<<endl;
        break;
    }
}
void MisssingNoInArray::sortArray()
{
    cout<<"Enter no of array elements to be entered: ";

    cin>>n;
    cout<<"\nEnter array elements: ";

    for(i=0; i<n; i++)
    {
        cin>>elements[i];
    }
    cout<<"Elements of the array are: ";
    for(i=0; i<n; i++)
    {
        cout<<elements[i]<<" ";
    }
    cout<<endl;
    cout<<"Press 1 to sort the Array in Ascending else 0 to sort in Descending: ";
    cin>>sortorder;
    if(sortorder)
    {
        cout<<"\nArray in Ascending order: ";
    }
    else
    {
        cout<<"\nArray in Descending order: ";
    }
}

void MisssingNoInArray::missingNo()
{
    cout<<"Finding missing no"<<endl;
}

void MisssingNoInArray:: maxMinArray()
{
    cout<<"Enter no of array elements to be entered: ";

    cin>>n;
    cout<<"\nEnter array elements: ";

    for(i=0; i<n; i++)
    {
        cin>>elements[i];
    }
    cout<<"Elements of the array are: ";
    for(i=0; i<n; i++)
    {
        cout<<elements[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<n; i++)
    {
        if(elements[i]>arrMax)
            arrMax=elements[i];
    }
    for(i=0; i<n; i++)
    {
        if(elements[i]<elements[0])
            arrMin=elements[i];
    }
    cout<<"The Max element in array is: "<<arrMax<<" and the minimum is: "<<arrMin<<endl;
}
