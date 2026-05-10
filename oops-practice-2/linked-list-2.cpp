// #include<iostream>
// using namespace std;
// template <typename T>
// class LinkedList{
// private:
//     class Node{
//     public:
//         T data;
//         Node* next;

//         Node(T val){
//             data = val;
//             next = NULL;
//         }
//     };

//     Node* head;

// public:
//     LinkedList(){
//         head = NULL;
//     }

//     void push_front(T val){
//         Node* newnode = new Node(val);
//         newnode->next = head;
//         head = newnode;
//     }

//     void push_back(T val){
//         Node* newnode = new Node(val);

//         if(head == NULL){
//             head = newnode;
//             return;
//         }

//         Node* temp = head;

//         while(temp->next != NULL){
//             temp = temp->next;
//         }

//         temp->next = newnode;
//     }

//     void reverse(){
//         Node* prev = NULL;
//         Node* current = head;
//         Node* next = NULL;

//         while(current != NULL){
//             next = current->next;
//             current->next = prev;
//             prev = current;
//             current = next;
//         }

//         head = prev;
//     }

//     void print(){
//         Node* temp = head;

//         while(temp != NULL){
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }
// };

// int main(){
//     LinkedList<int> list;

//     list.push_front(10);
//     list.push_back(200);
//     list.push_back(100);
//     list.push_front(20);

//     cout << "Original List: ";
//     list.print();

//     list.reverse();

//     cout << "Reversed List: ";
//     list.print();

//     return 0;
// }

#include<iostream>
using namespace std;
template <typename T>
class Linkedlist{
    class Node{
        T data;
        Node*next;
    public:
    Node(int val){
        data = val;
        next = NULL;
    }
    };

    Node*head;

    
}