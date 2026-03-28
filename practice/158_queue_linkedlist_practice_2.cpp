#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class Queue{
    Node*head;
    Node*tail;
public:
    Queue(){
        head = tail = NULL;
    }

    void push(int data){
        Node*newnode = new Node(data);
        if(empty()){
            head = tail = newnode;  
        }else{
            tail ->next = newnode;
            tail = newnode;
        }
    }

    void pop(){
        if(empty()){
            cout<<"empty^-^";
        }else{
            Node*temp =head;
            head =head->next;
            delete temp;
        }
    }

    int front(){
        if(empty()){
            cout<<"empty^-^";
        }else{
            return head->data;
        }

    }

    bool empty(){
        if(head==NULL){
            return true;
        }else{
            return false;
        }
    };
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}
