#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows/cols of matrix : "; cin>>n;
    vector<vector<int>> v(n,vector<int>(n));
        int minc = 0,minr = 0;
        int maxc = n-1,maxr = n-1;
        int count = 0;
        int total = n*n;
        //right
        int x = count;
        while((minc <= maxc) && (minr <= maxr)){
            for(int i=minc;i<=maxc;i++){
                x++;
                v[minr][i] = x;
            }
            minr++;
            if(x == total) break;
            //down
            for(int j=minr;j<=maxr;j++){
                x++;
                v[j][maxc] = x;

            }   
            maxc--;
            if(x == total) break;
            //left
            for(int i=maxc;i>=minc;i--){
                x++;
                v[maxr][i] = x;
            }
            maxr--;
            if(x == total) break;
            //up
            for(int j=maxr;j>=minr;j--){
                x++;
                v[j][minc] = x;
            }
            minc++;
            if(x == total) break;
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<"   ";
        }
        cout<<endl;
    }
}