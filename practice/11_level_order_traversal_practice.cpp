#include<iostream>
#include<queue>
using namespace std;
struct Node{
    int data;
    Node*right;
    Node*left;
public:
    Node(int value){
        data = value;
        right=left=NULL;
    }
};

void levelorder(Node*root){
    if(root == NULL){
        cout<<"array is empty";
        return;
    }else{
        queue<Node*> s;
        s.push(root);
        while(!s.empty()){
            Node*temp = s.front();
            cout<<temp<<" ";
            s.pop();

            if(temp->left){
                s.push(temp->left);
            }
            if(temp->right){
                s.push(temp->right);
            }
        }

    }
}
