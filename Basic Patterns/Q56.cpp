//  *  *  *  *  *  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *     *  *  *  *  *  *
//  *  *  *  *  *           *  *  *  *  *
//  *  *  *  *                 *  *  *  * 
//  *  *  *                       *  *  *
//  *  *                             *  *
//  *                                   *
//  *  *                             *  * 
//  *  *  *                       *  *  *
//  *  *  *  *                 *  *  *  *
//  *  *  *  *  *           *  *  *  *  *
//  *  *  *  *  *  *     *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *  *  *  *  *


#include<iostream>
using namespace std;
int main(){
    int n,i,j,m,k;
    cout<<"Enter n : ";cin>>n;
    k=1;
    
    for (i=n;i>=1;i--){
            for(j=1;j<=(2*n)-1;j++){
                if(j>i && j<((2*n)-i)) cout<<" . ";
                else cout<<" * ";
            }
        cout<<endl;
    }
    for (i=2;i<=n;i++){
            for(j=1;j<=(2*n)-1;j++){
                if(j>i && j<((2*n)-i)) cout<<" . ";
                else cout<<" * ";
            }
        cout<<endl;
    }
}