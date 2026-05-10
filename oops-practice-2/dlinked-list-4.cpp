#include <iostream>
#include <string>
using namespace std;

class HistoryManager {
private:
    class Node {
    public:
        string state;
        Node* prev;
        Node* next;

        Node(string s) {
            state = s;
            prev = NULL;
            next = NULL;
        }
    };

    Node* head;
    Node* tail;
    Node* current;

public:
    // Constructor
    HistoryManager() {
        head = NULL;
        tail = NULL;
        current = NULL;
    }

    void addState(string text) {
        Node* newNode = new Node(text);

        
        if (head == NULL) {
            head = tail = current = newNode;
            return;
        }

        if (current != tail) {
            Node* temp = current->next;
            while (temp != NULL) {
                Node* toDelete = temp;
                temp = temp->next;
                delete toDelete;
            }

            current->next = NULL;
            tail = current;
        }

        // Attach new node at end
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        current = newNode;
    }

    void undo() {
        if (current != NULL && current->prev != NULL) {
            current = current->prev;
            cout << "Undo -> Current State: " << current->state << endl;
        } else {
            cout << "Undo not possible" << endl;
        }
    }


    void redo() {
        if (current != NULL && current->next != NULL) {
            current = current->next;
            cout << "Redo -> Current State: " << current->state << endl;
        } else {
            cout << "Redo not possible" << endl;
        }
    }

    void showCurrent() {
        if (current != NULL) {
            cout << "Current State: " << current->state << endl;
        } else {
            cout << "No state available" << endl;
        }
    }

    // Display all history
    void displayHistory() {
        Node* temp = head;
        cout << "History: ";
        while (temp != NULL) {
            if (temp == current)
                cout << "[" << temp->state << "] <-> ";
            else
                cout << temp->state << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }


    ~HistoryManager() {
        Node* temp = head;
        while (temp != NULL) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }
};

int main() {
    HistoryManager editor;

    editor.addState("H");
    editor.addState("He");
    editor.addState("Hel");
    editor.addState("Hell");
    editor.addState("Hello");

    editor.displayHistory();
    editor.showCurrent();

    editor.undo();
    editor.undo();
    editor.displayHistory();

    editor.redo();
    editor.displayHistory();

    editor.addState("Help");
    editor.displayHistory();
    editor.showCurrent();

    editor.redo();   

    return 0;
}