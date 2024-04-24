#include<iostream>
#include<string>
#include<vector>
using namespace std;
void generate(int k,int n){
    int pre = k;
    int idx;
    k -= 2;
    n += 1;
    cout<<k<<" "<<n<<endl;
    if(n < k){
        generate(k,n);
    }
    else cout<<"denied";
    
}

int main(){
    int n = 3;
    int k = 15;
    string original = "";
    for(int i=1;i<=n;i++){
        original += to_string(i);
    }
    string ans = "";
    generate(k,n);
}