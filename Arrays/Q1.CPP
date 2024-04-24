#include<iostream>
using namespace std;
void square(int a){
    int j;
    for(int i=1;i<=a;i++){
        cout<<i*i<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter Your No : ";
    cin>>n;
    square(n);
}