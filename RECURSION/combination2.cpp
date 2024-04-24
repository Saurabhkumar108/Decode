#include<iostream>
#include<vector>
#include<string>
using namespace std;
void combination(string s,int op,int cl,int n){
    if(cl == n){
        cout<<s<<endl;
        return;
    }
    if(op < n) combination(s+'(',op+1,cl,n);
    if(cl < op) combination(s+')',op,cl+1,n);
    
}
int main(){
    int n = 3;
    combination("",0,0,n);
}