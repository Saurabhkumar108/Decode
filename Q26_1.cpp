#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {10,20,30,10,60,70,40,10,10,20,30,40,50,60,20,40,50};
    sort(v.begin(),v.end());//10 10 10 10 20 20 20 30 30 40 40 40 50 50 60 60 70 
    for(int i=0;i<v.size();i++){// 10 10 20 20 30 40 40 50 50 60 60 70 
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int x = v[0]; 
    for(int i=1,k=1;i<v.size();i++){
        if(v[k] == x){
            x = v[i];
            v.erase(v.begin()+k);
        }
        else {
            x = v[i];
            k++;
        }
        for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
        cout<<endl;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}