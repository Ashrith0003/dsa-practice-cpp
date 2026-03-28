#include<iostream>
using namespace std;
#include<queue>
struct Node{
    int data;
    Node*left;
    Node*right;
public:
    Node(int val){
        data = val;
        left=right=NULL;
    }
};

void preorder(Node*root){
    if(root == NULL){
        return;
    }else{
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node*root){
    if(root == NULL){
        return;
    }else{
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void postorder(Node*root){
    if(root == NULL){
        return;
    }else{
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}


void levelorder(Node*root){
    if(root == NULL){
        return;
    }else{
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            Node*temp = q.front();
            q.pop();
            cout<<root->data<<" "; //ff//
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
