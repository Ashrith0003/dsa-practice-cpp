
// #include <iostream>
// using namespace std;
// int fib(int n) {
//     if (n == 0) return 0;  
//     if (n == 1) return 1;      
//     return fib(n - 1) + fib(n - 2); 
// }

// int main() {
//     int N;
//     cout << "Enter number of terms: ";
//     cin >> N;

//     cout << "Fibonacci Series up to " << N << " terms:  " ;

//     for (int i = 0; i < N; i++) {
//         cout << fib(i) << " ";
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// long long factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;   
//     }
//     return n * factorial(n - 1);
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n < 0) {
//         cout << "Factorial of negative numbers does not exist.";
//         return 0;
//     }

//     cout << "Factorial of " << n << " is: " << factorial(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Queue {
//     int front, rear;
//     int arr[100];
//     int max_element;

// public:
//     Queue(int size = 100) {
//         front = -1;
//         rear = -1;
//         max_element = size;
//     }

//     void enqueue(int value) {
//         if (rear >= max_element - 1) {
//             cout << "Queue is full, cannot enqueue." << endl;
//         } else {
//             if (front == -1) front = 0; 
//             arr[++rear] = value;
//             cout << "Enqueued element: " << value << endl;
//         }
//     }

//     void dequeue() {
//         if (front == -1 || front > rear) {
//             cout << "Queue is empty, cannot dequeue." << endl;
//         } else {
//             cout << "Dequeued element: " << arr[front] << endl;
//             front++;
//         }
//     }

//     void peek() {
//         if (front == -1 || front > rear) {
//             cout << "Queue is empty." << endl;
//         } else {
//             cout << "Front element: " << arr[front] << endl;
//         }
//     }

//     bool empty() {
//         return (front == -1 || front > rear);
//     }

//     void display() {
//         if (empty()) {
//             cout << "Queue is empty." << endl;
//         } else {
//             cout << "Queue elements: ";
//             for (int i = front; i <= rear; i++) {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Queue q(5);

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);

//     q.peek();

//     q.dequeue();
//     q.peek();

//     if (q.empty()) {
//         cout << "Queue is empty" << endl;
//     } else {
//         cout << "Queue is not empty" << endl;
//     }

//     q.display();

//     return 0;
// }



// #include<iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;

//     Node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// void insertAtStart(Node*& head, int value) {
//     Node* newnode = new Node(value);
//     newnode->next = head;
//     head = newnode;
// }

// void insertAtEnd(Node*& head, int value) {
//     Node* newnode = new Node(value);
//     if (head == NULL) {
//         head = newnode;
//         return;
//     }
//     Node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = newnode;
// }

// void insertAtMiddle(Node*& head, int value, int position) {
//     Node* newnode = new Node(value);

//     if (position == 1) {
//         newnode->next = head;
//         head = newnode;
//         return;
//     }

//     Node* temp = head;
//     int count = 1;

//     while (temp != NULL && count < position - 1) {
//         temp = temp->next;
//         count++;
//     }

//     if (temp == NULL) {
//         return;
//     }

//     newnode->next = temp->next;
//     temp->next = newnode;
// }

// void display(Node* head) {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     Node* head = NULL;

//     insertAtStart(head, 10);
//     insertAtEnd(head, 30);
//     insertAtMiddle(head, 20, 2);
//     insertAtEnd(head, 40);
//     insertAtStart(head, 5);

//     display(head);

//     return 0;
// }



// #include<iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
//     Node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// void insertAtEnd(Node*& head, int value) {
//     Node* newnode = new Node(value);
//     if (head == NULL) {
//         head = newnode;
//         return;
//     }
//     Node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = newnode;
// }

// void deleteByValue(Node*& head, int value) {
//     if (head == NULL) return;

//     if (head->data == value) {
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != NULL && temp->next->data != value) {
//         temp = temp->next;
//     }

//     if (temp->next == NULL) return;

//     Node* delnode = temp->next;
//     temp->next = temp->next->next;
//     delete delnode;
// }

// void deleteByPosition(Node*& head, int position) {
//     if (head == NULL || position <= 0) return;

//     if (position == 1) {
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//         return;
//     }

//     Node* temp = head;
//     int count = 1;

//     while (temp != NULL && count < position - 1) {
//         temp = temp->next;
//         count++;
//     }

//     if (temp == NULL || temp->next == NULL) return;

//     Node* delnode = temp->next;
//     temp->next = temp->next->next;
//     delete delnode;
// }

// void display(Node* head) {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     Node* head = NULL;

//     insertAtEnd(head, 10);
//     insertAtEnd(head, 20);
//     insertAtEnd(head, 30);
//     insertAtEnd(head, 40);
//     insertAtEnd(head, 50);

//     display(head);

//     deleteByValue(head, 30);
//     display(head);

//     deleteByPosition(head, 2);
//     display(head);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class BinaryTree {
//     int arr[100];
//     int size;

// public:
//     BinaryTree() {
//         size = 0;
//     }

//     void insert(int value) {
//         arr[size] = value;
//         size++;
//     }

//     void display() {
//         for (int i = 0; i < size; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     int leftChild(int index) {
//         int left = 2 * index + 1;
//         if (left < size) return arr[left];
//         return -1;
//     }

//     int rightChild(int index) {
//         int right = 2 * index + 2;
//         if (right < size) return arr[right];
//         return -1;
//     }
// };

// int main() {
//     BinaryTree bt;

//     bt.insert(10);
//     bt.insert(20);
//     bt.insert(30);
//     bt.insert(40);
//     bt.insert(50);
//     bt.insert(60);

//     bt.display();

//     cout << bt.leftChild(0) << endl;
//     cout << bt.rightChild(0) << endl;

//     return 0;
// }



// #include<iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;

//     Node(int value) {
//         data = value;
//         left = right = NULL;
//     }
// };

// void preorder(Node* root) {
//     if (root == NULL) return;
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void inorder(Node* root) {
//     if (root == NULL) return;
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// void postorder(Node* root) {
//     if (root == NULL) return;
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }

// int main() {
//     Node* root = new Node(10);
//     root->left = new Node(20);
//     root->right = new Node(30);
//     root->left->left = new Node(40);
//     root->left->right = new Node(50);

//     cout << "Preorder: ";
//     preorder(root);
//     cout << endl;

//     cout << "Inorder: ";
//     inorder(root);
//     cout << endl;

//     cout << "Postorder: ";
//     postorder(root);
//     cout << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;
// class heapmax{
//     int arr[100];
//     int size;
// public:
//     heapmax(){
//         size=0;
//     }

//     void insert(int value){
//         size++;
//         arr[size] = value;
//         heapifyup(size);
        
//     }

//     int swap(int &a,int &b){
//         int c =a;
//         a=b;
//         b=c;
//     };

//     void heapifyup(int index){
//         while(index>1){
//             int parent = (index)/2;
//             if(arr[parent] < arr[index]){
//                 swap(arr[parent],arr[index]);
//                 index=parent;
//             }else{
//                 break;
//             }
//         }
//     }

//     void display(){
//         for(int i=1;i<=size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// int main() {
//     heapmax h;
//     h.insert(50);
//     h.insert(30);
//     h.insert(40);
//     h.insert(10);
//     h.insert(20);
//     h.insert(35);
//     h.insert(25);
//     h.insert(70);
//     cout << "Max Heap Elements: ";
//     h.display();
//     return 0;
// }




// #include<iostream>
// #include<queue>
// using namespace std;
// #define max 10

// class Graph {
//     int adj[max][max];
//     int visited[max];
//     int v;

// public:
//     Graph(int vertices) {
//         v = vertices;
//         for(int i=0;i<max;i++){
//             visited[i] = 0;
//             for(int j=0;j<max;j++){
//                 adj[i][j] = 0;
//             }
//         }
//     }

//     void addEdge(int u, int w) {
//         adj[u][w] = 1;
//         adj[w][u] = 1;
//     }

//     void bfs(int s) {
//         for(int i=0;i<max;i++) visited[i] = 0;

//         queue<int> q;
//         q.push(s);
//         visited[s] = 1;

//         while(!q.empty()) {
//             int m = q.front();
//             q.pop();
//             cout << m << " ";

//             for(int i=0; i<v; i++) {
//                 if(adj[m][i] == 1 && !visited[i]) {
//                     q.push(i);
//                     visited[i] = 1;
//                 }
//             }
//         }
//     }
// };

// int main() {
//     Graph g(5);
//     g.addEdge(0,1);
//     g.addEdge(1,2);
//     g.addEdge(2,3);
//     g.addEdge(3,4);
//     g.addEdge(4,0);

//     g.bfs(0);
//     return 0;
// }





#include<iostream>
#include<queue>
using namespace std;
#define max 10

class Graph {
    int adj[max][max];
    int visited[max];
    int v;

public:
    Graph(int vertices) {
        v = vertices;
        for (int i = 0; i < max; i++) {
            visited[i] = 0;
            for (int j = 0; j < max; j++) {
                adj[i][j] = 0;
            }
        }
    }

    void addEdge(int u, int w) {
        adj[u][w] = 1;
    }

    void bfs(int s) {
        for (int i = 0; i < max; i++) visited[i] = 0;

        queue<int> q;
        q.push(s);
        visited[s] = 1;

        while (!q.empty()) {
            int m = q.front();
            q.pop();
            cout << m << " ";

            for (int i = 0; i < v; i++) {
                if (adj[m][i] == 1 && !visited[i]) {
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
    }
};

int main() {
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);

    g.bfs(0);
    return 0;
}
