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

void deleteByValue(Node*& head, int value) {
    if (head == NULL) return;

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }

    if (temp->next == NULL) return;

    Node* delnode = temp->next;
    temp->next = temp->next->next;
    delete delnode;
}

void deleteByPosition(Node*& head, int position) {
    if (head == NULL || position <= 0) return;

    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    int count = 1;

    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL) return;

    Node* delnode = temp->next;
    temp->next = temp->next->next;
    delete delnode;
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

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    display(head);

    deleteByValue(head, 30);
    display(head);

    deleteByPosition(head, 2);
    display(head);

    return 0;
}
