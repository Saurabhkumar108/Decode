    // *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
    //    *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *       
    //          *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *             
    //                *  *  *  *  *  *  *  *  *  *  *  *
    //                   *  *  *  *  *  *  *  *  *  *
    //                      *  *  *  *  *  *  *  *
    //                            *  *  *  *
    //                            *  *  *  *
    //                               *  *






    //                               *  *
    //                            *  *  *  *
    //                            *  *  *  *
    //                      *  *  *  *  *  *  *  *
    //                   *  *  *  *  *  *  *  *  *  *
    //                *  *  *  *  *  *  *  *  *  *  *  *
    //          *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
    //    *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *
    // *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *



#include<iostream>
using namespace std;

int main(){
    int i,j,n,a;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter a : ";
    cin>>a;
    
    for (i=n;i>0;i--){
        for(j=n;j>0;j--){
           if(((i*i)-(4*a*j))<=0) cout<<"   ";
           else cout<<" * ";
        }
        for(j=1;j<=n;j++){
           if(((i*i)-(4*a*j))<=0) cout<<"   ";
           else cout<<" * ";
        }
        cout<<endl;
    }

    for (i=1;i<=n;i++){
        for(j=n;j>0;j--){
           if(((i*i)-(4*a*j))<=0) cout<<"   ";
           else cout<<" * ";
        }
        for(j=1;j<=n;j++){
           if(((i*i)-(4*a*j))<=0) cout<<"   ";
           else cout<<" * ";
        }
        cout<<endl;
    }
}