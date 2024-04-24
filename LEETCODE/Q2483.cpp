#include<iostream>
#include<vector>
using namespace std;
int main(){
        string customers = "NNNNN";
        int n = customers.length()+1;
        vector<int> v(n,0);
        int ys = 0,no = 0;
        for(int i=0;i<n-1;i++){
            if(customers[i] == 'Y') ys++;
            else no++;
        }
        // compute suffix sum of 'YES'
        cout<<"no. of YES "<<ys<<endl;
        cout<<"no. of NO "<<no<<endl;
        for(int i=0;i<n;i++){
            if(i == 0) v[i] += ys;
            else if(customers[i-1] == 'Y') v[i] += --ys;
            else v[i] += ys;
        }
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
        // compute prefix sum of 'NO'
        for(int i=n;i>=0;i--){
            if(i == n) v[i] += no;
            else if(customers[i] == 'N') v[i] += --no;
            else v[i] += no;
        }
        for(int i=0;i<n;i++) cout<<v[i]<<" ";

}