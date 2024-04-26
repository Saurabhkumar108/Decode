#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<int> v = {-1,-1,0,2,-4,1};
    if (nums == v) cout<<true;
    else cout<<false;
}