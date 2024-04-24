#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter Year : ";
    cin>>year;
    (year % 4 == 0)? cout<<"This is a leap year " : cout<<"This is not a leap year " ;
}