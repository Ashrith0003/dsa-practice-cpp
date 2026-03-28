// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node*next;

//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };

// void insertstart(Node*&head ,int value){
//     if(head == NULL){
//         head = new Node(value);
//     }else{
//         Node*newnode = new Node(value);
//         newnode->next = head ;
//         head = newnode;
        
//     }
// }
// void insertend(Node*&head,int value){
//     Node*newnode = new Node(value);
//     if(head == NULL){
//         head = new Node(value);
//         return ;
//     }
//     Node*temp = head;
//     while(temp->next != NULL){
//         temp=temp->next;
//     }
//      temp->next = newnode;
// }

// void insertmid(Node*&head,int value){

// }

// int main(){
//     Node*head = new Node(10);
//     Node*newnode1 = new Node(20);
//     Node*newnode2 = new Node(30);
//     Node*newnode3 = new Node(40);
//     Node*newnode4 = new Node(50);

//     head->next = newnode1;
//     newnode1->next = newnode2;
//     newnode2->next = newnode3;
//     newnode3->next = newnode4;
//     newnode4->next = NULL;
//     insertstart(head,0);
//     insertend(head,60);
//     Node*temp = head;
//     while(temp != NULL){
//         cout<< temp->data <<" ";
//         temp=temp->next;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node*next;
// public: 
//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };
// void insertstart(Node*&head,int value){
//     Node*newnode = new Node(value);
//     if(head == NULL){
//         head = newnode;
//     }else{
//         newnode->next = head;
//         head = newnode;
//     }
// }

// void insertend(Node*&head,int value){
//     Node*newnode = new Node(value);
//     if(head == NULL){
//         head = newnode;
//         return;
//     }else{
//         Node*temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }
//         temp->next = newnode;
//     }
// };

// void insertatmid(Node*&head,int value,int pos){
//     Node*newnode = new Node(value);
//     if(pos == 1){
//         newnode->next = head;
//         head = newnode;
//     }
//     Node*temp = head;
//     int count = 1;
//     while(count >= pos-1 && temp!= NULL){
//         temp = temp->next;
//         count++;
//     }
//     if(temp==NULL){
//         cout<<"invalid position";
//     }else{
//         newnode->next = temp->next;
//         temp->next = newnode;
//     }
// }

// void display(Node*&head){
//     Node*temp = head;
//     while(temp!= NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// int main() {
//     Node* head = NULL;

//     insertstart(head, 10);
//     insertend(head, 20);
//     insertend(head, 40);

//     insertatmid(head, 30, 3); 

//     display(head);
// }

// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node*next;
//     Node*prev;
// public:
//     Node(int value){
//         data = value;
//         prev = next = NULL;
//     }
// };

// class DoublyList{
//     Node*head = NULL;
//     Node*tail =NULL;
// public :
//     DoublyList(){
//         head=tail=NULL;
//     }
// };

// int main(){
//     Node*head = new Node(0);
//     Node*first = new Node(1);
//     Node*second = new Node(2);
//     Node*third = new Node(3);
//     Node*fourth = new Node(4);
//     Node*fifth = new Node(5);

//     head->next = first;
//     first->prev = head;
//     first->next = second;
//     second->prev = first;
//     second->next = third;
//     third->prev = second;
//     third->next = fourth;
//     fourth->prev = fourth;
//     fourth->next = fifth;
//     fifth->prev = fourth;

//     Node*temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<"<=>";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node*next;
//     Node*prev;

//     Node(int value){
//         data = value;
//         next = prev = NULL;
//     }
// };
// class DoublyList{
//     Node*head = NULL;
//     Node*tail = NULL;
// public:
//     DoublyList(){
//         head= tail = NULL;
//     }

// void pushfront(int value){
//     Node*newnode = new Node(value);
//     if(head == NULL){
//         head = tail = newnode;
//     }else{
//         newnode->next = head;
//         head->prev = newnode;
//         head = newnode;
//     }
// }

// void Push_back(int value){
//     Node*newnode = new Node(value);
//      if(head == NULL){
//         head = tail = newnode;
//     }else{
//         tail->next = newnode;
//         newnode->prev = tail;
//         tail = newnode;
//     } 
// };

//  void print(){
//     Node*temp=head;
//     while(temp != NULL){
//         cout<<temp->data<<"<=>";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }


// void deletionbegin(){
//     if(head == NULL){
//         return;
//     }
//     Node*temp = head;
//     if(head==tail){
//         head=tail = NULL;
//     }else{
//         head = head->next;
//         head->prev = NULL;
//     }
//     delete temp;
// }

// void deletionend(){
//     if(head == NULL){
//         return;
//     }
//     Node*temp = tail;
//     if(head==tail){
//         head=tail = NULL;
//     }else{
//         tail = tail->prev;
//         tail->next = NULL;
//     }
//     delete temp;
// }

// };

// int main(){
//     DoublyList dll;
//     dll.Push_back(10);
//     dll.Push_back(20);
//     dll.Push_back(30);
//     dll.Push_back(40);
//     dll.print();
//     dll.deletionbegin();  
//     dll.print();
//     dll.deletionend();  
//     dll.print();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node*next;

//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };

// class circularList{
//     Node*head;
//     Node*tail;
// public:
//     circularList(){
//         head = tail = NULL;
//     }

//  void insertBegin(int value){
//     Node* newnode = new Node(value);
//     if(head == NULL){
//         head = tail = newnode;
//         head->next = newnode;
//     }else{
//         newnode->next = head;
//         head = newnode;
//         tail->next = newnode;
//     }
//  }

//  void insertend(int value){
//     Node*newnode = new Node(value);
//     if(head == NULL){
//         head = tail = NULL;
//         tail->next = head;
//     }else{
//         tail->next = newnode;
//         newnode->next = head;
//         tail = newnode;
//     }
//  }

//  void deletionhead(){
//     if(head == NULL){
//         cout<<"list is empty";
//     }
//     if (head == tail) {
//         delete head;
//         head = tail = NULL;
//     }
//     else{
//         Node*temp = head;
//         head = head->next;
//         tail->next = head;
//         delete temp;
//     }
//  }


//  void deletionend(){
//     if(head == NULL){
//         cout<<"List is empty";
//     }
//     if(head==tail){
//         delete head;
//         head =tail = NULL;
//     }else{
//         Node*temp = tail;
//         Node*prev = head;
//         while(prev->next != head){
//             prev = prev->next;
//         }
//         tail = prev;
//         tail->next = head;
//         temp->next = NULL;
//         delete temp;
//     }
//  }

//  void print(){
//     if(head == NULL){
//         cout<<"list is empty";
//         return;
//     }
//     Node*temp = head;
//     do{
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }while(temp != head);
//     cout<<endl;
//  }

// };

// int main(){
//     circularList cl;
//     cl.insertBegin(10);
//     cl.insertBegin(20);
//     cl.insertend(30);
//     cl.insertend(40);
//     cl.print();  
// }
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
