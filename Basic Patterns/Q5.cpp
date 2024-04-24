#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter Side 1 : " ;cin>>s1;
    cout<<"Enter Side 2 : " ;cin>>s2;
    cout<<"Enter Side 3 : " ;cin>>s3;
    if((s1 == s2) || (s2 == s3) || (s1 == s3)){
        if (s1 == s2 && s2 == s3){
            cout<<"Equilateral Triangle";
        }
        else
        cout<<"Isoceles Triangle";

    }
    else
        cout<<"Scalene Triangle ";
}