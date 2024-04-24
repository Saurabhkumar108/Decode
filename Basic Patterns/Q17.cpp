#include<iostream>
using namespace std;
int main (){
    int digit,x,y;
    cout<<"Enter Your Number : ";
    cin>>digit;
    y = 0;
    while(digit>0){
        digit = digit / 10;
        y++;
    }
    cout<<y;
}