#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;

};

void display(Node* &head){
    Node*temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void insertAtBeginning(Node* &head,int value){
    Node*newnode = new Node{value,NULL};
    if(head == NULL){
        head = newnode;
    }
    newnode->next = head;
    head = newnode;
}


void insertAtEnd(Node* &head,int value){
    Node*newnode = new Node{value,NULL};
    if(head == NULL){
        head = newnode;
        return;
    }
    Node*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}

void insertAtPosition(Node* &head, int value, int pos){
    if(pos == 1){
        insertAtBeginning(head, value);
        return;
    }
    Node*newnode = new Node{value,NULL};
    Node*temp = head;
    for(int i =0;i<pos-1;i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;


}

int main(){
    Node*first = new Node{10,NULL};
    Node*second = new Node{20,NULL};
    Node*third = new Node{30,NULL};
    Node*fourth = new Node{40,NULL};

    first->next = second;
    second->next = third;
    third ->next = fourth;

    display(first);
    insertAtBeginning(first,0);
    display(first);
    insertAtEnd(first,50);
    display(first);
    insertAtPosition(first,100,3);
    display(first);
    return 0;
}