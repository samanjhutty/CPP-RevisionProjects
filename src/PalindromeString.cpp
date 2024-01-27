#include "PalindromeString.h"
#include <iostream>
#include <string>

using namespace std;

PalindromeString::PalindromeString()
{
    cout<<"Check if the String is palindrome,\n if not so then how many characters does it needs to become one "<<endl;
    cout<<"\nEnter String: ";

    string strPalin,revPalin;
    cin>>strPalin;

    strlen=strPalin.length();
    for(int i=strlen-1; i>=0; i--)
    {
        revPalin+=strPalin[i];
    }

    if(strPalin==revPalin)
    {
        cout<<"The given string "<<strPalin<<" is palindrome"<<endl;
    }
    else
    {


        //code to know charcters to become palindrome


        cout<<"The string "<<strPalin<<" requires "<<minchar<<" to become palindrome"<<endl;
    }

}
