#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    int n,x;
    cout<<"Enter n: ";cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        arr.push_back(x);
    }
        cout<<"arr is : ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int y = 0;

    for(int i=0;i<arr.size();i++){
        int first = arr[y];
        for(int j=i;j<arr.size();j++){
        if((first + arr[j] == 7) && (j != y)){
            cout<<i<<" "<<j<<endl;
        }
        }
        y++;
    }
}