#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"Enter Your Character : ";
    cin>>ch;
    if (((int)ch >= 65) && ((int)ch <= 91)){
       cout<<"Alphabet";
    }
    else if (((int)ch >= 97)  && ((int)ch <= 122) ) cout<<"Alphabet";
    else if (((int)ch >= 48) && ((int)ch <= 57)) cout<<"Integer ";
    else cout<<"Special Character";
}