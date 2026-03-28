#include<iostream>
using namespace std;

void preorder(Node*root){
    if(root == NULL){
        return;
    }else{
        cout<< root->data<<" ";
        preorder(root->left);
        perorder(root->right);
    }
};

void postorder(Node*root){
    if(root == NULL){
        return;
    }else{
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
};

void inorder(Node*root){
    if(root == NULL){
        return;
    }else{
        inorder(root-> left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
};

void levelorder(Node*root){
    if(root == NULL){
        return;
    }else{
        queue s;
        s.push(root);
        cout<<s.front();
        s.pop();
    }
}
