#include<iostream>
#include<queue>
// using namespace std;
// struct Node{
//     int data;
//     Node*left;
//     Node*right;
// public:
//     Node(int val){
//         data = val;
//         left = right = NULL;
//     }
// };

// void preorder(Node*root){
//     if(root== NULL){
//         return;
//     }else{
//         cout<<root->data<<" ";
//         preorder(root->left);
//         preorder(root->right);
//     }
// }


// void inorder(Node*root){
//     if(root== NULL){
//         return;
//     }else{
//         inorder(root->left);
//         cout<<root->data<<" ";
//         inorder(root->right);
//     }
// }


// void postorder(Node*root){
//     if(root== NULL){
//         return;
//     }else{
//         postorder(root->left);
//         postorder(root->right);
//         cout<<root->data<<" ";
//     }
// }

// void levelorder(Node*root){
//     if(root == NULL){
//         return;
//     }else{
//         queue<Node*> s;
//         s.push(root);
//         while(!s.empty()){
//             Node*temp = s.front();
//             s.pop();
//             cout<<temp->data<<" ";
//             if(temp->left){
//                 s.push(temp->left);
//             }
//             if(temp->right){
//                 s.push(temp->right);
//             }
//         }
        
//     }
// };

// int main(){
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     cout << "Preorder: ";
//     preorder(root);

//     cout << "\nInorder: ";
//     inorder(root);

//     cout << "\nPostorder: ";
//     postorder(root);

//     cout << "\nLevel-order: ";
//     levelorder(root);
//     return 0;
// }
