#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node*next;

    Node(int value){
        data =value;
        next =NULL;
    }

};
class queue {
    Node*head;
    Node*tail;

public:
       queue(){
        head = tail =NULL; 
       } 

    void push(int data){
        Node*newnode =new Node(data);
        if(empty()){
            head=tail=newnode;
        }else{
            tail->next = newnode;
            tail = newnode;
        }
    };
    void pop(){
        if(empty()){
            cout<<"linklist is empty";
        }else{
             Node*temp = head;
             head = head->next ;
             delete temp;
        }
    };

    int front(){
        if(empty()){
            cout<<"linklist is empty";
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
    }

};

int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}
