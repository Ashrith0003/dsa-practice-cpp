#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int data;
    Node*left;
    Node*right;

    Node(int value){
        data = value;
        left=right=NULL;
    };

int idx =-1;
Node*Binarytree(vector<int>& preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node*root =new Node(preorder[idx]);
    root->left =Binarytree(preorder);
    root->right =Binarytree(preorder);
    return root;
}
void preorderTraversal(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
};

int main(){
    vector<int>preorder={1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node*root = Binarytree(preorder);
    preorderTraversal(root);
    
}

#include<iostream>
#include<vector>
using namespace std;
class Node{
    int data;
    Node*left;
    Node*right;

    Node(int value){
        data = value;
        left=right=NULL;
    }
}