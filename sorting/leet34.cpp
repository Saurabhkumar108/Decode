#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {3,3,3,3,3,3,5,6,6,6,6,6,6,7,7,7,7,7,7,8,8,8,8,8,8,8,8,9,9,9,10};
    int n = nums.size();
    cout<<n<<" ";
    int target = 3;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo <= hi){
        int mid = (lo + hi) / 2;
        if(nums[mid] == target){
            if(nums[mid + 1] != target) {
                flag = true;
                cout<<mid;
                break;
            }
            else lo = mid + 1;
        }
        else if(nums[mid] > target) hi = mid - 1;
        else if(nums[mid] < target)lo = mid + 1;
    }
    
}