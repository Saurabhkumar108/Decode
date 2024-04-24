#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch == '*' || ch == '/') return 2;
    else return 1;
}
int val(int a,int b,char ch){
    switch (ch){
        case '*':
            return a * b;
        case '/':
            return a / b;
        case '+':
            return a + b;
        case '-':
            return a - b;
    }
}
int main(){
    string s = "2+16*4/8-3";
    // stack
    stack<int> value;
    stack<char> op;
    // helper fill the stack
    string str = "";
    int temp;
    bool flag = true;

    for(int i=0;i<s.length();i++){
        char m = s[i];
        if((m > 47 && m < 58) && (s[i+1] > 47 && s[i+1] < 58)) {
            str += m;
            flag = false;
        }
        else if((int)m > 47 && (int)m < 58){
            str += m;
            temp = stoi(str);
            str = "";
            value.push(temp);
            flag = true;
        }
        else{
            if(priority(m) <= priority(op.top())){
                int b = value.top();
                value.pop();
                int a = value.top();
                value.pop();
                int ans = val(a,b,op.top());
                value.push(ans);
                op.pop();
            }
            op.push(m);
            flag = true;
        }
        while(op.size() > 0 && flag == true){
            int b = value.top();
            value.pop();
            int a = value.top();
            value.pop();
            int ans = val(a,b,op.top());
            value.push(ans);
            op.pop();
        }
        cout<<"ur ans is : "<<value.top();
    }
}