//  1
//  1 2
//  1 2 3
//  1 2 3 4
//  1 2 3 4 5
//  1 2 3 4 5 6
//  1 2 3 4 5 6 7


#include<iostream>
using namespace std;
int main(){
    int i,j,r,c;
    cout<<"Enter Rows : "; cin>>r;
    for (i=1;i<=r;i++){
        int a = 1;
        for (j=1;j<=i;j++) cout<<" "<<j;
        a = a+2;
        cout<<endl;
        }
        
    
}