//                 *
//              *  *
//           *  *  *
//        *  *  *  *
//     *  *  *  *  *
//  *  *  *  *  *  *



#include<iostream>// STAR FLIPPED TRIANGLE *****
using namespace std;
int main(){
    int i,j,r;
    cout<<"Enter Rows : "; cin>>r;
    int k = r;
    // for (i=1;i<=r;i++){
    //     for (j=1;j<=k;j++){
    //         cout<<" * ";
    //     }
    //     k--;
    //     cout<<endl;
    // }

    for (i=1;i<=r;i++){
        for (j=1;j<=r;j++){
            if(j<k) cout<<"   ";
            else cout<<" * ";
        }
        k--;
        cout<<endl;
    }
    

    // for (i=1;i<=r;i++){
    //     for (j=1;j<=r;j++){
    //         if((i+j)<r+1) cout<<"   ";
    //         else cout<<" * ";
    //     }
    //     k--;
    //     cout<<endl;
    // }
    
}