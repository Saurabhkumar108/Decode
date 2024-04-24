#include<iostream>
using namespace std;
void area(int a){
    // int s = (22/7)*a*a;
    cout<<(3.14)*a*a;
    return;
}

int main(){
    int n;
    cout<<"Enter radius of the circle : ";
    cin>>n;
    area(n);
}