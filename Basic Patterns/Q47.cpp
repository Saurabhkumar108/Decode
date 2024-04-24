//                 A
//              A  B
//           A  B  C
//        A  B  C  D
//     A  B  C  D  E
//  A  B  C  D  E  F


#include<iostream>
using namespace std;
int main(){
    int n,i,j,m,k;
    cout<<"Enter n : ";cin>>n;
    for (i=1;i<=n;i++){
        for(k=1;k<=n-i;k++) cout<<"   ";
        for (j=1;j<=i;j++) cout<<" "<<(char)(j+64)<<" ";
        cout<<endl;
    }
        
}

