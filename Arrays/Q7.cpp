#include<iostream>
using namespace std;
#include<vector>
    void nextPermutation(vector<int>& nums) {
        int n = nums.size()-1;
        int k = -1;
        for(int i=n-1;i>=0;i--){
            if(nums[i] < nums[i+1]){
                k = i;
                break;
            }  
        }
        if(k != -1){
        int x = k+1;
        for(int i=x;n>=i;i++,n--){
            int temp = nums[i];
            nums[i] = nums[n];
            nums[n] = temp;
        }
        
        for(int i=k+1;i<nums.size();i++){
            if(nums[k]<nums[i]){
                int temps = nums[k];
                nums[k] = nums[i];
                nums[i] = temps;
            break;
            }
        }
        }

        if(k == (-1)){
            int p1 = nums.size()-1;
            for(int p2=0;p1>p2;p2++,p1--){
            int temp = nums[p2];
            nums[p2] = nums[p1];
            nums[p1] = temp;
        }
        }

    }
int main(){
    vector<int> nums;
}