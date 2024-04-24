#include<iostream>
#include<stack>
using namespace std;
string solve(string a,string b,char ch){
    string s = "";
    s += a;
    s += b;
    s.push_back(ch);
    return s;
}
int main(){
    string s = "-/*+79483";
    // stack
    stack<string> val;
    // helper fill the stack

    for(int i=s.length()-1;i>=0;i--){
        if(s[i] > 47 && s[i] < 58){
            val.push(to_string(s[i] - 48));
        }

        else{
           string a = val.top();
           val.pop();
           string b = val.top();
           val.pop();
           string ans = solve(a,b,s[i]);
           val.push(ans);
        }
    }
   
    cout<<"ur ans is : "<<val.top();  
}