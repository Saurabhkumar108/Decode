#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int x): val(x), next(NULL){}
};
class Queue{
public:
    Node* head;
    Node* tail;
    int s;
    Queue(){
        head = tail = NULL;
        s = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        if(s == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        s++;
    }
    void pop(){
        if(s == 0) {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete(temp);
        s--;
    }
    int front(){
        if(s == 0) {
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(s == 0) {
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return tail->val;
    }
    int size(){
        return s;
    }
    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.front()<<endl;
    q.display();
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    q.pop();
    q.display();
    cout<<q.front()<<endl;
}