#include<iostream>
using namespace std;
void sum(int n,int ans){
    ans += n;
    if(n == 0) {
        cout<<ans<<" ";
        return;
    }
    sum(n-1,ans);
}
int main(){
    int n;
    int ans = 0;
    cout<<"enter n : ";cin>>n;
    sum(n,ans);
}