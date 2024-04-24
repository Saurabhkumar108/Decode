//wave form
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
    cout<<"Wave Elements are : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i % 2 == 0){
                cout<<v[m-j-1][i]<<" ";
            }
            else{
                cout<<v[j][i]<<" ";
            }
        }
    }
    
}