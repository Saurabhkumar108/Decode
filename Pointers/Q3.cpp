
#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter the no : ";
    cin>>x>>y;
    int *a = &x, *b = &y;
    int c = (*a) * (*b);
    cout<<c;
}