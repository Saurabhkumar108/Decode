#include<iostream>
using namespace std;
int main (){
    int amount,x;
    cout<<"Enter Your Amount : ";
    cin>>amount;
    x = amount;
    if (x >= 2000){
        cout<<"\n No. of 2000 Notes : "<<amount/2000;
        x = amount % 2000;
    }
    if (x >= 500){
        cout<<"\n No. of 500 Notes : "<<x/500;
        x = x % 500;
    }
    if (x >= 200){
        cout<<"\n No. of 200 Notes : "<<x/200;
        x = x % 200;
    }
    if (x >= 100){
        cout<<"\n No. of 100 Notes : "<<x/100;
        x = x % 100;
    }
    if (x >= 50){
        cout<<"\n No. of 50 Notes : "<<x/50;
        x = x % 50;
    }
    if (x >= 20){
        cout<<"\n No. of 20 Notes : "<<x/20;
        x = x % 20;
    }
    if (x >= 10){
        cout<<"\n No. of 10 Notes : "<<x/10;
        x = x % 10;
    }
}