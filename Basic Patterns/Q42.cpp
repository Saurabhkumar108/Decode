//  1
//  A B
//  1 2 3
//  A B C D
//  1 2 3 4 5
//  A B C D E F
//  1 2 3 4 5 6 7



#include<iostream>//Number Spiral
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter n : ";cin>>n;
    for (i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            if(i%2!=0) cout<<" "<<(char)(j+65);
            else cout<<" "<<j+1;
        }
        cout<<endl;
    }
    
}