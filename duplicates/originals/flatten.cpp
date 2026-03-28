
// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
// public:
//     Node*next;
//     Node*prev;
//     Node*bottom;


//     Node(int value){
//         data = value;
//         next = NULL;
//         prev = NULL;
//         bottom = NULL;
//     }
// };


// Node* flatten(Node* head) {
//     if (head == NULL) {
//         return head;
//     }

//     Node* current = head; 
//     while (current != NULL) {
//         if (current->bottom != NULL) {
//             Node*nextNode = current->next;
//             current->next = flatten(current->bottom);
//             current->next->prev = current;
//             current->bottom = NULL;
//         }
//         current = current->next;
//     }

//     // Find the tail of the flattened list
//     Node* tail = head;
//     while (tail->next != NULL) {
//         tail = tail->next;
//     }

//     // Attach nextNode (the next main list)
//     if (nextNode != NULL) {
//         tail->next = nextNode;
//         nextNode->prev = tail;
//     }

//     return head; 
// }
// int main(){
//     Node* head = new Node(5);
//     head->bottom = new Node(7);
//     head->bottom->bottom = new Node(8);
//     head->bottom->bottom->bottom = new Node(30);

//     head->next = new Node(10);
//     head->next->bottom = new Node(20);

//     head->next->next = new Node(19);
//     head->next->next->bottom = new Node(22);
//     head->next->next->bottom->bottom = new Node(50);

//     head->next->next->next = new Node(28);
//     head->next->next->next->bottom = new Node(35);
//     head->next->next->next->bottom->bottom = new Node(40);
//     head->next->next->next->bottom->bottom->bottom = new Node(45);
//     head = flatten(head);
//     Node*temp =head;
//     while(temp!=NULL){
//         cout<<temp->data<<"<=>";
//         temp=temp->next;
//     }
//     cout <<"NULL"<<endl;

//     return 0;
// }

#include<iostream>
using namespace std;
class stack{
    int top;
    int arr[100];
    int max_element;
public :
        stack(int size = 100){
            top = -1;
            max_element = size;
        }

    void push(int value){
        if(top >= max_element -1){
            cout<<"THE satck is full";
        }else{
            arr[++top] = value ;
            cout<<
        }
    }
}