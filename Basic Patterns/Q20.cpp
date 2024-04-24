#include<iostream>
using namespace std;
int main (){
    int n,fact,i;
    cout<<"Enter Your n : ";
    cin>>n;
    fact = 1;
    for (i=n;i>=1;i--){
        fact *= i;  
    }
    if (n == 0) cout<<"1";
    else cout<<fact;

}