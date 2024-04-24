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

    // [2.........] find the closest element...........
    cout<<"Enter no. of elements to find => ";cin>>k;
    int v[k];
    int j = 0;

    // if target is not in the array .............
    int lb,ub;
    if(flag == false) {                        // 1st cond ............
        cout<<"Ur target element is not in array ...."<<endl;
        cout<<"Target is btw "<<hi<<" "<<hi + 1<<endl;
        if((target - arr[hi]) <= (arr[hi + 1] - target)){
            lb = hi;
            ub = hi + 1;
        }
        else if((target - arr[hi]) >= (arr[hi + 1] - target)){
            lb = hi + 1;
            ub = hi + 2;
        }
    }
    if(flag == true){                            // 2ns co ...................
        lb = index; ub = index + 1;
    }

    while(j < k){
        if((lb < 0) && (ub > (s-1))) {   // 3rd ...................
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
        
        else if((target - arr[lb]) <= (arr[ub] - target)){   // 4th ...........
            v[j] = arr[lb];
            lb--;j++;
        }
        else if((target - arr[lb]) >= (arr[ub] - target)){   // 5th .............
            v[j] = arr[ub];
            ub++;j++;
        }
    }

    cout<<"Ur final array......... => "; 
    for(int i=0;i<k;i++){
        cout<<v[i]<<" ";
    }
}