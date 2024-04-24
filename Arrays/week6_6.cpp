#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows of 1st matrix : ";cin>>m;
    cout<<"Enter cols of 1st matrix : ";cin>>n;
    int v[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j == i){
                cout<<v[i][i]<<" ";
            }
            if(j == (n-1-i)){
                cout<<v[i][i]<<" ";
            }
        }
    }

}