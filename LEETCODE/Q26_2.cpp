#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {10,10,10,10, 20, 20, 20, 30, 30, 40, 40, 40, 50, 50, 60, 60, 70};
    sort(v.begin(),v.end());
    vector<int> v1;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int x = v[0]; 
    v1.push_back(v[0]);
    for(int i=1;i<v.size();i++){
        if(v[i] != x){
            x = v[i];
            v1.push_back(v[i]);
        }
        else{
            x = v[i];
        }
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}