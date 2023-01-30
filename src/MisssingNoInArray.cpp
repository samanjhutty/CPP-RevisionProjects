#include "MisssingNoInArray.h"
#include <iostream>
#include <cmath>

using namespace std;

MisssingNoInArray::MisssingNoInArray()
{
    cout<<"Programs Related to Array"<<endl
    <<"\n 1. Program to find Max and Min Element in Array"
    <<"\n 2. Find Missing Element in Array"
    <<"\n 3. Sort Array in Ascending/Descending Order"
    <<"\n 4. Multidimensional Array (Matrix)";
    cout<<endl;

    cout<<"\n Press the corresponding no for the program or 0 to exit to Main Menu: ";

    cin>>input;
    cout<<endl;
    switch(input){
    case 0:break;

    case 1:maxMinArray();
    break;

    case 2:missingNo();
    break;

    case 3:sortArray();
    break;

    case 4:multiDimenArray();
    break;

    default:cout<<"Invalid Input"<<endl;
    break;
    }
}
void MisssingNoInArray::sortArray()
{
    cout<<"Enter no of array elements to be entered: ";

    cin>>n;
    cout<<"\nEnter array elements: ";

    for(i=0; i<n; i++){
        cin>>elements[i];
    }
    cout<<"Elements of the array are: ";
    for(i=0; i<n; i++){
        cout<<elements[i]<<" ";
    }
    cout<<endl;
    cout<<"Press 1 to sort the Array in Ascending else 0 to sort in Descending: ";
    cin>>sortorder;
    if(sortorder){
        cout<<"\nArray in Ascending order: ";

        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                if(elements[j]<elements[i])
                    swap(elements[i],elements[j]);
            }
        }
    for (i = 0; i < n; i++)
    cout<<elements[i]<<", ";
    }
    else{
        cout<<"\nArray in Desceding order: ";
        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                if(elements[j]>elements[i])
                    swap(elements[i],elements[j]);
            }
        }
    for (i = 0; i < n; i++)
    cout<<elements[i]<<", ";
    }
}

void MisssingNoInArray::missingNo()
{
    cout<<"Enter no of array elements to be entered: ";

    cin>>n;
    cout<<"\nEnter array elements: ";

    for(i=0; i<n; i++){
        cin>>elements[i];
    }
    cout<<"Elements of the array are: ";
    for(i=0; i<n; i++){
        cout<<elements[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(elements[j]<elements[i])
                swap(elements[i],elements[j]);
        }
    }

    int imin=elements[0];
    int imax=elements[n-1];

    cout<<"The Missing numbers are: ";
    for(s=imin;s<=imax;s++){
        for(i=0; i<n; i++){
            if(elements[i]!=s)
                cout<<s<<" ";
        }
    }
}

void MisssingNoInArray::multiDimenArray()
{
    cout<<"Enter no of rows and columns to be entered:";
    cin>>mulr>>mulc;

    cout<<"\nEnter array elements: ";
    for(i=0; i<mulr; i++){
             for(j=0; j<mulc; j++)
                cin>>multiElements[i][j];
    }
    cout<<"Elements of the array are: "<<endl;
    for(i=0; i<mulr; i++){
             for(j=0; j<mulc; j++)
                cout<<multiElements[i][j]<<" ";
            cout<<endl;
    }
    cout<<endl;


}

void MisssingNoInArray:: maxMinArray()
{
    cout<<"Enter no of array elements to be entered: ";

    cin>>n;
    cout<<"\nEnter array elements: ";

    for(i=0; i<n; i++){
        cin>>elements[i];
    }
    cout<<"Elements of the array are: ";
    for(i=0; i<n; i++){
        cout<<elements[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<n; i++){
        if(elements[i]>arrMax)
            arrMax=elements[i];
    }
    for(i=0; i<n; i++){
        if(elements[i]<arrMax)
            arrMin=elements[i];
    }
    cout<<"The Max element in array is: "<<arrMax<<" and the minimum is: "<<arrMin<<endl;
}
