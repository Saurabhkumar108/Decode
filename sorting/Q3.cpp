#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i+1] != nums[i] + 1){
            cout<<nums[i] + 1;
            break;
        }
        else continue;
    }
    
}