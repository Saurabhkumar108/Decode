#include<iostream>
using namespace std;
int main(){
    float area,cum,r;
    cout<<"Enter Radius : ";
    cin>>r;
    area = 3.14*r*r;
    cum = 2*3.14*r;
    (area>cum)? cout<<"Area of this cir is greater than circumference " : cout<<"Area of this cir is smaller than circumference ";
}