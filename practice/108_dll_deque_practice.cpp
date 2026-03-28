
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node*prev;

    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

class DoblyLinkedList{
    Node*head=NULL;
    Node*tail=NULL;
public:
    DoblyLinkedList(){
        head=tail=NULL;
    }

    void push_back(int value){
        Node*newnode =new Node(value);
        if(head == NULL){
            head=tail=newnode;
        }else{
            newnode->prev =tail;
            tail->next = newnode;
            tail=newnode;
        }
    }

    void push_front(int value){
        Node*newnode =new Node(value);
        if(head == NULL){
            head=tail=newnode;
        }else{
            head->prev = newnode;
            newnode->next = head;
            head =newnode;
        }
    }




    void Display(){
        Node*temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;

    }
};

class DoblyLinkedList1{
    Node*head =NULL;
    Node*tail= NULL;
public:
    DoblyLinkedList1(){
      head=tail=NULL;
    }
    
    void push_front(int value){
        Node*newnode =new Node(value);
        if(head == NULL){
            head=tail=newnode;
        }else{
            head->prev = newnode;
            newnode->next = head;
            head =newnode;
        }
    }

    void Display(){
        Node*temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;

    }

};

int main(){
    DoblyLinkedList mms;
    DoblyLinkedList mkk;

    mms.push_back(10);
    mms.push_back(20);
    mms.push_back(30);
    mms.push_back(40);
    mms.push_back(50);
    mms.push_back(60);
    mms.Display();
    mkk.push_front(10);
    mkk.push_front(20);
    mkk.push_front(30);
    mkk.push_front(40);
    mkk.push_front(50);
    mkk.push_front(60);
    mkk.Display();

}
