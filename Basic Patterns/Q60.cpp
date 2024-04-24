    //             *  *  *  *  *  *      
    //       *  *  *  *  *  *  *  *  *  *    
    //    *  *  *  *  *  *  *  *  *  *  *  *   
    //    *  *  *  *  *  *  *  *  *  *  *  *   
    // *  *  *  *  *  *  *  *  *  *  *  *  *  *  
    // *  *  *  *  *  *  *  *  *  *  *  *  *  *  
    // *  *  *  *  *  *  *  *  *  *  *  *  *  *  
    // *  *  *  *  *  *  *  *  *  *  *  *  *  *  
    // *  *  *  *  *  *  *  *  *  *  *  *  *  *  
    // *  *  *  *  *  *  *  *  *  *  *  *  *  *  
    //    *  *  *  *  *  *  *  *  *  *  *  *   
    //    *  *  *  *  *  *  *  *  *  *  *  *   
    //       *  *  *  *  *  *  *  *  *  *    
    //             *  *  *  *  *  *      


#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter n : ";
    cin>>n;
    
    for (i=n;i>0;i--){
        for(j=n;j>0;j--){
           if(((i*i)+(j*j)-((n)*(n)))<=0) cout<<" . ";
           else cout<<" # ";
        }
        for(j=1;j<=n;j++){
           if(((i*i)+(j*j)-((n)*(n)))<=0) cout<<" . ";
           else cout<<" # ";
        }
        cout<<endl;
    }

    for (i=1;i<=n;i++){
        for(j=n;j>0;j--){
           if(((i*i)+(j*j)-((n)*(n)))<=0) cout<<" . ";
           else cout<<" # ";
        }
        for(j=1;j<=n;j++){
           if(((i*i)+(j*j)-((n)*(n)))<=0) cout<<" . ";
           else cout<<" # ";
        }
        cout<<endl;
    }
}