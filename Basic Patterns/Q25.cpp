

//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  * 
//  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *

#include<iostream>
using namespace std;
int main(){
    int i,n,r,c;
    cout<<"Enter Rows : "; cin>>r;
    cout<<"Enter Cols : "; cin>>c;
    n = r * c;
    for (i=0;i<=n;i++){
        if(i%c == 0) cout<<endl;
        else cout<<" * ";
        
    }
}