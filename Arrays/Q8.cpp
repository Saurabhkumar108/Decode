#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> height = {2,7,5,4,6,2,1,5,4};
    int x,y,z,n;
    n = 9;
    int count = 0;
    int num = 0;
    for(int j=0;j<n;j++,z--){
            if((height[j] > 0)) 
                x = j;
                break;
    }

    for(int j=z;j>=0;j--){
            if((height[z] > 0)) 
                y = j;
                break;
    }
    for(int i=x;i<=y;i++){
        if(height[i] == 0) count++;
    } 


    cout<<count;
    
}