#include<iostream>
using namespace std;
void swap(int a,int b){
 int temp = a;
 a = b;
 b = temp;
 cout<<"Values of a and b respectively after swap : "<<a<<" "<<b<<endl;
 return;

}
int main(){
 int a = 6 , b = 8;
 cout<<"Values of a and b respectively before swap : "<<a<<" "<<b<<endl;
 swap(a,b);
}