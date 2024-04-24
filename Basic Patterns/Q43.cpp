
//  *
//  *  *
//  *  *  *
//  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *
//  *  *  *
//  *  *
//  *




#include<iostream>//Number Spiral
using namespace std;
int main(){
    int n,i,j,k;
    int x = n;
    cout<<"Enter n : ";cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++) cout<<" * ";
        cout<<endl;
    }

    
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++) cout<<" * ";
        cout<<endl;
    }
}


