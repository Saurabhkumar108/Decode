#include<iostream>
using namespace std;
int main (){
    int n,l,r;
    cout<<"Enter Your Number : ";
    cin>>n;
    // while(n>0){
    //     x = n % 10;
    //     cout<<x;
    //     n /= 10;  
    // }
    r = 0;
    while(n>0){
        r = r*10;
        l = n%10;
        r += l;
        n /= 10;
    }
    cout<<r;
    
}