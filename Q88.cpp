#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n = 3;
    int m = 3;
    int nums1[n] = {1,2,3,0,0,0};
    int nums2[m] = {2,5,6};
        int i=0,j=0,k=0;
        int ans[m+n];
        while(i < m && j < n){
            if(nums1[i] == 0) ans[k++] = nums2[j++];
            else if(nums1[i] == nums2[j]) {
                ans[k++] = nums1[i++];
                ans[k++] = nums2[j++];
            }
            else if(nums1[i] < nums2[j]) ans[k++] = nums1[i++];
            else ans[k++] = nums2[j++];
        }
        if(i == m) while(j < n) ans[k++] = nums2[j++];
        else while(i < m) ans[k++] = nums1[i++];
        for(int i=0;i<m+n;i++) cout<<ans[i]<<" ";
}