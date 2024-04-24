//                 *  *  *  *  *  *
//              *  *  *  *  *  *
//           *  *  *  *  *  *
//        *  *  *  *  *  *
//     *  *  *  *  *  *
//  *  *  *  *  *  * 



#include<iostream>//Number Spiral
using namespace std;
int main(){
    int n,i,j,m,k;
    cout<<"Enter n : ";cin>>n;
    for (i=1;i<=n;i++){
        for(k=1;k<=n-i;k++) cout<<"   ";
        for (j=1;j<=n;j++) cout<<" * ";
        cout<<endl;
    }
        
}
