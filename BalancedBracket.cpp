#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str = "((()())())";
    stack<char> st;
    int n = str.size();
    bool flag = false;
    for(int i=0;i<n;i++){
        if(str[i] == '('){
            st.push('(');
        }
        else {
            if(st.size() == 0){
                cout<<"false";
                flag = true;
                break;
            }
            else st.pop();
        }
    }
    if(st.size() == 0 && flag == false) cout<<"true";
    else if(flag == false) cout<<"false";
}