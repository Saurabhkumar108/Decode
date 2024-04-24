#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter rows of 1st matrix : ";cin>>m;
    cout<<"Enter cols of 1st matrix : ";cin>>n;
    int v_1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v_1[i][j];
        }
    }
    int m1,n1;
    cout<<"Enter rows of 2nd matrix : ";cin>>m1;
    cout<<"Enter rows of 2nd matrix : ";cin>>n1;
    int v_2[m1][n1];
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            cin>>v_2[i][j];
        }
    }
    if((m == m1) && (n == n1)){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int sum = v_1[i][j] + v_2[i][j];
                v_1[i][j] = sum;
            }
        }
    }
    else cout<<"Not Possible : ";
    cout<<"Resultant matrix : "<<endl;

    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            cout<<v_1[i][j]<<"   ";
            
        }
        cout<<endl;
    }
}