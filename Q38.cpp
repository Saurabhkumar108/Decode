#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s = "3322251";
    string s1 = "";
        char pre = s[0]; 
        int count = 0;
        for(int i=0;i<s.length();i++){
            char current = s[i];
            if(current == pre){
                if(s[i] == pre) count++;
            }
            else {
                s1 += char(count) + pre;
                pre = current;
                count = 1;
            }
        }
        s1 += char(count) + pre; 
        cout<<"ur string is: "<<s1;
}