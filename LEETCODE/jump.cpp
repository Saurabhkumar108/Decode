#include<iostream>
#include<vector>
using namespace std;
void jump(vector<int> &nums,int length,bool& flag){
    cout<<"me andar aagya !"<<endl;
        if(flag == true) return;
        if(length == nums.size()-1) cout<<"true";
        while(nums[length] > 0){
            jump(nums,length+nums[length]);
            if(flag == true) break;
            else nums[length]--;
        }
        return false;
    }

int main(){
    int n;cout<<"Enter n: ";
    vector<int> nums(n);
    bool flag;
    for(int i=0;i<n;i++) cin>>nums[i];
    jump(nums,0);
    if(flag == true) cout<<"True";
    else cout<<"False";
}