#include<iostream>
using namespace std;

class Node{
    int data;
    Node*right;
    Node*left;

    Node(int val){
        data = val;
        left = right = NULL;
    }

Node*insert(Node*root,int val){
    if(root == NULL){
        retrun new Node(val);
    }

    if(val < root->root){
        root->left = intsert(root->left,val);
    }else{
        root->right = inset(root->right, val);
    }
    return root;
}

Node*inorder(Node*root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
};