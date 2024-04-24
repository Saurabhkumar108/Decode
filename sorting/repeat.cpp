#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int k = 4;
    int x = 3;
    int lo = 0;
    int hi = n - 1;
    int idx;
        while(lo <= hi){
            int mid = (lo + hi)/2;
            if(arr[mid] == x) {
                idx = mid;
                break;
            }
            else if(arr[mid] > x) hi = mid - 1;
            else if(arr[mid] < x) lo = mid + 1;
        }
    cout<<idx<<endl;
        vector<int> v;
        int lb = idx - 1;
        int ub = idx + 1;
        for(int i=0;i<k;i++){
            if(i == 0) {
                v.push_back(x);
                cout<<x<<endl;
            }
            else if((ub > n-1) && (lb >= 0)) {
                int y = arr[lb];
                v.push_back(y);
                cout<<y<<endl;
                lb--;
            }
            else if((lb < 0 )&& (ub <= n-1)){
                int y = arr[ub];
                v.push_back(y);
                cout<<y<<endl;
                ub++;
            }
            else if(((arr[ub] - arr[idx]) <= (arr[idx] - arr[lb]))) {
                int y = arr[lb];
                v.push_back(y);
                cout<<y<<endl;
                lb--;
            }
            else{
                int y = arr[ub];
                v.push_back(y);
                cout<<y<<endl;
                ub++;
            }
        sort(v.begin(),v.end());
    }
    for(int i=0;i<k;i++){
        cout<<v[i]<<" ";
    }
}
