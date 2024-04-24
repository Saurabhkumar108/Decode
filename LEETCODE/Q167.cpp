#include<iostream>
#include<vector>
using namespace std;
bool check(int lo,int hi,vector<int>& numbers, int ans,int idx){
    while(lo <= hi){
        int mid = (lo + hi) / 2;
        if(numbers[mid] == ans){
            idx = mid + 1;
            return true;
        }
        else if(numbers[mid] < ans) lo = mid + 1;
        else hi = mid - 1;
    }
    return false;
}
int main(){
    int n;cout<<"Enter n : ";cin>>n;
    vector<int> numbers(n);
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    for(int i=0;i<n;i++){
        cout<<numbers[i]<<" ";
    }
    int target;
    cout<<endl<<"Enter ur target : ";
    cin>>target;
    int lo = 0;int hi = n-1;
        vector<int> v(2,0);
        int ans;
        while(lo <= hi){
            int mid = (lo + hi) / 2;
            int idx;
            if(n == 2){
                if(numbers[0] + numbers[1] == target){
                    v[0] = 1;
                    v[1] = 2;
                }
                break;
            }
            else if(numbers[mid] < target){
                ans = target - numbers[mid];
                if(ans <= numbers[mid] && check(lo,mid-1,numbers,ans,idx)){
                    v[0] = idx;
                    v[1] = mid+1;
                    break;
                }
                else {
                    if(check(mid+1,hi,numbers,ans,idx)){
                        v[0] = idx;
                        v[1] = mid+1;
                        break;
                    }
                }
            }
            else hi = mid - 1;
        }
        cout<<v[0]<<" "<<v[1];
    

}