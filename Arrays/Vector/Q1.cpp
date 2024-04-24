#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no. of rows : ";cin>>m;
    cout<<"Enter no. of cols : ";cin>>n;
    vector< vector<int> > v(m,vector<int> (n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    cout<<"Your Matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Diagonal Elements are : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if((j == i) || (j == n-1-i))
                cout<<v[i][j]<<" ";
            else cout<<" ";
        }
        cout<<endl;
    }
}