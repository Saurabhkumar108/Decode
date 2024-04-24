#include<iostream>
#include<string>
#include<vector>
using namespace std;
void permutation(string s,string ans){
    if(s == ""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        string left = s.substr(0,i);
        string right = s.substr(i+1);
        permutation(right+left,ans+ch);

    }
}
int main(){
    string s = "123";
    permutation(s,"");
}