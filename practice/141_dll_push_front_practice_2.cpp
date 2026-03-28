#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node*next;
        Node*prev;

    Node(int value){
        data  = value;
        prev = next = NULL;
    }
};
class doublyList{
    Node*head = NULL;
    Node*tail = NULL;
public:
    doublyList(){
        head=tail=NULL;
    }

    void Push_front(int value){
        Node*newnode =new Node(value);

        if(head == NULL){
            tail=head=newnode;
        }else{
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }


    void print(){
    Node*temp=head;
    while(temp != NULL){
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
};

int main(){
    doublyList lld;
    lld.Push_front(10);
    lld.Push_front(20);
    lld.Push_front(30);
    lld.Push_front(40);
    lld.Push_front(50);
    lld.print();
    return 0;
}
