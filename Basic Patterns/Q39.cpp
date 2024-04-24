//  1  1  1  1  1  1
//  2  2  2  2  2  2 
//  3  3  3  3  3  3
//  4  4  4  4  4  4
//  5  5  5  5  5  5
//  6  6  6  6  6  6



#include<iostream>//Number Spiral
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter n : ";cin>>n;
    for (i=1;i<=n;i++){
        for(j=0;j<n;j++){
            cout<<" "<<i<<" ";
        }
        cout<<endl;
    }
    
}