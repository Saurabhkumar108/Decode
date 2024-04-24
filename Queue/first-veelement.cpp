#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    int arr[] = {0,-1,-2,3,4,-5,6,4,7,-8};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    queue<int> q;
    vector<int> v;
    int x = 0;
    for(int i=0;i<n;i++){
        if(arr[i] < 0) q.push(i);
    }
    for(int i=0;i<n-k+1;i++){
        while(q.size() > 0 && q.front() < i) {
            q.pop();
        }
        if(q.front() >= i+k || q.size() == 0) v.push_back(0);
        else if(q.front() >= i && q.front() < i+k) v.push_back(arr[q.front()]);
    }
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}