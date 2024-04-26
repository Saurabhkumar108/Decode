#include<iostream>
#include<string>
#include<vector>
using namespace std;
int factorial(int x){
    if(x == 1 || x == 0) return 1;
    return x*factorial(x-1);
}

void generate(string original,string ans,int k,int n){
    if(original.size() == 0) {
        cout<<"hello 😊"<<" "<<ans;
        return;
    }
    int idx;
    int x = factorial(n-1);
    if(k%x == 0) {
        idx = k/x - 1;
        k = x;
    }
    else if(k%x != 0) {
        idx = k/x;
        k = k % x;
    }
    ans += original[idx];
    string left = original.substr(0,idx);
    string right = original.substr(idx+1);
    generate(left+right,ans,k,n-1);
}

int main(){
    int n = 4;
    int k = 9;
    string original = "";
    for(int i=1;i<=n;i++){
        original += to_string(i);
    }
    string ans = "";
    generate(original,ans,k,n);
}

// void permutation(string s,int k,string ans){
//     if(s == ""){
//         if(1){
//             cout<<ans<<endl;
//             return;
//         }
//     }
//     for(int i=0;i<s.size();i++){
//         char ch = s[i];
//         string left = s.substr(0,i);
//         string right = s.substr(i+1);
//         permutation(right+left,k,ans+ch);
//     }
// }







// int main(){
//     int n = 5;
//     int k = 8;
//     string s = "";
//     for(int i=1;i<=n;i++){
//         s += to_string(i);
//     }
//     string ans = "";
//     permutation(s,k,ans);
// }