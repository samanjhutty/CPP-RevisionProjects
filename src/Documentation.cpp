#include "Documentation.h"
#include <iostream>
using namespace std;

Documentation::Documentation(){
    menu();
}

Documentation::menu(){
    cout<<"\nPress 1 for List else 0 to EXIT: ";
    cin>>doc;
    if(doc)
        dList();
    else
        return 0;
}

Documentation::dList(){
    cout<<"\n\t\tDocumentation on:"
    <<"\n 1. 'friend' keyword"
    <<"\n 2. Protected"
    <<"\n 3. Inheritance"


    <<"\n Select from Range else 0 to EXIT: ";
    cin>>input;
    switch(input){
        case 0: return 0;
        break;

        case 1:friendKeyword();
        menu();
        break;

        case 2:protectedKeyword();
        menu();
        break;

        case 3:inheritance();
        menu();
        break;
    }
}

void Documentation::friendKeyword(){
    cout<<"\n Friend Keyword: ";
    cout<<"A class can only give away its friendship, any function can't demand friendship. REMEMBER to pass the base class's Object as its(function's) argument."<<endl;
}

void Documentation::protectedKeyword(){
    cout<<"\n Protected Access Specifier: ";
    cout<<"Public access specifier gives access publicly to anyone, private restricts access to anybody outside the class not even to child class. protected on the other hand, is kind of a mix public and private it restricts the access to anybody outside the class while giving child class access to its members."<<endl;
}

void Documentation::inheritance(){

}

Documentation::~Documentation(){
    cout<<"\n\t\t********************END OF DOCUMENTATION********************"<<endl;
}
