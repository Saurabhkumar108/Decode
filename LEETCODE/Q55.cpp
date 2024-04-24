#include<iostream>
#include<vector>
using namespace std;
    void jump(vector<int> &nums,int length,int &x,int& min){
        cout<<"x: "<<x<<endl;
        if(length > nums.size()-1) {
            return;
        }
        if(length == nums.size()-1) {
            if(min > x) min = x;
            cout<<"Mai Yha hu !"<<endl;
            cout<<"min: "<<min<<endl;
            x = 1;
            return;
        }
        while(nums[length] > 0){
            jump(nums,length+nums[length],++x,min);
            nums[length]--;
            x = 0;
        }
    }
int main(){
    vector<int> nums = {2,3,1,1,4};
    int x = 0;
    int min = 1000;
    jump(nums,0,x,min);
    cout<<min;
}