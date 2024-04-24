//              1
//           1  2  3
//        1  2  3  4  5
//     1  2  3  4  5  6  7
//  1  2  3  4  5  6  7  8  9




#include<iostream>
using namespace std;
int main(){
    int n,i,j,m,k;
    j = 1;
    cout<<"Enter n : ";cin>>n;
    for (i=1;i<=n;i++){
        for(k=1;k<=n-i;k++) cout<<"   ";
        for(k=1;k<=j;k++) cout<<" "<<k<<" ";
        j+=2;
        cout<<endl;
    }
}