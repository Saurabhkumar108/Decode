#include<iostream>
using namespace std;
int main (){
    int i,n;
    // for (i=1;i<=100;i=i+2)
    // cout<<" "<<i;
    cout<<"Enter Your no. : " ; cin>>n;
    for (i=0;i<=n;i++){
        if(i%3==0)
        cout<<" "<<i;
    }
}