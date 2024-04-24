#include<iostream>
#include<vector>
using namespace std;
void printsubset(string s,string str,bool flag){
    char ch = str[0];
    char dh = str[1];
    if(str == "") {
        cout<<s<<endl;
        return;
    }
    else if(str.length() == 1){
        if(flag == true) printsubset(s+ch,str.substr(1),true);
        printsubset(s,str.substr(1),true);
        return;
    }
    else if(ch == dh){
        if(flag == true) printsubset(s+ch,str.substr(1),true);
        printsubset(s,str.substr(1),false);
    }
    else{
        if(flag == true) printsubset(s+ch,str.substr(1),true);
        printsubset(s,str.substr(1),true);
    }
}
int main(){
    string str = "abc";
    string s = "";
    printsubset(s,str,true);
}