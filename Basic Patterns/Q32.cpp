// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21



#include<iostream>
using namespace std;
int main(){
    int i,j,r,n;
    cout<<"Enter Rows : "; cin>>r;
    n = 1;
    for (i=1;i<=r;i++){
        for(j=1;j<=i;j++){
            cout<<n<<" ";
            n = n+1;
        }
        cout<<endl;
        
    }
    
}