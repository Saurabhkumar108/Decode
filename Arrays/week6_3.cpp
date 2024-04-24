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
    int max = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max < v[i][j])
                max = v[i][j];
            else continue;
        }
    }
    cout<<"Max Element : "<<max;
    
}