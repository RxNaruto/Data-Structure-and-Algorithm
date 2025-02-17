#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
void InorderTraversal(struct Node* root){
    if(root==nullptr){
        return;
    }
    
    InorderTraversal(root->left);
    cout<<root->data<<" ";
    InorderTraversal(root->right);
}
int main()
{
    struct Node* root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    InorderTraversal(root);

 return 0;
}