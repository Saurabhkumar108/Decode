#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> deck = {1,2,3,4,5,6,7,8,9,10};
    // sort the array
    sort(deck.begin(),deck.end());
    int n = deck.size();
    deque<int> dq;
        dq.push_front(deck[n-1]);
        cout<<dq.front()<<endl;
        for(int i=n-2;i>=0;i--){
            dq.push_front(dq.back());
            dq.pop_back();
            dq.push_front(deck[i]);
        }
        while(dq.size() > 0){
            cout<<dq.front()<<" ";
            dq.pop_front();
        }
}
