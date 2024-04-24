#include<iostream>
using namespace std;
int main(){
    int area,per,l,b;
    cout<<"Enter length : ";cin>>l; cout<<"Enter breadth : ";cin>>b;
    area = l*b;per = 2*(l+b);
    (area > per)? cout<<"Area > Perimeter " : cout<<"Perimeter > Area ";
}