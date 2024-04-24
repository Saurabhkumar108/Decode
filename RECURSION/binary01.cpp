#include<iostream>
#include<vector>
using namespace std;
void binary(string s,int n,int i){
    if(i == n){
        cout<<s;
        cout<<endl;
        return;
    }
    binary(s+'0',n,i+1);
    if((s[s.length()-1]) != '1') binary(s+'1',n,i+1);
}
int main(){
    int n;cout<<"Enter n : ";cin>>n;
    string s;
    binary(s,n,0);
}