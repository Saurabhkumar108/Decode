#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int fact(int n){
    if(n == 0 || n == 1) return 1;
    return n*fact(n-1);
}
void nextPermutation(vector<int>& arr,int i,int count){
    //1st find pivot element
    if(i == count) return;
    int n = arr.size();
    int pi = 0;
    if(n == 2){
        if(arr[0] < arr[1]) swap(arr[0],arr[1]);
        else swap(arr[0],arr[1]);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=n-2;i>0;i--){
        if((arr[n-1] > arr[n-2])) {
            pi = n-1;
            break;
        }
        else if((arr[i] > arr[i+1]) && (arr[i] > arr[i-1])){
            pi = i;
            break;
        }
    }

    for(int i=n-1;i>=pi;i--){
        if(arr[pi-1] < arr[i]) {
            swap(arr[pi-1],arr[i]);
            break;
        }
    }
    int x = pi;
    int y = n-1;
    while(x <= y){
        swap(arr[x],arr[y]);
        x++;y--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    nextPermutation(arr,i+1,count);
}

    
    
    
int main(){
    int k = 0;
    int n;cout<<"n : ";cin>>n;
    vector<int> arr(n);
    // int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // swap(arr[0],arr[n-1]);
    int count = fact(n);
    nextPermutation(arr,1,count);
    // main();
    cout<<count;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
        
      

}