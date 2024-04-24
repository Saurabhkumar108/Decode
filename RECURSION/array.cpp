#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int n){
    if(n < 0) return;
    print(arr,n-1);
    cout<<arr[n]<<" ";
}

int main(){
    int arr[6] = {4,5,7,6,8,9};
    int n = 6;
    print(arr,n-1);
}