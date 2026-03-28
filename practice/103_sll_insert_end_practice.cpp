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

void insertatend(Node*&head,int value){
    Node*newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        return ;
    }
    Node*temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = newnode;

}

int main(){
    Node*head = new Node(100);
    Node*first = new Node(200);
    Node*second= new Node(300);
    Node*third = new Node(400);
    Node*fourth = new Node(500);
    head ->next = first;
    first ->next = second;
    second ->next = third;
    third -> next = fourth;
    fourth -> next = NULL;
    insertatend(head,600);
    Node*temp = head;
    while(temp !=NULL){
        cout<<temp ->data<<"->";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;

}
