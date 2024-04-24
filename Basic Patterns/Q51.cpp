//              A
//           A  B  C
//        A  B  C  D  E
//     A  B  C  D  E  F  G
//  A  B  C  D  E  F  G  H  I 


#include<iostream>
using namespace std;
int main(){
    int n,i,j,m,k;
    j = 1;
    cout<<"Enter n : ";cin>>n;
    for (i=1;i<=n;i++){
        for(k=1;k<=n-i;k++) cout<<"   ";
        for(k=1;k<=j;k++) cout<<" "<<(char)(k+64)<<" ";
        j+=2;
        cout<<endl;
    }
}