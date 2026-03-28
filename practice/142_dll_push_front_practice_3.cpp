#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
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
//         head = NULL;
//         tail = NULL;
//     }
//     void push_front(int value){
//         Node*newnode = new Node(value);
//         if(head == NULL){
//             head = tail = newnode;
//         }else{
//             newnode->next = head;
//             head->prev = newnode;
//             head = newnode;
//         }
//     }

//     void print(){
//         Node*temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<"<=>";
//             temp= temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }
// };

// int main(){
//     DoublyList lld;
//     lld.push_front(10);
//     lld.push_front(20);
//     lld.push_front(30);
//     lld.push_front(40);
//     lld.push_front(50);
//     lld.print();
//     return 0;
// }
