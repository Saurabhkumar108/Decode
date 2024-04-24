#include<iostream>
#include<vector>
using namespace std;
string sstring(string str,int i,int n){
    string left = "";
    string right = "";
    if(i == 0){
        for(int j=1;j<n;j++){
            right += str[i];
        }
        return right;
    }
    if(i == n-1){
        for(int j=0;j<n-1;j++){
            left += str[i];
        }
        return left;
    }
    for(int j=0;j<n;j++){
        if(j == i) continue;
        else if(j < i){
            left += str[j];
        }
        else{
            right += str[j];
        }
        return left + right;
    }
}
void permutation(string s,string str){
    if(str == ""){
        cout<<s<<endl;
        return;
    }
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        string left = str.substr(0,i);
        string right = str.substr(i+1);
        permutation(s+ch,left + right);
    }
}
int main(){
    string str = "123";
    permutation("",str);
}