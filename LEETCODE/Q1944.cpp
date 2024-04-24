#include<iostream>
#include<stack>
using namespace std;
// finding next greater element 
int main(){ 
    int n;cout<<"enter n : ";cin>>n;
    int heights[n];
    for(int i=0;i<n;i++) cin>>heights[i];
    stack<int> st;
    st.push(n-1);
    int arr[n];arr[n-1] = -1;
    for(int i=n-2;i>=0;i--){
        arr[i] = -1;
        while(st.size() > 0 && heights[st.top()] <= heights[i]) st.pop();
        if(st.size() != 0) arr[i] = st.top();
        st.push(i);
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" "; 
    cout<<endl;
    // find final result
    int ans[n];
    int pre;
    for(int i=0;i<n;i++){
        int count = 0;
        int highest = heights[i+1];
        for(int j=i+2;j<=arr[i];j++){
            if(heights[j] < highest) count++;
            else highest = heights[j];
        }
        cout<<count<<" ";
        if(i == n-1) ans[i] = 0;
        else if(arr[i] != -1) ans[i] = arr[i] - i - count;
        else ans[i] = 1;
    }
    cout<<endl;
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    
}






