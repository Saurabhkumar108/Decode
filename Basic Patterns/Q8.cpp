#include<iostream>
using namespace std;
int main (){
    int x1,x2,x3,y1,y2,y3,num1,num2,den1,den2;
    cout<<"Enter Coordinates : ";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    (((y2-y1)/(x2-x1) == (y3-y2)/(x3-x2)) || ((y3-y2)/(x3-x2) == (y1-y3)/(x1-x3)) ) ? cout<<"All Point on same line " : cout<<"All Point not lie same line";

}