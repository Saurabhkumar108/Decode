//  *
//  *  *
//  *  *  *
//  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *
//  *  *  *
//  *  *
//  *




#include<iostream>//Number Spiral
using namespace std;
int main(){
    int n,i,j,k;
    int x = n;
    k = 1;
    cout<<"Enter n : ";cin>>n;
    for(i=1;i<=(2*n)-1;i++){
        if(i<=n){
            for(j=1;j<=i;j++) cout<<" * ";
            cout<<endl;
        }
    
        else {
            for(j=1;j<=n-k;j++) cout<<" * ";
            k++;
            cout<<endl;
        }
    }
}


