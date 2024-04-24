#include<iostream>
#include<stack>
using namespace std;
int solve(int a,int b,char ch){
    if(ch == '+') return a+b;
    else if(ch == '*') return a*b;
    else if(ch == '-') return a-b;
    else return a/b;
}
int main(){
    string s = "-/*+79483";
    // stack
    stack<int> val;
    // helper fill the stack

    for(int i=s.length()-1;i>=0;i--){
        if(s[i] > 47 && s[i] < 58){
            val.push(s[i] - 48);
        }

        else{
           int a = val.top();
           val.pop();
           int b = val.top();
           val.pop();
           int ans = solve(a,b,s[i]);
           val.push(ans);
        }
    }
   
    cout<<"ur ans is : "<<val.top();  
}