#include<iostream>
#include<stack>
using namespace std;
// finding next smaller element 
int main(){ 
    int n;cout<<"enter n : ";cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    stack<int> st;
    st.push(n-1);
    int ans1[n];ans1[n-1] = n;
    for(int i=n-2;i>=0;i--){
        ans1[i] = n;
        while(st.size() > 0 && arr[st.top()] >= arr[i]) st.pop();
        if(st.size() != 0) ans1[i] = st.top();
        st.push(i);
    }
    for(int i=0;i<n;i++) cout<<ans1[i]<<" ";
    cout<<endl;
    while(st.size() > 0) st.pop();
// finding previous smaller element 
    st.push(0);
    int ans2[n];ans2[0] = 0;
    for(int i=1;i<n;i++){
        ans2[i] = 0;
        while(st.size() > 0 && arr[st.top()] >= arr[i]) st.pop();
        if(st.size() != 0) ans2[i] = st.top()+1;
        st.push(i);
    }
    for(int i=0;i<n;i++) cout<<ans2[i]<<" ";
    cout<<endl;
    int maxArea = -1;
    for(int i=0;i<n;i++){
        int area = arr[i] * (ans1[i] - ans2[i]);
        if(maxArea <= area) maxArea = area;
    }
    cout<<"Maxmimum Area is : "<<maxArea;

}






