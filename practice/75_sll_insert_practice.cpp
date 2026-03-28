#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

void insertstart(Node*&head ,int value){
    if(head == NULL){
        head = new Node(value);
    }else{
        Node*newnode = new Node(value);
        newnode->next = head ;
        head = newnode;
        
    }
}
void insertend(Node*&head,int value){
    Node*newnode = new Node(value);
    if(head == NULL){
        head = new Node(value);
        return ;
    }
    Node*temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
     temp->next = newnode;
}

void insertmid(Node*&head,int value){

}

int main(){
    Node*head = new Node(10);
    Node*newnode1 = new Node(20);
    Node*newnode2 = new Node(30);
    Node*newnode3 = new Node(40);
    Node*newnode4 = new Node(50);

    head->next = newnode1;
    newnode1->next = newnode2;
    newnode2->next = newnode3;
    newnode3->next = newnode4;
    newnode4->next = NULL;
    insertstart(head,0);
    insertend(head,60);
    Node*temp = head;
    while(temp != NULL){
        cout<< temp->data <<" ";
        temp=temp->next;
    }
    return 0;
}
