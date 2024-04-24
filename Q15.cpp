#include<iostream>
#include<math.h>
#include<algorithm>Q
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    int n = nums.size();
        sort(nums.begin(),nums.end());
        vector< vector<int> > v1;
        for(int i=0;i<n;i++){
            for(int j=n-1;j>i;j--){
                for(int k=i+1;k<j;k++){
                    vector<int> v(3,0);
                    vector<int> v3;
                    if(k == i && k == j) continue;
                    else if(((nums[i] + nums[k] + nums[j]) == 0)){
                        v[0] = nums[i];
                        v[1] = nums[k];
                        v[2] = nums[j];
                        v1.push_back(v);
                    }
                }
            }
        }

        vector <vector<int> > v3;
        vector<int> v2;
        int m = v1.size();
        v3.push_back(v1[0]);
        for(int i=0;i<m-1;i++){
            for(int j=i+1;j<m;j++){
                if(v1[i] != v1[j]){
                    v3.push_back(v1[j]);
                }
                else continue;
            }
        }
    int k = v1.size();
    for(int i=0;i<k;i++){
        for(int j=0;j<3;j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
}