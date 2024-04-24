//  1
//  2  1
//  3  2  1
//  4  3  2  1
//  5  4  3  2  1
//  6  5  4  3  2  1
//  7  6  5  4  3  2  1 



#include<iostream>
using namespace std;
int main(){
    int n,i,j,m,k;
    cout<<"Enter n : ";cin>>n;
    for (i=1;i<=n;i++){
        for(k=0;k<i;k++) cout<<" "<<i-k<<" ";
        cout<<endl;
    }
        
}