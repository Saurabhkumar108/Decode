#include<iostream>
#include<vector>
using namespace std;
void subset(int nums[],int i,int n,vector<int>v,bool flag){
        if(i == n){
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            return;
        }
        else if((flag == false) && (nums[i] == nums[i+1])){ // 1
            v.push_back(nums[i]);
            subset(nums,i+1,n,v,false);
        }
        else if(flag == false){ // 1
            if(nums[i] == nums[i+1]){
                subset(nums,i+1,n,v,true);
                v.push_back(nums[i]); 
                subset(nums,i+1,n,v,false);
            }
            else {
                v.push_back(nums[i]);
                subset(nums,i+1,n,v,true);
            }
        }
        else if(nums[i] == nums[i+1]){   // 3
            subset(nums,i+1,n,v,true);
            v.push_back(nums[i]); 
            subset(nums,i+1,n,v,false);
        }
        
        
        else{    //  4
            subset(nums,i+1,n,v,true);
            v.push_back(nums[i]);
            subset(nums,i+1,n,v,true);
        }
}

int main(){
    int nums[] = {1,1,2,2};
    vector<int> v;
    int n = sizeof(nums) / sizeof(nums[0]);
    subset(nums,0,n,v,true);
}