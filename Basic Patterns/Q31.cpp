//  *            *
//   *          *
//    *        *
//     *      *
//      *    *
//       *  *
//       *  *
//      *    *
//     *      *
//    *        *
//   *          *  
//  *            *


#include<iostream>
using namespace std;
int main(){
    int i,j,r,c;
    cout<<"Enter Rows : "; cin>>r;
    for(i=1;i<=r;i++){
        for(j=1;j<=r;j++) {
            if (i==j || (i+j == r+1))
            cout<<" * ";
            else cout<<" ";
            }
        cout<<endl;
    }
}