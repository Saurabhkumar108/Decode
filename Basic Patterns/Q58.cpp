
//                 *
//              *  *  *
//           *     *     *
//        *        *        *
//     *           *           *
//  *  *  *  *  *  *  *  *  *  *  *
//     *           *           *
//        *        *        *
//           *     *     *
//              *  *  *
//                 *


#include<iostream>
using namespace std;
int main(){
    int n,i,j,m,k;
    cout<<"Enter n : ";cin>>n;
    
    for(i=1;i<=n;i++){
        if(i==n) {
            for(j=1;j<=(2*n)-1;j++) cout<<" * ";
        }
        else {
            for(j=1;j<=(2*n)-1;j++){
            if((j==(n-i+1)) || (j==(n+i-1)) || (j==n)) cout<<" * ";
            else cout<<"   ";
            }
        }
        cout<<endl;
        }
    for(k=2;k<=n;k++){
        for(j=1;j<=((2*n)-1);j++){
            if((j==k) || (j==((2*n)-k)) || (j==n)) cout<<" * ";
            else cout<<"   ";
    }
        cout<<endl;
    }
}