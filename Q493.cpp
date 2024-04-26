#include<iostream> //             SORT IN DECENDING ORDER
#include<vector>
#include<algorithm>
using namespace std;


// void countpair(vector<int>& a,vector<int>& b,int& count){
//     sort(a.begin(),a.end());
//     int n1 = a.size();
//     int n2 = b.size();
//     for(int j=0;j<n2;j++){
//         for(int i=0;i<n1;i++){
//             if(a[i] > 2* b[j]) {
//                 count += n1-i;
//                 break;
//             }
//         }
//     }
    
// }

void merge(vector<int>& a,vector<int>& b,vector<int>& ans){
    int i=0;int j=0;int k=0;
    int n1 = a.size();
    int n2 = b.size();
    
    while((i<a.size()) && (j<b.size())){
        if(a[i] <  b[j]) ans[k++] = a[i++];
        else ans[k++] = b[j++];
    }
    if(i == a.size()) while(j < b.size()) ans[k++] = b[j++];
    if(j == b.size()) while(i < a.size()) ans[k++] = a[i++];
}



void sort(vector<int>& v,int& k){
    int n = v.size();
    int n1 = n/2;
    int n2 = n - n/2;
    if(n == 1) return;
    vector<int> a(n1);
    vector<int> b(n2);
    int j = 0;
    for(int i=0;i<n;i++){
        if(i < n1) a[i] = v[i];
        else {
            b[j] = v[i];j++;
        }
    }
    
    sort(a,k);
    sort(b,k);
    int x = 0;
    for(int i=0;i<n2;i++){
        for(int j=x;j<n1;j++){
            if(a[j] > 2* b[i]) {
                k += n1-x;
                cout<<k<<endl;
                break;
            }
            else x++;
        }
    }


    merge(a,b,v);

}
int main(){
    int arr[] = {1,3,2,3,1,45,65,32,78,22,67,89,12,34,33,21};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n1);
    int count = 0;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v,count);  
    cout<<count;
}