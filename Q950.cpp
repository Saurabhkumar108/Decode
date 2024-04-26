#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> deck = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
    // sort the array
    sort(deck.begin(),deck.end());
    int n = deck.size();
    // make queue
    queue<int> q;

    // fill the queue
    for(int i=0;i<n;i++) q.push(deck[i]);
// [1,26,2,16,3,23,4,17,5,28,6,18,7,24,8,19,9,27,10,20,11,25,12,21,13,29,14,22,15]
// [1,16,2,27,3,17,4,24,5,18,6,29,7,19,8,25,9,20,10,28,11,21,12,26,13,22,14,30,15,23]
    // intialize the ans vector
    vector<int> ans(n,-1);
    int i=0;
    int jump = 2;
    int preJump = 1;
    int firstIdx = 1;
    int secondIdx = 3;
    // main kaam
        while(q.size() > 0){
            if(q.size() == 1) {
                ans[firstIdx] = q.front();
                q.pop();
                break;
            }
            // if(jump == 8) break;
            ans[i] = q.front();
            q.pop();
            i += jump;
            if(i >= n){
                if(i+preJump-jump > n-1){
                    i = secondIdx;
                    secondIdx += jump;
                }
                else{
                    i = firstIdx;
                    firstIdx = secondIdx;
                    secondIdx += 2*jump;
                }
                preJump = jump;
                if(2*jump <= n) {
                    jump *= 2;
                }
            }

        for(int j=0;j<n;j++) cout<<ans[j]<<" ";
}