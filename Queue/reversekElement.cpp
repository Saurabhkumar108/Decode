#include<iostream>
#include<queue>
#include<stack>
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
    int c;
    Queue(){
        head = tail = NULL;
        s = 0;
        c = 0;
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
    q.push(60);
    q.push(70);
    q.push(80);
    cout<<q.front()<<endl;
    q.display();
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    int k = 7;
        int n = q.size();
        stack<int> st;
        for(int i=0;i<k;i++){
            int x = q.front();
            st.push(x);
            q.pop();
        }
        while(st.size() > 0){
            q.push(st.top());
            st.pop();
        }
        for(int i=k;i<n;i++){
            int x = q.front();
            q.pop();
            q.push(x);
        }
    q.display();
}