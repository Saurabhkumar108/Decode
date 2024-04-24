#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";cin>>n;
    int lo = 0;
    int hi = n;
    bool flag = false;
    while(lo<=hi){
        int mid = (lo + hi) / 2;
        if((mid * mid) == n){
            flag = true;
            cout<<"yes....."<<mid;
            break;
        }
        else if((mid * mid) > n) hi = mid - 1;
        else if((mid * mid) < n) lo = mid + 1;
    }
    if(flag == false) cout<<"no......";
}   