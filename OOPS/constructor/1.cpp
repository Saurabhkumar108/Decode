#include<iostream>
using namespace std;
class books{
    // this is private we can't access it
    private:
    string name;
    int price;
    int pages;



    // this is public we can access outside the class 
    public:
    //use member function to access the data members;
    void getPrice(int p){
        price = p;
    }

    void getPages(int p){
        pages = p;
    }
    // use member function to show the data members;
    int showPrice(){
        return price;
    }
    int showPages(){
        return pages;
    }
    string showname(){
        return name;
    }
     


    
    // constructor
    books(string name,int price,int pages){
        this->name = name;
        this->pages = pages;
        this->price = price;
        cout<<"call hua hai! "<<endl;
    }
    ~books(){
        cout<<"call hua hai! "<<endl;
    }
};

int main(){
    books dc("Dc pandey",220,1000); // constructor call
    books Hc("HC verma",250,750);

    dc.getPages(1000);
    cout<<dc.showname()<<" "<<dc.showPrice()<<" "<<dc.showPages()<<endl;
    cout<<Hc.showname()<<" "<<Hc.showPrice()<<" "<<Hc.showPages()<<endl;
}
 // destructor

