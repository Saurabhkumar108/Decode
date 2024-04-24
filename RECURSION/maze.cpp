#include<iostream>
using namespace std;
// int maze(int sr,int sc){
//     if(sr <= 0 || sc <= 0) return 0;
//     if(sc == 1 || sr == 1) return 1;
//     int rightways = maze(sr-1,sc);
//     int downways = maze(sr,sc-1);
//     int totalways = rightways + downways;
//     return totalways;
// }
void printpath(int row,int col,string s){
    if(row < 1 || col < 1) return;
    if(col == 1 && row == 1){
        cout<<s<<endl;
        return;
    }
    printpath(row-1,col,s+'D');
    printpath(row,col-1,s+'R');
}
int main(){
    int row,col;
    cout<<"Enter ur row and col : ";cin>>row>>col;
    string s = "";
    // cout<<maze(row,col)<<endl;
    printpath(row,col,"");
}