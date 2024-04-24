//  *  *  *  *  *
//  *           *
//  *           *
//  *           *
//  *           *
//  *  *  *  *  *



#include<iostream>//Number Spiral
using namespace std;
int main(){
    int n,i,j,m,k;
    cout<<"Enter n : ";cin>>n;
    cout<<"Enter m : ";cin>>m;
    for (i=1;i<=m;i++){
        if(i==1 || i==m){
            for(j=1;j<=n;j++) cout<<" * ";
            cout<<endl;
        }
        else {
            for(k=1;k<=n;k++){
                if(k==1 || k==n) cout<<" * ";
                else cout<<"   ";
            }
            cout<<endl;
        }
    }
}


