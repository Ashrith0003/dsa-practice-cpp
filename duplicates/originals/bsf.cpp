// #include<iostream>
// #include<queue>
// using namespace std;
// struct Node{
//     int data;
//     Node*left;
//     Node*right;
// public:
//     Node(int value){
//         data = value;
//         right=left=NULL;
//     }
// };

// void bsf(Node*root){
//     if(root == NULL){
//         return;
//     }
//     queue<Node*> q;
//     q.push(root);
//     while(!q.empty()){
//         Node*current = q.front();
//         q.pop();
//         cout<<current->data<<" ";

//         if(current->left != NULL){
//             q.push(current->left);
//         }

//         if(current->right !=NULL){
//             q.push(current->right);
//         }
//     }
// }
// int main(){
//     Node*root = new Node(1);
//     root->left = new Node(4);
//     root->right = new Node(3);
//     root->left->left = new Node(9);
//     root->left->right = new Node(8);
//     root->right->right = new Node(4);
//     root->right->left = new Node(9);

//     cout<<"level order traversal : ";
//     bsf(root);

// }

// #include<iostream>
// #include<queue>
// using namespace std;
// struct Node{
//     int data;
//     Node*left;
//     Node*right;

//     Node(int value){
//         data = value;
//         left = right = NULL;
//     }
// };

// void preorder(Node*root){
//     if(root == NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void inorder(Node*root){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// void postorder(Node*root){
//     if(root == NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }


// void bsf(Node*root){
//     if(root == NULL){
//         return;
//     }
//     queue<Node*> q;
//     q.push(root);
//     while(!q.empty()){
//         Node*current = q.front();
//         q.pop();
//         cout<<current->data<<" ";

//         if(current->left != NULL){
//             q.push(current->left);
//         }

//         if(current->right != NULL){
//             q.push(current->right);
//         }
//     }
//     cout<<endl;
// };

// int main(){
//     Node*root = new Node(1);
//     root ->left = new Node(2);
//     root ->right = new Node(3);
//     root ->left->left = new Node(4);
//      root ->left->right = new Node(5);
//     root ->right ->right = new Node(6);
//     root ->right ->left = new Node(7);

//     cout <<"level order traversal : " ;
//     bsf(root);

//     cout<<"inorder traversal : ";
//     inorder(root);cout<<endl;

//     cout<<"preorder traversal : ";
//     preorder(root);cout<<endl;

//     cout<<"postorder traversal : ";
//     postorder(root);cout<<endl;

//     return 0;
// }

// bsf graphs//
// #include<iostream>
// #include<queue>
// using namespace std;
// #define max 10
// class Graph{
//     int adj[max][max];
//     int v;
// public:
//     Graph(int vertcis){
//         v= vertcis;
//         for(int i =0;i<max ;i++){
//             for(int j=0;j<max;j++){
//                 adj[i][j]=0;
//             }
//         }
//   }
// // void addedge(int u,int v){  // undirected//
// //     adj[u][v]=1;
// //     adj[v][u]=1;

// // }

// // void addedge(int u,int v){  // directed graph//
// //     adj[u][v] = 1;

// // }

// // void addedge(int v,int u,int weight){  // directed weighted graphs// 
// //     adj[u][v]=weight;
// // }

// // void addedge(int v,int u,int weight){  // undirected weighted graphs//
// //     adj[u][v]=adj[v][u]=weight;
// // }

// void display(){
//     for(int i=0;i<v;i++){
//         for(int j=0;j<v;j++){
//             cout<<adj[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// };
 
// int main(){
//     Graph g(5);
//     g.addedge(0,1);
//     g.addedge(1,2);
//     g.addedge(2,3);
//     g.addedge(3,4);
//     g.display();
//     return 0;
// }

#include<iostream>
#include<queue>
using namespace std;
#define max 10
int visited[max] ={0};
class Graph{
    int adj[max][max];
    int v;
public:
    Graph(int vertics){
        v = vertics;
        for(int i=0;i<max;i++){
            for(int j=0;j<max;j++){
                adj[i][j]=0;
            }
        }
    };
    
    void addedge(int u,int w){ //directed graph;
        adj[u][w]=1;
    };

    void bsf(int s){
        queue<int> q;
        q.push(s);
        visited[s]= true;
        while(!q.empty()){
           int m = q.front();
           q.pop();
           cout<<m<<" ";

           for(int i=0;i<v;i++){
            if(adj[m][i]==1 && !visited[i]){
                q.push(i);
                visited[i]= true;
            }
           }
        };
    };
};

int main(){
    Graph g(5);
    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(2,3);
    g.addedge(3,0);
    g.bsf(0);
    return 0;
}





