#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
        vector< vector<int> > v1;
        for(int i=0;i<n;i++){
            vector<int> v;
            for(int j=0;j<=i;j++){
                if(i == 0 || i == 1){
                    v.push_back(1);
                }
                else if(i > 1) {
                    if(j == 0 || j == (i)){
                        v.push_back(1);
                    }
                    else{
                        int sum = v1[i-1][j] + v1[i-1][j-1];
                        v.push_back(sum);
                    }  
                }
            }
            v1.push_back(v);
        }

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }

}