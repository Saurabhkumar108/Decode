#include<iostream>
using namespace std;
void count(int x){
    int j = 0;
    while(x!=0){
        x /= 10;
        j++;
    }
    cout<<j<<endl;
    return;
}

void square(int y){
    cout<<y*y<<endl;
}

void squared(int z){
    int i,j=0;
    while(z!=0){
        i = z%10;
        z /= 10;
        cout<<i*i<<" ";
    }

}

int main(){
    int n;
    cout<<"Enter Digit : ";cin>>n;
    count(n);
    square(n);
    squared(n);
}