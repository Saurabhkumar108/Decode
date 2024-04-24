#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> nums(n);
    vector<int> v;
    cout<<"Enter your first array : ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Your arrays is : ";
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    int x = nums[0];
    cout<<"wait ......."<<endl;
    for(int i=1;i<n;i++){
        if(nums[i] == x){
            nums.erase(nums.begin()+i);
        }
        else {
            x = nums[i];
            continue;
        }
    }
    cout<<"loading ......."<<endl;
    cout<<"Your Result : "<<endl;
    int l = nums.size();
    for(int i=0;i<l;i++){
        cout<<nums[i]<<" ";
    }
}