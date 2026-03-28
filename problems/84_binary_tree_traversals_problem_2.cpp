#include<iostream>
#include<queue>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;

    Node(int value){
        data = value;
        left = right = NULL;
    }
};

void preorder(Node*root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node*root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node*root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


void bsf(Node*root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node*current = q.front();
        q.pop();
        cout<<current->data<<" ";

        if(current->left != NULL){
            q.push(current->left);
        }

        if(current->right != NULL){
            q.push(current->right);
        }
    }
    cout<<endl;
};

int main(){
    Node*root = new Node(1);
    root ->left = new Node(2);
    root ->right = new Node(3);
    root ->left->left = new Node(4);
     root ->left->right = new Node(5);
    root ->right ->right = new Node(6);
    root ->right ->left = new Node(7);

    cout <<"level order traversal : " ;
    bsf(root);

    cout<<"inorder traversal : ";
    inorder(root);cout<<endl;

    cout<<"preorder traversal : ";
    preorder(root);cout<<endl;

    cout<<"postorder traversal : ";
    postorder(root);cout<<endl;

    return 0;
}
