#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void popAt1(stack<int>& st){
    stack<int> s;
    while(st.size() > 0){
        s.push(st.top());
        st.pop();
    }
    s.pop();
    while(s.size() > 0){
        st.push(s.top());
        s.pop();
    }
}
int getMax(stack<int> st){
    int maxElement = INT8_MIN;
    while(st.size() > 0){
        maxElement = max(maxElement,st.top());
        st.pop();
    }
    return maxElement;
}
int main(){
    int k = 3;
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    vector<int> ans;
    stack<int> st;
    for(int i=0;i<k;i++) st.push(nums[i]);
    ans.push_back(getMax(st));
    for(int i=k;i<nums.size();i++){
        popAt1(st);
        st.push(nums[i]);
        ans.push_back(getMax(st));
    }
    ans.erase(ans.begin());
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}