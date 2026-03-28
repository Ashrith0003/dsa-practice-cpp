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

class DoublyList{
    Node*head = NULL;
    Node*tail = NULL;
public:
    DoublyList(){
        head=tail=NULL;
    }

void Push_front(int value){
    Node*newnode = new Node(value);
    if(head == NULL){
        tail=head = newnode;

    }else{
        newnode->next =head;
        head->prev = newnode;
        head = newnode;
    }

}

void print(){
    Node*temp=head;
    while(temp != NULL){
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
};


int main(){
    DoublyList dll;
    dll.Push_front(10);
    dll.Push_front(20);
    dll.Push_front(30);
    dll.Push_front(40);
    dll.print();


}
