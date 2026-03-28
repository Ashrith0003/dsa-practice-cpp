#include<iostream>
using namespace std;
struct Node {
    int data;
    Node*next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

void insertAtstart(Node*&head,int value){
    Node*newnode =new Node(value);
    newnode ->next =head;
    head = newnode;
}

void insertAtend(Node*&head,int value){
    Node*newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        return;
    }

    Node*temp =head;
    while(temp->next != NULL){
        temp =temp->next;
    }
    temp->next =newnode;
}


void deleteTheNode(Node*&head,int key){    
    if(head == NULL){
        return;
    }
    if(head->data == key){
        Node* todelete = head;
        head = head->next;
        delete todelete;
        return;
    }

    Node*temp = head;
    while(temp->next != NULL && temp->next->data != key){
        temp=temp->next;
    }

    if(temp->next == NULL){
        return;
    }
    Node* toDelete = temp->next;    
    temp->next = temp->next->next; 
    delete toDelete;                
}


int main(){
    Node*head = new Node(1);
    Node*first =new Node(2);
    Node*third = new Node(3);
    Node*fourth = new Node(4);
    Node*fifth = new Node(5);

    head ->next = first;
    first ->next = third;
    third ->next = fourth;
    fourth ->next = fifth;
    fifth ->next = NULL;
    insertAtstart(head,0);
    insertAtend(head,6);
    deleteTheNode(head,4);
    Node*temp = head;
    while(temp != NULL){
        cout<<temp->data <<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
