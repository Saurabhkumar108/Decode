#include<iostream>
#include<vector>
using namespace std;
int order(vector<int>& arr,int index,int n){
    if(index == n) return 0;
    order(arr,index+1,n);
    cout<<arr[index]<<" ";
}
int main(){
    int n;
    cout<<"n : ";
    cin >> n;
    cout<<"arr : ";

    vector<int> arr(n);
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    order(arr,0,n);
}