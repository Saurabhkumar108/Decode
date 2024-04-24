#include<iostream>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x) , left(NULL) , right (NULL){}
};
void display(TreeNode* root,int level){
    if(root == NULL) return;
    if(level == 3) cout<<root->val<<" ";
    display(root->left,level+1);
    display(root->right,level+1);
}
void display(TreeNode* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int product(TreeNode* root){
    if(root == NULL) return 1;
    return (root->val) * product(root->left) * product(root->right);
}
int noOflevel(TreeNode* root){
    if(root == NULL) return 0;
    return 1 + max(noOflevel(root->left), noOflevel(root->right));
}
int main(){
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7);
    TreeNode* h = new TreeNode(2);
    TreeNode* i = new TreeNode(2);
    TreeNode* j = new TreeNode(4);

    // make tree
    a->left = b;
    a->right = c;
    b->left = d;
    d->left = e;
    c->left = f;
    c->right = g;
    f->left = h;
    f->right = i;
    g->left = j;

    display(a);
    cout<<endl;
    display(a,1);
    cout<<endl;
    cout<<product(a)<<endl;
    cout<<noOflevel(a);

}