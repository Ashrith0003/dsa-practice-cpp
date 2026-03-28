// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node*next;
//     Node*prev;

//     Node(int value){
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };

// class DoublyList{
//     Node*head = NULL;
//     Node*tail = NULL;
// public:
//     DoublyList(){
//         head=tail=NULL;
//     }

// void Push_front(int value){
//     Node*newnode = new Node(value);
//     if(head == NULL){
//         tail=head = newnode;

//     }else{
//         newnode->next =head;
//         head->prev = newnode;
//         head = newnode;
//     }

// }

// void print(){
//     Node*temp=head;
//     while(temp != NULL){
//         cout<<temp->data<<"<=>";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// };


// int main(){
//     DoublyList dll;
//     dll.Push_front(10);
//     dll.Push_front(20);
//     dll.Push_front(30);
//     dll.Push_front(40);
//     dll.print();


// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         int data;
//         Node*next;
//         Node*prev;

//     Node(int value){
//         data  = value;
//         prev = next = NULL;
//     }
// };
// class doublyList{
//     Node*head = NULL;
//     Node*tail = NULL;
// public:
//     doublyList(){
//         head=tail=NULL;
//     }

//     void Push_front(int value){
//         Node*newnode =new Node(value);

//         if(head == NULL){
//             tail=head=newnode;
//         }else{
//             newnode->next = head;
//             head->prev = newnode;
//             head = newnode;
//         }
//     }


//     void print(){
//     Node*temp=head;
//     while(temp != NULL){
//         cout<<temp->data<<"<=>";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// };

// int main(){
//     doublyList lld;
//     lld.Push_front(10);
//     lld.Push_front(20);
//     lld.Push_front(30);
//     lld.Push_front(40);
//     lld.Push_front(50);
//     lld.print();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node*next;
// //     Node*prev;

// //     Node(int value){
// //         data = value;
// //         next = NULL;
// //         prev = NULL;
// //     }
// // };
// // class DoublyList{
// //     Node*head = NULL;
// //     Node*tail = NULL;
// // public:
// //     DoublyList(){
// //         head = NULL;
// //         tail = NULL;
// //     }
// //     void push_front(int value){
// //         Node*newnode = new Node(value);
// //         if(head == NULL){
// //             head = tail = newnode;
// //         }else{
// //             newnode->next = head;
// //             head->prev = newnode;
// //             head = newnode;
// //         }
// //     }

// //     void print(){
// //         Node*temp = head;
// //         while(temp != NULL){
// //             cout<<temp->data<<"<=>";
// //             temp= temp->next;
// //         }
// //         cout<<"NULL"<<endl;
// //     }
// // };

// // int main(){
// //     DoublyList lld;
// //     lld.push_front(10);
// //     lld.push_front(20);
// //     lld.push_front(30);
// //     lld.push_front(40);
// //     lld.push_front(50);
// //     lld.print();
// //     return 0;
// // }

// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node*next;
//     Node*prev;

//     Node(int value){
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };

// class Doublylist{
//     Node*head = NULL;
//     Node*tail = NULL;
// public:
//     Doublylist(){
//         head=tail=NULL;
//     }

//     void Push_front(int value){
//         Node*newnode = new Node(value);
//         if(head == NULL){
//             head=tail = newnode;
//         }else{
//             newnode->next =head;
//             head->prev = newnode;
//             head = newnode;
//         }
//     }

//     void Push_back(int value){
//         Node*newnode = new Node(value);
//         if(head == NULL){
//             head = tail = newnode;
//         }else{
//             newnode->prev = tail;
//             tail ->next = newnode;
//             tail = newnode;
//         }
//     }

//     void print(){
//         Node*temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<"<=>";
//             temp=temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }
// };

// int main(){
//     Doublylist lld;
//     lld.Push_back(10);
//     lld.Push_back(20);
//     lld.Push_back(30);
//     #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node*next;
//     Node*prev;

//     Node(int value){
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };

// class Doublylist{
//     Node*head = NULL;
//     Node*tail = NULL;
// public:
//     Doublylist(){
//         head=tail=NULL;
//     }

//     void Push_front(int value){
//         Node*newnode = new Node(value);
//         if(head == NULL){
//             head=tail = newnode;
//         }else{
//             newnode->next =head;
//             head->prev = newnode;
//             head = newnode;
//         }
//     }

//     void Push_back(int value){
//         Node*newnode = new Node(value);
//         if(head == NULL){
//             head = tail = NULL;
//         }else{
//             newnode->prev = tail;
//             tail ->next = newnode;
//             tail = newnode;
//         }
//     }

//     void print(){
//         Node*temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<"<=>";
//             temp=temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }
// };

// int main(){
//     Doublylist lld;
//     lld.Push_back(10);
//     lld.Push_back(20);
//     lld.Push_back(30);
//     lld.print();
//     #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node*next;
//     Node*prev;

//     Node(int value){
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };

// class Doublylist{
//     Node*head = NULL;
//     Node*tail = NULL;
// public:
//     Doublylist(){
//         head=tail=NULL;
//     }

//     void Push_front(int value){
//         Node*newnode = new Node(value);
//         if(head == NULL){
//             head=tail = newnode;
//         }else{
//             newnode->next =head;
//             head->prev = newnode;
//             head = newnode;
//         }
//     }

//     void Push_back(int value){
//         Node*newnode = new Node(value);
//         if(head == NULL){
//             head = tail = NULL;
//         }else{
//             newnode->prev = tail;
//             tail ->next = newnode;
//             tail = newnode;
//         }
//     }

//     void print(){
//         Node*temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<"<=>";
//             temp=temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }
// };

// int main(){
//     Doublylist lld;
//     lld.Push_back(10);
//     lld.Push_back(20);
//     lld.Push_back(30);
//     lld.print();
//     return 0;}

#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
    Node*prev;

    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

class Doublylist{
    Node*head = NULL;
    Node*tail = NULL;
public:
    Doublylist(){
        head=tail=NULL;
    }

    void Push_front(int value){
        Node*newnode = new Node(value);
        if(head == NULL){
            head=tail = newnode;
        }else{
            newnode->next =head;
            head->prev = newnode;
            head = newnode;
        }
    }

    void Push_back(int value){
        Node*newnode = new Node(value);
        if(head == NULL){
            head = tail = newnode;
        }else{
            newnode->prev = tail;
            tail ->next = newnode;
            tail = newnode;
        }
    }

    void print(){
        Node*temp = head;
        while(temp != NULL){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    Doublylist lld;
    lld.Push_back(10);
    lld.Push_back(20);
    lld.Push_back(30);
    lld.Push_front(50);
    lld.Push_front(60);
    lld.Push_front(70);
    lld.Push_front(80);
    lld.Push_front(90);
    lld.Push_front(100);
    lld.print();
    return 0;
};