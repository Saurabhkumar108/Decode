#include<iostream>
using namespace std;
int main(){
    int n;cout<<"enter n:";cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int position;cin>>position;
    int target;cin>>target;
    arr[n+1];
    if(position > n) cout<<"Invalid position";
    else{
        int pre = arr[position-1];
        arr[position - 1] = target;
        for(int i=position;i<n+1;i++){
            int temp = arr[i];
            arr[i] = pre;
            pre = temp;
        }
    }
    cout<<"Updated array: ";
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
}