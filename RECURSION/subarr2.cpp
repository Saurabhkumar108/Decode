#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[],int i,int n,vector<int> v){
    if(i == n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subset(arr,i+1,n,v);
    if((v.size() == 0) || (v[v.size() - 1] == arr[i-1])){
        v.push_back(arr[i]);
        subset(arr,i+1,n,v);
    }
}
int main(){
    int arr[] = {1,2,3};
    vector<int> v;
    int n = sizeof(arr) / sizeof(arr[0]);
    subset(arr,0,n,v);
}