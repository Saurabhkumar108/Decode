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
    int r;
    for(int i=0;i<m;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum += v[i][j];
        }
        if(max < sum){
            max = sum;
            r = i;
        }
        else continue;
    }
    cout<<"row no. is : "<<r<<endl<<"Max Element : "<<max;
    
}