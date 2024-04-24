#include<iostream>
#include<vector>
using namespace std;
void sum(int arr[],int k,int target,int n,vector<int> v){
    if(target < 0) return;
    else if(target == 0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=k;i<n;i++){
        v.push_back(arr[i]);
        sum(arr,i,target-arr[i],n,v);
        v.pop_back();
    }
}
int main(){
    int arr[] = {2,3,5};
    vector<int> v;
    int n = sizeof(arr) / sizeof(arr[0]);
    sum(arr,0,8,n,v);
}