#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";cin>>n;
    int arr[n]; 
    cout<<"Enter Your array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int k = 0;
    for(int i=0;i<n;i++){
        int pre_min = 1000000;
        int x ;
        for(int j=0;j<n;j++){
            if(arr[j] < pre_min && arr[j] > k) {
                pre_min = arr[j];
                x = j;
            }
        }
        arr[x] = k;
        k++;
    }
    cout<<"Your final array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}