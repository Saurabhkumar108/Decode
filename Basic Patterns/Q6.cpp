#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Marks : ";
    cin>>a>>b>>c;
    if(a>b){
        if(b>c) cout<<"Least Marks : "<<c;
        else cout<<"Least Marks : "<<b;
    }
    else if (b>c){
        if(a>c) cout<<"Least Marks : "<<c;
        else cout<<"Least Marks : "<<a;
    }
    else if (c>a){
        if(a>b) cout<<"Least Marks : "<<b;
        else cout<<"Least Marks : "<<a;
    }
}