#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
public: 
    Node(int value){
        data = value;
        next = NULL;
    }
};
void insertstart(Node*&head,int value){
    Node*newnode = new Node(value);
    if(head == NULL){
        head = newnode;
    }else{
        newnode->next = head;
        head = newnode;
    }
}

void insertend(Node*&head,int value){
    Node*newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        return;
    }else{
        Node*temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
};

void insertatmid(Node*&head,int value,int pos){
    Node*newnode = new Node(value);
    if(pos == 1){
        newnode->next = head;
        head = newnode;
    }
    Node*temp = head;
    int count = 1;
    while(count >= pos-1 && temp!= NULL){
        temp = temp->next;
        count++;
    }
    if(temp==NULL){
        cout<<"invalid position";
    }else{
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void display(Node*&head){
    Node*temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL;

    insertstart(head, 10);
    insertend(head, 20);
    insertend(head, 40);

    insertatmid(head, 30, 3); 

    display(head);
}
