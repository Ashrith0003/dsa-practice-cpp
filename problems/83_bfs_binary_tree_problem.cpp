#include<iostream>
#include<queue>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
public:
    Node(int value){
        data = value;
        right=left=NULL;
    }
};

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

        if(current->right !=NULL){
            q.push(current->right);
        }
    }
}
int main(){
    Node*root = new Node(1);
    root->left = new Node(4);
    root->right = new Node(3);
    root->left->left = new Node(9);
    root->left->right = new Node(8);
    root->right->right = new Node(4);
    root->right->left = new Node(9);

    cout<<"level order traversal : ";
    bsf(root);

}
