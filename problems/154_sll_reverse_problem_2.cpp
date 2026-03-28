#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;

    Node(int value){
        data = value;
        next=NULL;
    }
};

int main(){
    Node*head = new Node(10);
    Node*first = new Node(20);
    Node*second = new Node(30);
    Node*third = new Node(40);
    Node*fourth = new Node(50);
    Node*fifth = new Node(60);

    head->next =first;
    first->next = second;
    second->next =third;
    third->next =fourth;
    fourth->next =fifth;
    fifth->next =NULL;

    Node*temp =head;
    cout<<"orginal linkedlist";
    while(temp!=NULL){
        cout<<"->"<<temp->data;
        temp=temp->next;
    }
     cout<<"NULL"<<endl;

    Node*current =head;
    Node*next =NULL;
    Node*prv =NULL;

    while(current!=NULL){
        next =current->next;
        current->next=prv;
        prv = current;
        current = next;
    }

    temp = prv;
        cout << "Reversed Linked List: ";
        while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
    return 0;
}
