#include<iostream>
using namespace std;
class Node{
public:
    int value;
    Node* next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtend(int value){
        Node* temp = new Node(value);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAthead(int value){
        Node* temp = new Node(value);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insert(int value,int idx){
        if(idx < 0 || idx > size) cout<<"Invalid position"<<endl;
        else if(idx == 0) insertAthead(value);
        else if(idx == size) insertAtend(value);
        else{
            int count = 0;
            Node* temp = head;
            Node* add = new Node(value);
            while(count != idx-1){
                count++;
                temp = temp->next;
            }
            add->next = temp->next;
            temp->next = add;
            size++;
        }
    }
    void display(){
        Node* temp = head;
        while(temp != NULL) {
            cout<<temp->value<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    // ll.insertAtend(50);
    // ll.insertAtend(20);
    ll.insertAthead(40);
    ll.insertAthead(50);
    ll.insertAthead(60);
    ll.insert(10,1);
    ll.insertAtend(34);
    ll.insertAtend(44);
    ll.insertAtend(48);
    ll.insert(67,4);
    ll.insert(41,8);
    ll.insert(4,0);
    ll.insert(41,11);
    ll.display();
}