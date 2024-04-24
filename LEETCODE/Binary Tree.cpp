#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int x) : val(x),next(NULL){}
};
class TreeNode{
public: 
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0),left(NULL),right(NULL){}
    TreeNode(int x) : val(x),left(NULL),right(NULL){}
    TreeNode(int x,TreeNode* left,TreeNode* right) : val(0),left(left),right(left){}
}
void build(int arr[]){
    queue<int> q;
    for(int i=0;i<n;i++) q.push(arr[i]);
    q.push(root);
    while(q.size() > 0){
        TreeNode* temp = 
    } 
}
int main(){
    int arr = {};
    TreeNode* root = new TreeNode(arr[0]);
    build(arr,root);
}