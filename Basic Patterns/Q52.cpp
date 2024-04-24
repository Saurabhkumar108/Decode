
//              A 
//           B  A  B 
//        C  B  A  B  C 
//     D  C  B  A  B  C  D 
//  E  D  C  B  A  B  C  D  E 



#include<iostream>
using namespace std;
int main(){
    int n,i,j,m,k;
    j = 1;
    cout<<"Enter n : ";cin>>n;
    for (i=1;i<=n;i++){
        for(k=1;k<=n-i;k++) cout<<"   ";
        for(k=i;k>=1;k--) cout<<" "<<(char)(k+64)<<" ";
        for(k=1;k<i;k++) cout<<" "<<(char)(k+65)<<" ";
        cout<<endl;
    }
}