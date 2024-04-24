#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,target;
    bool flag = false;
    cout<<"Enter target :  ";cin>>target;
    cout<<"Enter n :  ";cin>>n;
    vector<int> nums(n,-1);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int lo = 0;
    int hi = n-1;
    while(lo <= hi){
        int mid = (lo + hi) / 2;
        if(nums[mid] == target){
            if(nums[mid - 1] != target) {
                flag = true;
                cout<<"No. of 1's "<<n - mid;
                break;
            }
            else hi = mid - 1;
        }
        else if(nums[mid] > target) hi = mid - 1;
        else if(nums[mid] < target)lo = mid + 1;
    }
    
}