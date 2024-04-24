#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int n,int max){
    if(n < 0) {
        cout<<max;
        return;
    }
    if(max < arr[n]) max = arr[n];
    print(arr,n-1,max);
}

int main(){
    int arr[6] = {400,5,73,67,8928,9};
    int n = 6;
    int max ;
    print(arr,n-1,max);
}