#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
class Node{
public: 
    int val;
    Node* left;
    Node* right;
    Node(): val(0),left(NULL),right(NULL){}
    Node(int x): val(x),left(NULL),right(NULL){}
    Node(int x,Node* left,Node* right): val(x),left(left),right(right){}
};
Node* construct(int arr[],int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1, j = 2;
    while(q.size() > 0 && j != n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i] != INT8_MIN) l = new Node(arr[i]);
        else l = NULL;
        if(j != n && arr[j] != INT8_MIN) r = new Node(arr[j]);
        else r = NULL;
        temp->left = l;
        temp->right = r;
        if(l != NULL) q.push(l);
        if(r != NULL) q.push(r);
        i += 2;
        j += 2;
    }
    return root;
}
int main(){
    int nll = -1; // represent null in array
    int arr[] = {9,28,17,6,65,43,39,21,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,n)

}