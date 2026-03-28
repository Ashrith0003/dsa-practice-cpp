#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*next;

     Node(int value){
        data=value;
        next=NULL;
    }
};

int main(){
    Node*head= new Node(10);
    Node*first= new Node(20);
    Node*second= new Node(30);
    Node*third= new Node(40);
    Node*fourth= new Node(50);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    Node*current = head;
    Node*pervious = NULL;
    Node*next = NULL;

    while(current!=NULL){
        next = current->next;
        current->next=pervious;   
        pervious = current;       
        current = next;    
    };
    head =pervious;

    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
