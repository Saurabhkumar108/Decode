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
    s += b;
    s.push_back(ch);
    return s;
}
int main(){
    string s = "(7+9)*4/8-3";
    // stack
    stack<string> val;
    stack<char> op;
    // helper fill the stack

    for(int i=0;i<s.length();i++){
        if(s[i] > 47 && s[i] < 58){
            val.push(to_string(s[i] - 48));
        }

        else{
            if(op.size() == 0) op.push(s[i]);
            else if(s[i] == '(') op.push(s[i]);
            else if(op.top() == '(') op.push(s[i]);
            else if(s[i] == ')'){
                while(op.top() != '('){
                    char ch = op.top();
                    op.pop();
                    string b = val.top();
                    val.pop();
                    string a = val.top();
                    val.pop();
                    string ans = solve(a,b,ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if(prior(s[i]) > prior(op.top())) op.push(s[i]);
            else {
                while(op.size() > 0 && prior(op.top()) >= prior(s[i])){
                    char ch = op.top();
                    op.pop();
                    string b = val.top();
                    val.pop();
                    string a = val.top();
                    val.pop();
                    string ans = solve(a,b,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size() > 0){
        char ch = op.top();
        op.pop();
        string b = val.top();
        val.pop();
        string a = val.top();
        val.pop();
        string ans = solve(a,b,ch);
        val.push(ans);
    }
    cout<<"ur ans is : "<<val.top();  
}