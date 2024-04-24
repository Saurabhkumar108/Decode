#include<iostream>
#include<vector>
using namespace std;
int pivot(int arr[],int si,int ei){
    int count = 0;
    int pe = arr[si];
    for(int i=si+1;i<=ei;i++){
        if(arr[i] <= pe) count++;
    }
    int pi = si + count;
    // set pivot element to its place
    swap(arr[si],arr[pi]);
    int i=si,j=ei;
    while((i < pi) && (j > pi)){
        if(arr[i] <= pe) i++;
        if(arr[j] > pe) j--;
        else if((arr[i] > pe) && (arr[j] <= pe)) {
            swap(arr[i],arr[j]);
            j--,i++;
        }
    }
    return pi;
}
void quick(int arr[],int si,int ei){
    //find pivot index
    if(si >= ei) return;
    int pi = pivot(arr,si,ei);
    quick(arr,si,pi-1);
    quick(arr,pi+1,ei);
}
int main(){
    int arr[] = {9,8,7,6,5,10,11,12,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quick(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}