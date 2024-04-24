#include<iostream>
using namespace std;
class vehicle{
public: 
    int batterySize;
    int tyresize;
    void show(){
        cout<<"vehicle call hua!";
    }
};

class bike: public vehicle{
public:

};

int main(){
    bike b;
    b.tyresize = 10;
    cout<<
}