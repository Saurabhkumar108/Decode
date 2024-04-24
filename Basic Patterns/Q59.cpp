//  A  A  A  A  A  A  A  A  A  A  A 
//  A  B  B  B  B  B  B  B  B  B  A 
//  A  B  C  C  C  C  C  C  C  B  A 
//  A  B  C  D  D  D  D  D  C  B  A 
//  A  B  C  D  E  E  E  D  C  B  A
//  A  B  C  D  E  F  E  D  C  B  A 
//  A  B  C  D  E  E  E  D  C  B  A
//  A  B  C  D  D  D  D  D  C  B  A
//  A  B  C  C  C  C  C  C  C  B  A
//  A  B  B  B  B  B  B  B  B  B  A
//  A  A  A  A  A  A  A  A  A  A  A


#include<iostream>//Number Spiral
using namespace std;
int main(){
    int n,i,j,m,k;
    m = 1;
    cout<<"Enter n : ";cin>>n;
    for(i=1;i<=n;i++){
            for(j=1;j<=(2*n)-1;j++){
                if((j>=i) && j<((2*n)-i+1)) cout<<" "<<(char)(i+64)<<" ";
                else if(j<i) cout<<" "<<(char)(j+64)<<" ";
                else cout<<" "<<(char)((2*n)-j+64)<<" ";
            }
        cout<<endl; 
    }

    for(i=(n-1);i>=1;i--){
            for(j=1;j<=(2*n)-1;j++){
                if((j>=i) && j<((2*n)-i+1)) cout<<" "<<(char)(i+64)<<" ";
                else if(j<i) cout<<" "<<(char)(j+64)<<" ";
                else cout<<" "<<(char)((2*n)-j+64)<<" ";
            }
        cout<<endl; 
    }
}