#include<iostream>
#include<stack>
using namespace std;
int prior(char ch){
    if(ch == '*' || ch == '/') return 2;
    else return 1;
}
string solve(string a,string b,char ch){
    string s = "";
    s += a;
    s.push_back(ch);
    s += b;
    return s;
}
int main(){
    string s = "79+4*8/3-";
    // stack
    stack<string> val;
    stack<char> op;
    // helper fill the stack

    for(int i=0;i<s.length();i++){
        if(s[i] > 47 && s[i] < 58){
            val.push(to_string(s[i] - 48));
        }

        else{
           string b = val.top();
           val.pop();
           string a = val.top();
           val.pop();
           string ans = solve(a,b,s[i]);
           val.push(ans);
        }
    }
   
    cout<<"ur ans is : "<<val.top();  
}