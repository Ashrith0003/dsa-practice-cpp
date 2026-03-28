#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class circularList{
    Node*head;
    Node*tail;
public:
    circularList(){
        head = tail = NULL;
    }

 void insertBegin(int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = tail = newnode;
        head->next = newnode;
    }else{
        newnode->next = head;
        head = newnode;
        tail->next = newnode;
    }
 }

 void insertend(int value){
    Node*newnode = new Node(value);
    if(head == NULL){
        head = tail = NULL;
        tail->next = head;
    }else{
        tail->next = newnode;
        newnode->next = head;
        tail = newnode;
    }
 }

 void deletionhead(){
    if(head == NULL){
        cout<<"list is empty";
    }
    if (head == tail) {
        delete head;
        head = tail = NULL;
    }
    else{
        Node*temp = head;
        head = head->next;
        tail->next = head;
        delete temp;
    }
 }


 void deletionend(){
    if(head == NULL){
        cout<<"List is empty";
    }
    if(head==tail){
        delete head;
        head =tail = NULL;
    }else{
        Node*temp = tail;
        Node*prev = head;
        while(prev->next != head){
            prev = prev->next;
        }
        tail = prev;
        tail->next = head;
        temp->next = NULL;
        delete temp;
    }
 }

 void print(){
    if(head == NULL){
        cout<<"list is empty";
        return;
    }
    Node*temp = head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp != head);
    cout<<endl;
 }

};

int main(){
    circularList cl;
    cl.insertBegin(10);
    cl.insertBegin(20);
    cl.insertend(30);
    cl.insertend(40);
    cl.print();  
}
