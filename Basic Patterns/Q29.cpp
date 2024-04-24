
//  *
//  *  *
//  *  *  *
//  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *  *
//  *  *  *  *  *  *  *
//  *  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *
//  *  *  *
//  *  * 
//  *


#include<iostream>
using namespace std;
int main(){
    int i,j,r,c;
    cout<<"Enter Rows : "; cin>>r;
    for (i=0;i<=r-1;i++){
        for (j=1;j<=i;j++) cout<<" * ";
        cout<<endl;
    }
    for (i=0;i<=r;i++){
        for (j=1;j<=(r-i);j++) cout<<" * ";
        cout<<endl;

        
    }
}
