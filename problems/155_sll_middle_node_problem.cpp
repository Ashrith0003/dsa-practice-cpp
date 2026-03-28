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

int main(){
    Node*head = new Node(10);
    Node*first = new Node(20);
    Node*second = new Node(30);
    Node*third = new Node(40);
    Node*fourth = new Node(50);
    Node*fifth = new Node(60);
    Node*sixth = new Node(70);

    head->next =first;
    first->next = second;
    second->next =third;
    third->next =fourth;
    fourth->next =fifth;
    fifth->next =sixth;
    sixth->next =NULL;

    Node*fast =head;
    Node*slow =head;
    while(fast!=NULL&&fast->next!=NULL){
        slow =slow->next;
        fast = fast->next->next;
    }
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    } 
    cout<<"NULL"<<endl;
    cout<<"The middle term is ->"<<slow->data;
    return 0;
}
