#include<iostream>
#include<vector>
using namespace std;
// int move(int n,int m,int lt,int dn,int count){
//     if((lt == n) && (dn == m)) return count++;
//     if(lt < m) move(n,m,lt+1,dn,count);
//     if(dn < n) move(n,m,lt,dn+1,count);

// }
int move(int lt,int dn,int count){
    if((lt < 1) || (dn < 1)) return 0;
    if((lt == 1) && (dn == 1)) return 1;
    int right = move(lt-1,dn,count);
    int left = move(lt,dn-1,count);
    return left + right;

}
int main(){
    int count = 0;

    int n;cout<<"Enter row : ";cin>>n;
    int m;cout<<"Enter col : ";cin>>m;
    cout<<move(m,n,count);
}