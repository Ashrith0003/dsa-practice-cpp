#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node*partation(Node*head,int x){

    Node*dummyleft = new Node(0);
    Node*dummyright = new Node(0);

    Node*head1 = dummyleft;
    Node*head2 = dummyright;
    Node*temp = head;

    while(temp){
        if(temp->data < x){
            head1->next = temp;
            head1 = temp;
        }else{
            head2->next = temp;
            head2 = temp;
        }
        temp = temp->next;
    }

    head2->next = NULL;
    head1->next = dummyright->next;
    return dummyleft->next;  
};

void display(Node*head){
    Node*temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}



int main(){
    Node*head = new Node(1);
    head->next = new Node(4);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(2);
    display(head);
    display(partation(head,3));
    return 0;
}



#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node*partation(Node*head ,int x){
    Node*dummyleft = new Node(0);
    Node*dummyright = new Node(0);

    Node*head1 = dummyleft;
    Node*head2 = dummyright;

    Node*temp = head;
    while(temp){
        if(temp->data < x){
            head1->next = temp;
            temp = head1;
        }else{
            head2->next = temp;
            temp = head2;
        }
        temp = temp->next;
    }

    head2->next = NULL;
    head1->next = dummyright->next;

    return dummyleft->next;

}