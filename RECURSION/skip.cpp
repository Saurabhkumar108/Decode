#include<iostream>
#include<vector>
using namespace std;
void skip(string str,string s,int i,int n){
    if(i == n) {
        cout<<s;
        return;
    }
    if(str[i] != 'a'){
        s += str[i];
    }
    skip(str,s,i+1,n);
}
int main(){
    string str = "saurabh kumar";
    int n = str.length();
    int i = 0;
    string s = "";
    skip(str,s,i,n);
}