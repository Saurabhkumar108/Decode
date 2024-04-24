#include<iostream>
#include<vector>
using namespace std;
int count = 0;
string path(vector<int>& destination,int row,int col,string s,int k){
    string ans = "";
    if ((row > destination[0]) || (col > destination[1])) return "";
    if((row == destination[0]) && (col == destination[1])){
        if(count == k) cout<<s;
        return "";
    }
    path(destination,row+1,col,s+" "+'H',k);
    path(destination,row,col+1,s+" "+'V',k);
    return ans;
}
int main(){
    vector<int> destination = {3,3};
    int k = 4;
    cout<<path(destination,0,0,"",k);
}