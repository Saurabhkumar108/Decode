#include<iostream>
#include<vector>
using namespace std;
void hanoi(int n,char a,char b,char c){
    if(n == 0) return;
    hanoi(n-1,a,b,c);
    
}
int main(){
    int n;cout<<"enter : ";cin>>n;
    hanoi(n,1,2,3);
}