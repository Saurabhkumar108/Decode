#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int pivot(int arr[],int si,int ei){
    int pre = arr[si];
    // int pre = arr[(si+ei)/2];
    int count = 0;
    for(int i=si;i<=ei;i++){
        if(arr[i] <= pre) count++;
    }
    int pi = si + count;
    int pivot = arr[si]; // pivot element

    swap(arr[si],arr[pi]);
    int j = si,k = ei;
    while((j < pi) && (k > pi)){
        if(arr[j] < pivot) j++;
        if(arr[k] > pivot) k--;
        else if(arr[j] > pivot && arr[k] < pivot) swap(arr[j],arr[k]);
    }
    return pi;
}
void QuickSort(int arr[],int si,int ei){ // si => starting index  ei => ending index
    if(si >= ei) return;
    // find pivot index
    int pi = pivot(arr,si,ei);
    // call two array;
    QuickSort(arr,si,pi-1);
    QuickSort(arr,pi+1,ei);

}
int main(){
    int n;cout<<"Enter n: ";cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Current array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    QuickSort(arr,0,n-1);
    cout<<endl<<"Sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}