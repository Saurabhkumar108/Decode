#include<iostream>
using namespace std;
int hcf(int x,int y){
    if(y%x == 0){
        return x;
    }
    hcf(y%x,x);
}
int main(){
    int x,y;
    cout<<"Enter x : ";cin>>x;
    cout<<"Enter y : ";cin>>y;
    cout<<"HCF of x & y is : ";
    cout<<hcf(x,y);
}                                                                     