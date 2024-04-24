//Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
//You must do it in place.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k,l;
    cout<<"Enter no. of cols : ";cin>>n;
    vector< vector<int> > v(n,vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    cout<<"Your Matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j] == 0){
                k = i;
                l = j;
            }
            if(i == k || j == l){
                v[i][l] = 0;
                v[k][j] = 0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == k || j == l){
                v[i][l] = 0;
                v[k][j] = 0;
            }
            else continue;
        }
    }
    cout<<"Altered Elements are : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
}