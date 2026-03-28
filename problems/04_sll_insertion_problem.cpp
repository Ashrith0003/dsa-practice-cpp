#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

void insertAtStart(Node*& head, int value) {
    Node* newnode = new Node(value);
    newnode->next = head;
    head = newnode;
}

void insertAtEnd(Node*& head, int value) {
    Node* newnode = new Node(value);
    if (head == NULL) {
        head = newnode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}

void insertAtMiddle(Node*& head, int value, int position) {
    Node* newnode = new Node(value);

    if (position == 1) {
        newnode->next = head;
        head = newnode;
        return;
    }

    Node* temp = head;
    int count = 1;

    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    insertAtStart(head, 10);
    insertAtEnd(head, 30);
    insertAtMiddle(head, 20, 2);
    insertAtEnd(head, 40);
    insertAtStart(head, 5);

    display(head);

    return 0;
}
