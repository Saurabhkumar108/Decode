//  A
//  A B
//  A B C
//  A B C D
//  A B C D E
//  A B C D E F



#include<iostream>//Number Spiral
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter n : ";cin>>n;
    for (i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<" "<<(char)(j+64);
        }
        cout<<endl;
    }
    
}