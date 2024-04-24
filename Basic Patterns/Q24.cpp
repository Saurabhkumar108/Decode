#include<iostream>
using namespace std;
int main (){
    int i,n,c;
    // for (i=1;i<=100;i=i+2)
    // cout<<" "<<i;
    cout<<"Enter Your no. : " ; cin>>n;
    c = 4;
    for (i=0;i<=n;i++){
        cout<<c<<" "<<","<<"";
        c = c+3;
    }
}