#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};

    void printlist(node*head){
        node*temp = head;
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

    void insertAtBeginning(node*&head,int value){
        node*newnode = new node{value,head};
        head = newnode;
    }

int main(){
    node*first = new node{10,NULL};
    node*second = new node{20,NULL};
    node*third = new node{30,NULL};

    first->next = second;
    second->next = third;
    insertAtBeginning(first,40);
    printlist(first);
    return 0;

}