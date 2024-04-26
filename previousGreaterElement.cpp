#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;cout<<"enter n : ";cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    stack<int> st;
    st.push(arr[0]);
    int ans[n]; ans[0] = -1;
    for(int i=1;i<n;i++){
        ans[i] = -1;
        while(st.size() > 0 && st.top() <= arr[i]){
            st.pop();
        }
        if(st.size() != 0) ans[i] = st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    
}