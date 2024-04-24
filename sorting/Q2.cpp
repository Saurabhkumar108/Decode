#include<iostream>
#include<vector>
using namespace std;
int main(){
    int v[] = {1,6,2,5,4,3,8,7,9,1,0,4,3,1,11,2,1,2,32,45,23,56,68};
    int n = 23;
    for(int i=0;i<n-1;i++){
        int count = 0;
        for(int j=0;j<n-1-i;j++){
            if(v[j] > v[j+1]) {
                count++;
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
            else continue;
        }
        if(count == 0) break;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}