#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;cout<<"Enter n : ";cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
        int i = 0,j = 1;
        while(i < n && j < n){
            if(nums[i] != 0 && nums[j] != 0) {
                i++;
                j++;
            }
            if(nums[i] != 0) i++;
            if(nums[j] == 0) j++;
            else if(nums[i] == 0 && j < n){
                swap(nums[i],nums[j]);i++;j++;
            }
        }
        for(int i=0;i<n;i++) cout<<nums[i]<<" ";       
}