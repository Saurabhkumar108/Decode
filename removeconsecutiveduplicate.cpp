#include<iostream>
#include<stack>
using namespace std;
// int main(){
//     string s = "aaabbcddddfggh";
//     string ans = "";
//     stack<char> st;
//     for(int i=0;i<s.length();i++){
//         if(st.size() == 0) {
//             st.push(s[i]);
//             ans += s[i];
//         }
//         else if(st.top() != s[i]){
//             st.push(s[i]);
//             ans += s[i];
//         }
//     }
//     cout<<ans;

// }


// method - 2
int main(){
    string s = "aaabbcddddfggh";
    string ans = "";
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(st.size() == 0) {
            st.push(s[i]);
            ans += s[i];
        }
        else if(st.top() != s[i]){
            st.push(s[i]);
            ans += s[i];
        }
    }
    cout<<ans;

}