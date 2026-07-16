#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;

    Node(int data){
        this->data = data;
        next =NULL;
    }
};






Node*rotate(Node*head,int k){
    int count = 1;
    Node*temp = head;
    while(temp->next){
        temp = temp->next;
        count++;
    }

    temp->next = head;
    k = k%count;
    int jump = count - k;

    while(jump){
        temp = temp->next;
        jump--;
    }
    Node*newnode = temp->next;
    temp->next =NULL;
    return newnode;
};



void display(Node*head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}




int main(){
    Node*head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    int k = 4;
    display(rotate(head,k));
    return 0;
}


// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node*next;

//     Node(int data){
//         this->data = data;
//         next = NULL;
//     }
// };


// Node*rotate(Node*head,int k){
//     Node*temp = head;
//     int count = 0;
//     while(temp->next){
//         temp = temp->next;
//         count++;
//     }

//     temp->next  = head;
//     k = k%count;
//     int jump = count - k;
//     temp = head;

//     while(jump--){
//         temp = temp->next;
//     }
//     Node*newnode = temp->next;
//     temp->next  = NULL;
//     return newnode;
// };

// void display(Node*head){
//     Node*temp = head;
//     while(temp){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// };

// int main(){
//     Node*head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head->next->next->next->next = new Node(50);
//     head->next->next->next->next->next = new Node(60);
//     int k = 4;
//     display(rotate(head,k));
//     return 0;
}

