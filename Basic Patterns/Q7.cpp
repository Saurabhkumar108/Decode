#include<iostream>
using namespace std;
int main (){
    int a,b;
    cout<<"Enter Coordinates : "; cin>>a>>b;
    if (a==0 || b == 0){
        if (a != b) {
            if (a!=0) cout<<"Point lies at X-axis ";
            else if (b!=0) cout<<"Point lies at Y-axis ";
            
        }
        else cout<<"Point lies at Origin ";
    }
    else cout<<"Point lies in plane ";
}
