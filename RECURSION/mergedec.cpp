#include<iostream> //             SORT IN DECENDING ORDER
#include<vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& v){
    int i=0;int j=0;int k=0;
    while((i<a.size()) && (j<b.size())){
        if(a[i] > b[j]) v[k++] = a[i++];
        else v[k++] = b[j++];
    }
    if(i == a.size()) while(j < b.size()) v[k++] = b[j++];
    if(j == b.size()) while(i < a.size()) v[k++] = a[i++];
    
}
 


void sort(vector<int>& v){
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
    
    sort(a);
    sort(b);
    merge(a,b,v);

}
int main(){
    int arr[] = {3,9,11,17,19,7,0,1,4,6,4,5,23,12,67};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v);  
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}