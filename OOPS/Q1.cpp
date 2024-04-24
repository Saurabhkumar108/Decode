#include<iostream>
using namespace std;
class books{
    // this is private we can't access it
    private:
    char name[20];
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
    // count the no. of books that is less than that price 
    int countBooks(int p){
        if(price < p) return 1;
        else return 0;
    }
    // return boolean that book is present or not
    bool isBookPresent(string names){
        if(name == names) return true;
        else return false;
    }
};

int main(){
    books dc;
    dc.getPrice(550);
    dc.getPages(1000);
    cout<<dc.showPrice()<<endl;
    cout<<dc.showPages();
}