#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";cin>>n;
    vector< vector<int> >matrix(n,vector<int> (n,1));
    vector< vector<int> > v(n,vector<int> (n,1));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
        int m = n-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v[i][j] = matrix[m-j][i];
            }
        }
        matrix = v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}