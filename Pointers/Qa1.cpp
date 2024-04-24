#include<iostream>
using namespace std;

int main(){
    int k,i,j,n;
    k=1;
    cin>>n;
    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(j<=(n-i)) cout<<"   ";
        else if(j>(n-i)) {
            cout<<" "<<k<<" ";
            k++;
        }
    
        }
    cout<<endl;
}

}