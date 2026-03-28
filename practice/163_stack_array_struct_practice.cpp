#include<iostream>
using namespace std;
// array//

class Stack {
    int top;
    int arr[100];      // fixed-size array for stack elements
    int max_element;   // maximum number of elements in stack

public:
    // constructor
    Stack(int size = 100) { // by defult value if the use not given value for the array//
        top = -1;
        max_element = size;
    }

    // push element onto stack
    void push(int value) {
        if (top >= max_element - 1) {
            
            cout << "Can't push, stack is full" << endl;
        } else {
            arr[++top] = value;
            cout << "Pushed element: " << value << endl;
        }
    }

    // pop element from stack
    void pop() {
        if (top < 0) {
            cout << "The stack is empty" << endl;
        } else {
            cout << arr[top--] << " popped from stack" << endl;
        }
    }

    // check if stack is empty
    bool empty() {
        return (top < 0);
    }

    // view the top element
    void peek() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }
};

// main function
int main() {
    Stack s(5); // create stack of size 5

    s.push(10);
    s.push(20);
    s.push(30);

    s.peek();

    s.pop();
    s.peek();

    if (s.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}
