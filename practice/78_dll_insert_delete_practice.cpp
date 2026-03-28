#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node*prev;

    Node(int value){
        data = value;
        next = prev = NULL;
    }
};
class DoublyList{
    Node*head = NULL;
    Node*tail = NULL;
public:
    DoublyList(){
        head= tail = NULL;
    }

void pushfront(int value){
    Node*newnode = new Node(value);
    if(head == NULL){
        head = tail = newnode;
    }else{
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}

void Push_back(int value){
    Node*newnode = new Node(value);
     if(head == NULL){
        head = tail = newnode;
    }else{
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    } 
};

 void print(){
    Node*temp=head;
    while(temp != NULL){
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


void deletionbegin(){
    if(head == NULL){
        return;
    }
    Node*temp = head;
    if(head==tail){
        head=tail = NULL;
    }else{
        head = head->next;
        head->prev = NULL;
    }
    delete temp;
}

void deletionend(){
    if(head == NULL){
        return;
    }
    Node*temp = tail;
    if(head==tail){
        head=tail = NULL;
    }else{
        tail = tail->prev;
        tail->next = NULL;
    }
    delete temp;
}

};

int main(){
    DoublyList dll;
    dll.Push_back(10);
    dll.Push_back(20);
    dll.Push_back(30);
    dll.Push_back(40);
    dll.print();
    dll.deletionbegin();  
    dll.print();
    dll.deletionend();  
    dll.print();
    return 0;
}
