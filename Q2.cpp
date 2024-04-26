#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter N M : ";
    cin>>n>>m;
    int l1[n];
    int l2[m];
    cout<<"Enter your first array : ";
    for(int i=0;i<n;i++){
        cin>>l1[i];
    }
    cout<<"Enter your Second array : ";
    for(int i=0;i<m;i++){
        cin>>l2[i];
    }
    cout<<"Your arrays is : ";
    for(int i=0;i<n;i++){
        cout<<l1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<l2[i]<<" ";
    }
        int k = max(m,n);
        int y = 0;
        vector<int> v;
        for(int i=n-1,j=m-1;i>=-1;i--,j--){
            int z;
            int x = -1;
            if(j >= 0){
                x = y + l1[i] + l2[j];
            }
            if(j < 0 && i >= 0){
                x = y + l1[i];
            }
            if(x < 10 && x > 0){
                v.push_back(x);
            }
            if(i < 0){
                v.push_back(y);
            }
            else if(x > 9){
                int z = x % 10;
                int p = x / 10;
                v.push_back(z);
                y = p;
            }
        }
    int l = v.size();
    cout<<endl;
    cout<<"Your Result : "<<endl;
    for(int i=0;i<l;i++){
        cout<<v[i]<<" ";
    }
}