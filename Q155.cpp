#include<iostream>
using namespace std;
class Node{
public: 
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        next = NULL;
    }
};
class MinStack {
public:
    Node* head;
    Node* prev;
    int n;
    MinStack() {
        head = prev = NULL;
        n = 0;
    }
    
    void push(int val) {
        Node* temp = new Node(val);
        if(n == 0) head = temp;
        else{
            prev = head;
            temp->next = head;
            head = temp;
        }
        n++;
    }
    
    void pop() {
        head = prev;
        prev->next = NULL;
    }
    
    int top() {
        return head->val;
    }
    
    int size(){
        return n;
    }
    
    int getMin() {
        Node* temp = head;
        int ans = 10000;
        while(temp){
            ans = min(ans,temp->val);
            temp = temp->next;
        }
        return ans;
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
    MinStack obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.push(50);
    obj.display();
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */