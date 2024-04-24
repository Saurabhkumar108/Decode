#include<iostream>
using namespace std;
int main (){
    int x,n,y,z,l;
    cout<<"Enter Your Number : ";
    cin>>n;
    y = n;
    x = 0;
    l = 0;
    while(n>0){
        n /= 10;
        z = y - n*10;
        l += z;

    }
    cout<<l;
}