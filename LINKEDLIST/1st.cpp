#include<iostream>
using namespace std;
class LinkedList{
public: 
    int val;
    LinkedList* next;

    LinkedList(int val){
        this->val = val;
        next = NULL;
    }
    // void addAtHead(LinkedList* head)[
    //     head->next = 
    // ]
    
};
void display(LinkedList* head){
    LinkedList* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
int main(){
    LinkedList* a = new LinkedList(10);
    LinkedList* b = new LinkedList(20);
    LinkedList* c = new LinkedList(70);
    LinkedList* d = new LinkedList(85);
    LinkedList* e = new LinkedList(90);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);

}