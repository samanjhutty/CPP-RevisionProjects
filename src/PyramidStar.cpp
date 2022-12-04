#include <iostream>
#include "PyramidStar.h"

using namespace std;

PyramidStar::PyramidStar()
{
    cout<<"Enter the length of triangle: ";
    cin>>length;
    cout<<endl;

    starTri(length);
}
void PyramidStar::starTri(int l){
        for( i=l; i>=1; i--)
    {
        for( j=i; j>=1; j--)
        {
            cout<<" ";
        }
        for( k=l; k>=i; k--)
        {
            cout<<"*";
        }
        for( k=l; k>i; k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
