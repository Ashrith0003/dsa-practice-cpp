#include<isotream>
using namespace std;
class Node{
    int data;
    Node*right;
    Node*left;

    Node(int data){
        this->data = data;
        right = NULL;
        left = NULL;
    }
};

// Node*BinaryToLink(Node*root){
//     Node*current = root;
//     Node*prev;
//     while(current){
//         if(current->left){
//             prev = current->left;

//         while(prev->right){
//             prev = prev->right;
//         }
//         prev->right = current->right;
//         current->right = current->left;
//         current->left = NULL;
    
//         }
//         current = current->right;
//     }

// }




Node*BinaryToList(Node*root){
    Node*current = root;
    while(current){
        if(current->left){
            Node*prev = current->left;
        

        while(current->right){
            prev = current->right;
        }
        prev->right = current->right;
        current->left = current->right;
        current->left = NULL;
    }
    current = current->right;

    }
}