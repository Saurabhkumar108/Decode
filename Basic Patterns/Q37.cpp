//                 *
//              *  *  *
//           *  *  *  *  *
//        *  *  *  *  *  *  *
//     *  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *  *  *



#include<iostream>//RHOMBUS  
using namespace std;
int main(){
    int i,j,r,n;
    n = 1;
    cout<<"Enter Rows : "; cin>>r;
    for(i=1;i<=r;i++){
        for(j=1;j<=r-i;j++){
            cout<<"   ";
        }
        
        for (int j=1;j<=n;j++){
             cout<<" * ";
        }
        n = n+2;
        cout<<endl;
    }
}