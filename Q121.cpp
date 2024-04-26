#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<vector<int>> nums(n,vector<int> (n));
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>nums[i][j];
        }
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<nums[i][j];
        }
    }
}