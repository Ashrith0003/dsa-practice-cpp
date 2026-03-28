using namespace std;
class Node{
public:
    int data;
    Node*next;
    Node*prev;

    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

class Doublylist{
    Node*head = NULL;
    Node*tail = NULL;
public:
    Doublylist(){
        head=tail=NULL;
    }

    void Push_front(int value){
        Node*newnode = new Node(value);
        if(head == NULL){
            head=tail = newnode;
        }else{
            newnode->next =head;
            head->prev = newnode;
            head = newnode;
        }
    }

    void Push_back(int value){
        Node*newnode = new Node(value);
        if(head == NULL){
            head = tail = NULL;
        }else{
            newnode->prev = tail;
            tail ->next = newnode;
            tail = newnode;
        }
    }

    void print(){
        Node*temp = head;
        while(temp != NULL){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    Doublylist lld;
    lld.Push_back(10);
    lld.Push_back(20);
    lld.Push_back(30);
    lld.print();
    #include<iostream>
