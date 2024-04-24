#include<iostream>
#include<queue>
using namespace std;
class Node(){
public:
    int val;
    Node* left;
    Node* right;
    Node(int x): val(x),left(NULL),right(NULL){}
};
int main(){
    queue<Node*> q;
    int arr[] = {};
    int n = sizeof(arr)/sizeof(arr[0]);
    q.push(arr[0]);
    int i = 1,j = 2;
    while(i < n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i] != NULL)  l = new Node(arr[i]);
        else l = NULL;
        if(arr[i+1] != NULL) r = new Node(arr[i+1]);
        else l = NULL;
        temp->left = l;
        temp->right = r;
        if(l != NULL) q.push(l);
        if(r != NULL) q.push(r);
        i += 2;
        j += 2;
    }
}