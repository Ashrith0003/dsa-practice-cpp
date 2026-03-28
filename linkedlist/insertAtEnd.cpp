#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};

void printlist(node*&head){
    node*temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtEnd(node*&head,int value){
    node*newnode = new node{value,NULL};

    if(head == NULL){
        head = newnode;
        return;
    }
    node*temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}

int main(){
    node*first = new node{10,NULL};
    node*second = new node{20,NULL};
    node*third = new node{30,NULL};

    first->next = second;
    second->next = third;

    printlist(first);

    insertAtEnd(first,40);
    
    printlist(first);

    return 0;

}