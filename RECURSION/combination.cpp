#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[],int k,int n,vector<int> v){
    if(k == n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=k;i<n;i++){
        v.push_back(arr[i]);
        subset(arr,k+1,n,v);
    }
}
int main(){
    int arr[] = {1,2,3};
    vector<int> v;
    int n = sizeof(arr) / sizeof(arr[0]);
    subset(arr,0,n,v);
}