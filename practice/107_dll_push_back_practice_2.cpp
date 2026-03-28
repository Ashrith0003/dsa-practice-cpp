#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node*prev;

    Node(int value){
        data = value;
        next=NULL;
        next=NULL;
    }

};

class DoublyLinkedList{
    Node*head=NULL;
    Node*tail=NULL;

public:
    DoublyLinkedList(){
         head=tail=NULL; // checking it is empty or not //
    }

    void push_back(int value){
        Node*newnode = new Node(value);
        if(head==NULL){
            head=tail=newnode;
        }else{
            newnode->prev = tail;
            tail->next =newnode;
            tail=newnode;
        }
    }

    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

};

int main()LinkedList{
 DoublyLinkedList dll;
    dll.push_back(10); 
    dll.push_back(20);
    dll.push_back(30);
    dll.push_back(40);
    dll.display();


}
