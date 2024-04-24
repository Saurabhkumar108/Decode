#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n,target;
    bool flag = false;
    cout<<"Enter target :  ";cin>>target;
    cout<<"Enter m :  ";cin>>m;
    cout<<"Enter n :  ";cin>>n;
    vector<vector<int> >nums(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>nums[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
int total = 0;
int row;
for(int i=0;i<m;i++){
    int lo = 0;
    int hi = n-1;
    int count = 0;
    while(lo <= hi){
        int mid = (lo + hi) / 2;
        if(nums[i][mid] == target){
            if(nums[i][mid - 1] != target) {
                flag = true;
                count = n - mid;
                cout<<count<<" ";
                break;
            }
            else hi = mid - 1;
        }
        else if(nums[i][mid] > target) hi = mid - 1;
        else if(nums[i][mid] < target)lo = mid + 1;
    }
    if(count > total) {
        total = count;
        row = m;
    }
}
cout<<endl<<"Total no. of target in "<<row<<" th row is : "<<total;
    
}