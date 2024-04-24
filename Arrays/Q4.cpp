#include<iostream>
using namespace std;
void oddbtw(int x,int y){
    for(int i=x;i<=y;i++){
        if(i%2 != 0) cout<<i<<" ";
    }
    return;
}

int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";cin>>b;

    oddbtw(a,b);
}