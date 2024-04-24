#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<vector<int> >nums = {{1,3},{2,6},{5,10},{9,18}};
        int n = nums.size();
        vector<vector<int> > v;
        sort(nums.begin(),nums.end());
        vector<int> pre(2,0);
        pre = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i][0] <= pre[1] ){
                if(nums[i][1] <= pre[1]) continue;
                else if(nums[i][1] >= pre[1]) pre[1] = nums[i][1];
            }
            else {
                v.push_back(pre);
                pre = nums[i];
            }
        }
        v.push_back(pre);
        for(int i=0;i<v.size();i++){
            cout<<v[i][0]<<" "<<v[i][1]<<" ";
        }
        
}