
//                 *
//              *  *  *
//           *  *  *  *  *
//        *  *  *  *  *  *  *
//     *  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *  *  *
//     *  *  *  *  *  *  *  *  *
//        *  *  *  *  *  *  *
//           *  *  *  *  *
//              *  *  *
//                 *




#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";cin>>n;
    
    for(int i=1;i<=n;i++){
        if(i==n+1) {
            for(int j=1;j<=(2*n)-1;j++) cout<<"*";
            cout<<endl;
        }
        for(int j=1;j<=(2*n)-1;j++){
            if((j<=(n-i)) || (j>=(n+i))) cout<<"   ";
            else cout<<" * ";
        }
        cout<<endl;
        }
    for(int k=2;k<=n;k++){
        for(int j=1;j<=((2*n)-1);j++){
            if((j<k) || (j>((2*n)-k))) cout<<"   ";
            else cout<<" * ";
    }
        cout<<endl;
    }
}