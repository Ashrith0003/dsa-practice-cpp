#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

void display(Node* &head){
    Node* temp = head;
    while(temp){
        cout << "->" << temp->data;
        temp = temp->next;
    }
    cout <<"->NULL"<< endl;
}

void insertAtBeginning(Node* &head, int value){
    Node* newnode = new Node{value, NULL};
    newnode->next = head;
    head = newnode;
}

void insertAtEnd(Node* &head, int value){
    Node* newnode = new Node{value, NULL};
    if(head == NULL){
        head = newnode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}

void insertAtPosition(Node* &head, int value, int pos){
    if(pos == 1){
        insertAtBeginning(head, value);
        return;
    }
    Node* newnode = new Node{value, NULL};
    Node* temp = head;
    for(int i=0; i<pos-1; i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void deleteAtBeginning(Node* &head){
    if(head == NULL) return;
    Node* temp = head;      
    head = head->next;     
    delete temp;           
}

void deleteAtEnd(Node* &head){
    if(head == NULL) return;

    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    Node* prev = NULL;
    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;  
    delete temp;       
}

void deleteAtposition(Node*&head,int pos){
    Node*temp = head;
      if(pos == 0){
        deleteAtBeginning(head);
        return;
    }
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    Node*prev = temp;
    temp = temp->next;
    prev->next = temp->next;
    delete temp;
}



void reverse(Node*&head){
    Node*current = head;
    Node*prev = NULL;
    Node*next = NULL;
    while(current != NULL){
        next =current->next;
        current ->next = prev;
        prev = current ;
        current = next;
    }
    head = prev;
}

void findMiddle(Node*&head){
    Node*fast = head;
    Node*slow = head;

    while(fast!= NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    cout<<"THe middle is : "<<slow->data<<endl;
}

void cycle(Node* & head){
    bool iscycle = false;


    Node*fast = head;
    Node*slow = head;

    while(fast!= NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast){
            iscycle = true;
        }
    }
    if(iscycle){
        cout<<"cycle exist"<<endl;
    }else{
        cout<<"cycle not exist"<<endl;
    }
};

void removeFromEnd(Node* &head,int pos){
    Node*fast = head;
    Node*slow = head;

    for(int i=0;i<pos;i++){
        fast = fast->next;
    }
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
};

void Findintersetion(Node*&head1,Node*&head2){
    int length1 = 0;
    int length2 = 0;
    Node*temp1 = head1;
    Node*temp2 = head2;
    Node*fast = head1;
    Node*slow = head1;
    while(temp1 != NULL){
        length1++;
        temp1=temp1->next;
    }

    while(temp2 != NULL){
        length2++;
        temp2=temp2->next;
    }

    int diff;
    if(length1 > length2){
        diff = length1 - length2;
    }else{
        diff = length2 - length1;
    }

    for(int i=0;i<diff;i++){
        fast=fast->next;
    }
    while(fast!=NULL && fast->next = NULL){
        fast = fast->next;
        slow = slow->next;
        if(slow == fast){
            cout<<"intersetion found"<<endl;
        }
    }
};

int main(){
    Node* head = new Node{10, NULL};
    Node* first = new Node{20, NULL};
    Node* second = new Node{30, NULL};
    Node* third = new Node{40, NULL};

    head->next = first;
    first->next = second;
    second->next = third;

    // display(head);
    // deleteAtBeginning(head);
    // display(head);
    // deleteAtEnd(head);
    // display(head);
    // deleteAtposition(head,0);
    // display(head);
    // reverse(head);
    display(head);
    // findMiddle(head);
    // cycle(head);
    removeFromEnd(head,2);
    display(head);
    return 0;
}