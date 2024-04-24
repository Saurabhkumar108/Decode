#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";cin>>n;
    int sum = 0;
    for(int i=1;i<n;i++){
        sum += i;
        if(sum > n) {
            cout<<i-1;
            break;
        }
    }
}   