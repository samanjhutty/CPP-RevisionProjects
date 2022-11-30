#include <iostream>
#include "PyramidStar.h"

using namespace std;

PyramidStar::PyramidStar(){
    cout<<"Program to print star triangle\n"<<endl;
    int i,j,k;
    for( i=5;i>=1;i--){

        for( j=i;j>=1;j--){

            cout<<" ";
        }
        for( k=5;k>=i;k--){

             cout<<"*";
        }
        for( k=5;k>i;k--){

             cout<<"*";
        }


        cout<<endl;
    }

}
