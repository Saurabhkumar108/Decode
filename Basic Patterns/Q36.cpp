    //          *  *  *  *  *  *
    //       *  *  *  *  *  *
    //    *  *  *  *  *  *
    // *  *  *  *  *  *



#include<iostream>//RHOMBUS  
using namespace std;
int main(){
    int i,j,r,n;
    cout<<"Enter Rows : "; cin>>r;
    for (i = 1;i < r;i++){
        for(j = 0;j < (r-i);j++){
            cout<<"   ";
        }


        for(int k = 1;k <= r;k++){
            cout<<" * ";
        }
          cout<<endl;
    }
        
}