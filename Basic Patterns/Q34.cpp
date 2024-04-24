//                 *  *  *  *  *  *
//              *  *  *  *  *  * 
//           *  *  *  *  *  *
//        *  *  *  *  *  *
//     *  *  *  *  *  *
//  *  *  *  *  *  *



#include<iostream>//RHOMBUS  
using namespace std;
int main(){
    int i,j,r,n;
    cout<<"Enter Rows : "; cin>>r;
    for(i=1;i<=r;i++){
        for(j = 1;j <= ((2*r) - i);j++){
            if(j <= (r-i)) cout<<"   ";
            else cout<<" * ";
        }
        cout<<endl;
    }
    
}