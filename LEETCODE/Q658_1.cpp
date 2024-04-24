#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n => ";cin>>n;
    int arr[n];
    cout<<"Enter arr element => ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Ur array is => "<<" ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int target,k;
    cout<<endl<<"Enter ur target element => ";cin>>target;
    //[1.......] find the target element => ..............
    //find index => J...................
    int s = sizeof(arr) / sizeof(arr[0]);
    int lo = 0; int hi = s - 1;
    int index;
    bool flag = false;
    while(lo <= hi){
        int mid = (lo + hi) / 2;
        // condition ............
        if(arr[mid] == target){        // 1 st ............
            // 2 condition arrises ..........
            if(arr[mid] != arr[mid - 1]){
                index = mid;
                flag = true;
                cout<<"Ur index of target element is : "<<index<<endl;
                break;
            }
            else hi = mid - 1; // 2nd ...........
        }
        else if(arr[mid] < target) lo = mid + 1; //     2nd condition ...............
        else hi = mid - 1;         //          last condition .............
    }
    // if target is not in the array .............
    int lb,ub;
    if(flag == false) {
        cout<<"Ur target element is not in array ...."<<endl;
        cout<<"Target is btw "<<lo - 1<<" "<<lo<<endl;
        if(target - arr[lo - 1] <= target - arr[lo - 1]){
            lb = lo - 1;
            ub = lo;
        }
        else {
            lb = lo;
            ub = lo + 1;
        }
    }
    cout<<"Enter no. of elements to find => ";cin>>k;
    if(flag == true){
        int lb = index; int ub = index + 1;
    }

    // [2.........] find the closest element...........
    int v[k];
    int j = 0;
    while((j < k) && (flag == true)){
        if((lb < 0) && (ub > (s-1))) {   // 3rd ...................6 5 8 32 6421816 12
            break;
            cout<<"No  more element present in arr...."<<"Enter k <= s";
        }
        else if(lb < 0) { //       1st .............3 5 6 8 9 12 13
            v[j] = arr[ub];
            ub++;
            j++;
        }
        else if(ub > (s - 1)){  //     2nd ...............
            v[j] = arr[lb];
            lb--;
            j++;
        }
        
        else if((arr[index] - arr[lb]) <= (arr[ub] - arr[index])){   // 4th ...........
            v[j] = arr[lb];
            lb--;j++;
        }
        else if((arr[index] - arr[lb]) >= (arr[ub] - arr[index])){   // 5th .............
            v[j] = arr[ub];
            ub++;j++;
        }
    }
    cout<<"Ur final array......... => "; 
    for(int i=0;i<k;i++){
        cout<<v[i]<<" ";
    }
    
}