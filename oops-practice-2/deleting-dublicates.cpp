#include<iostream>
using namespace std;

class Node {

public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};


Node* deleteNode(Node* head, int val) {

    Node* dummy = new Node(0);
    dummy->next = head;

    Node* temp = dummy;

    while(temp->next != NULL) {

        if(temp->next->data == val) {

            Node* deleted = temp->next;

            temp->next = temp->next->next;

            delete deleted;

        } else {

            temp = temp->next;
        }
    }

    return dummy->next;
}

void printList(Node* head) {

    Node* temp = head;

    while(temp != NULL) {

        cout << temp->data << " ";

        temp = temp->next;
    }

    cout << endl;
}

int main() {

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(6);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(6);

    cout << "Original List: ";
    printList(head);

    head = deleteNode(head, 6);

    cout << "After Deletion: ";
    printList(head);

    return 0;
}