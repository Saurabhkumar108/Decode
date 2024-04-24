#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    int min_r = 0;
    int min_c = 0;
    cout<<"Enter no. of rows matrix : "; cin>>m;
    cout<<"Enter no. of cols of matrix : ";cin>>n;
    int max_r = m-1;
    int max_c = n-1;
    vector<vector<int>> v(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<"   ";
        }
        cout<<endl;
    }
    int rstart,cstart;
    cout<<"Enter rows from where you start : ";
    cin>>rstart;
    cout<<"Enter cols from where you start : ";
    cin>>cstart;
    int pre_r = rstart;
    int pre_c = cstart;
    int nxt_r = rstart;
    int nxt_c = cstart;
    int count = 0;
    vector<int> v_1(m*n,1);
    // 1 . move right
    while((nxt_r >= 0) && (nxt_c >= 0)){
        nxt_c++;
        if(pre_r >= 0){
            for(int i=pre_c;i<nxt_c;i++){
                v_1[count] = v[rstart][i];
                count++;
            }
        }
        nxt_r++;
        //move down
        if(nxt_c <= max_c){
            for(int i=pre_r;i<nxt_r;i++){
                v_1[count] = v[i][nxt_c];
                count++;
            }
        }
        pre_r--;
        // 2. move left
        if(nxt_r <= max_r){
            for(int j=nxt_c;j>=pre_c;j--){
                v_1[count] = v[nxt_r][j];
                count++;
            }
        }
        pre_c--;
        // 3. move up
        if(pre_c >= 0){
            for(int i=nxt_r;i>pre_r;i--){
                v_1[0] = v[i][pre_c];
                count++;
            }
        }
    }
    cout<<"now obtained matrix : ";
    for(int i=0;i<n*m;i++){
            cout<<v_1[i]<<" ";
        }    

}