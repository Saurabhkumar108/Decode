#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int>& height) {
        
    }



int main(){
    vector<int> height = {2,7,5,4,6,2,1,5,4};
    int count = 0;
        int n = 9;
        int number = 0;
        while(number < 9){
            for(int i=0;i<n;i++){
            if(height[i] = 0) count++;
        }
        if(count != 0){
            for(int i=0;i<n;i++){
                //check the positions of zeros and count it
                int z = n-1;
                int x = 0,y = 0;
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

                for(int j=x;j<=y;j++){
                    number++;
                }
                for(int j=0;j<n;j++){
                    height[j]--;
                }
            }
        }
        }
        cout<<number;
    
}