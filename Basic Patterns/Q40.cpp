//  1  2  3  4  5
//  1  2  3  4
//  1  2  3
//  1  2
//  1




#include<iostream>//Number Spiral
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter n : ";cin>>n;
    for (i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
    
}