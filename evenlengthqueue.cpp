#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    int n;cout<<"Eneter n : ";cin>>n;
    queue<int> q;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        q.push(x);
    }


    stack<int> st;
    for(int i=0;i<n/2;i++) {
        st.push(q.front());
        q.pop();
    }


    while(st.size() > 0){
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<n/2;i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
    for(int i=0;i<n/2;i++) {
        st.push(q.front());
        q.pop();
    }

    while(st.size() > 0){
        q.push(st.top());
        st.pop();
        int x = q.front();
        q.pop();
        q.push(x);

    }
    while(q.size() > 0){
        cout<<q.front()<<" ";
        q.pop();
    }
}
