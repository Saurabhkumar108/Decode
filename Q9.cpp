#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;cout<<"Enter x : ";cin>>x;
    vector<int> arr;
        int n = 0;
        bool flag = true;
        while(x > 0 ){
            arr.push_back(x%10);
            x = x/10;
            n++;
        }
        int i = 0;
        int j = n-1;
        while(i <= j){
            if(arr[i] == arr[j]){
                i++;j--;
            }
            else {
                flag = false;
                cout<<"false";
                break;
            }
        }
        if(flag == true) cout<<"true";
}