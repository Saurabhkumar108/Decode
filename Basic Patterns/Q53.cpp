//  A  B  C  D  E  F  G  H  I  J  K  L  M  N  O 
//  A  B  C  D  E  F  G     I  J  K  L  M  N  O 
//  A  B  C  D  E  F           J  K  L  M  N  O 
//  A  B  C  D  E                 K  L  M  N  O
//  A  B  C  D                       L  M  N  O
//  A  B  C                             M  N  O 
//  A  B                                   N  O
//  A                                         O


#include<iostream>
using namespace std;
int main(){
    int n,i,j,m,k;
    cout<<"Enter n : ";cin>>n;
    for (i=n;i>=1;i--){
            for(j=1;j<=(2*n)-1;j++){
                if(j>i && j<((2*n)-i)) cout<<"   ";
                else cout<<" "<<(char)(j+64)<<" ";
            }
        cout<<endl;
    }
}