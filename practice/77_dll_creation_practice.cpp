#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node*prev;
public:
    Node(int value){
        data = value;
        prev = next = NULL;
    }
};

class DoublyList{
    Node*head = NULL;
    Node*tail =NULL;
public :
    DoublyList(){
        head=tail=NULL;
    }
};

int main(){
    Node*head = new Node(0);
    Node*first = new Node(1);
    Node*second = new Node(2);
    Node*third = new Node(3);
    Node*fourth = new Node(4);
    Node*fifth = new Node(5);

    head->next = first;
    first->prev = head;
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = fourth;
    fourth->next = fifth;
    fifth->prev = fourth;

    Node*temp = head;
    while(temp != NULL){
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
