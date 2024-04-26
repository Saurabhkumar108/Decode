#include<iostream>
#include<vector>
using namespace std;
int main(){
    int nums[] = {4,5,6,7,0,1,2};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target;
    cout<<"Enter ur target"<<" ";
    cin>>target;
    if(n == 1){
            if(target == nums[0]) cout<<0;
            else cout<<-1;
        }
    if(n > 1){   
        int lo = 0;
        int hi = n-1;
        int idx = 0;
        while(lo <= hi){
            int m = (lo + hi)/2;
            if((nums[m] < nums[m+1]) && (nums[m] < nums[m-1])) {
                idx = m;
                break;
            }
            else if((nums[m] < nums[m+1]) && (nums[m] > nums[m-1]) && (nums[m] < nums[n-1])) {
                hi = m - 1;
            }
            else lo = m + 1;
        }
        int low,high;
        bool flag = false;
        if(target <= nums[n-1]){
            low = idx;
            high = n-1;
        }
        else if(target > nums[n-1]){
            low = 0;
            high = idx - 1;
        }
        while (low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == target) {
                cout<<mid;
                flag = true;
                break;
            }
            else if(nums[mid] < target) low = mid + 1;
            else if(nums[mid] > target) high = mid - 1;
        }
        if(flag == false) cout<<-1;
    }

}