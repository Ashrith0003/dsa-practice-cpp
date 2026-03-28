#include<iostream>
using namespace std;

class Queue {
    int front, rear;
    int arr[100];
    int max_element;

public:
    Queue(int size = 100) {
        front = -1;
        rear = -1;
        max_element = size;
    }

    void enqueue(int value) {
        if (rear >= max_element - 1) {
            cout << "Queue is full, cannot enqueue." << endl;
        } else {
            if (front == -1) front = 0; 
            arr[++rear] = value;
            cout << "Enqueued element: " << value << endl;
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty, cannot dequeue." << endl;
        } else {
            cout << "Dequeued element: " << arr[front] << endl;
            front++;
        }
    }

    void peek() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Front element: " << arr[front] << endl;
        }
    }

    bool empty() {
        return (front == -1 || front > rear);
    }

    void display() {
        if (empty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.peek();

    q.dequeue();
    q.peek();

    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    q.display();

    return 0;
}
