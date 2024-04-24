#include<iostream>
#include<vector>
using namespace std;
void common(string st,string ct,string ans,int n){
    if((st.size() == 0) || (ct.size() == 0)) {
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        return;
    }
    if(st[n] == ct[n]) ans += st[n];
    common(st.substr(n),ct.substr(n),ans,n+1);
}
int main(){
    string st = "saurabhfghf";
    string ct = "gauravfghj";
    common(st,ct,"",0);
}