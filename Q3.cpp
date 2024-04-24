#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;cout<<"Enter Size Of String : ";cin>>n;
    string s;
    for(int i=0;i<n;i++){
        char c;cin>>c;s += c;
    }
    cout<<"Your String Is: ";
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    // find longest substring 
    int len = 0;
    string b = ""; // sub string
    for(int i=0;i<n;i++){
        bool flag = false;
        char ch = s[i];
        if(b.size() == 0) b += ch;
        else{
            for(int j=b.size()-1;j>=0;j--){
                if((b[j] == ch) && (i > 0)) {
                    flag = true;
                    break;
                }
            }
            if(flag == true){
                b = "";
                b += ch;
            }
            else b += ch;
        }
        if(b.size() > len) len = b.size();
    }
    
    cout<<endl<<"Length Of Longest Substring Is: "<<len;
}