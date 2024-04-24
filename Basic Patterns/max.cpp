#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"1st Input : ";
    cin>>a;
    cout<<"2nd Input : ";
    cin>>b;
    // if(a>b)
    //     cout<<"max no : "<<a;
    // else cout<<"max no : "<<b;
    cout<<"largest no is : ";
    (a>b) ? cout<<a : cout<<b;
}