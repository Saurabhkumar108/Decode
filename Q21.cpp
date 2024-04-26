#include<iostream>
using namespace std;
void merge(int arr[],int brr[],int n, int m){
    int ans[m+n];
    int i = 0, j = 0 , k  = 0;
    while(i < n && j < m){
        if(arr[i] < brr[j]) ans[k++] = arr[i++];
        else if(arr[i] > brr[j]) ans[k++] = brr[j++];
        else{
            ans[k++] = arr[i++];
            ans[k++] = brr[j++];
        }
    }
    if(i == n) while(j < m) ans[k++] = brr[j++];
    else while(i < n) ans[k++] = arr[i++];
    cout<<"merged sorted array is: ";
    for(int i=0;i<m+n;i++) cout<<ans[i]<<" ";
}
int main(){
    int m,n;
    cout<<"Enter n & m : ";cin>>n>>m;
    int arr[n];int brr[m];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<m;i++) cin>>brr[i];
    cout<<"array : "<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=0;i<m;i++) cout<<brr[i]<<" ";
    merge(arr,brr,n,m);
}