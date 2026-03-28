// // // #include<iostream>
// // // using namespace std;

// // // struct Node {
// // //     int data;
// // //     Node* next;

// // //     Node(int value) {
// // //         data = value;
// // //         next = NULL;
// // //     }
// // // };

// // // class Stack {
// // //     Node* top;

// // // public:
// // //     Stack() {
// // //         top = NULL;
// // //     }

// // //     bool empty() {
// // //         return top == NULL;
// // //     }

// // //     void push(int value) {
// // //         Node* newnode = new Node(value);
// // //         newnode->next = top;
// // //         top = newnode;
// // //     }

// // //     void pop() {
// // //         if (empty()) {
// // //             cout << "Stack is empty\n";
// // //             return;
// // //         }
// // //         Node* temp = top;
// // //         cout << "Popped: " << top->data << endl;
// // //         top = top->next;
// // //         delete temp;
// // //     }

// // //     int peek() {
// // //         if (empty()) {
// // //             cout << "Stack is empty\n";
// // //             return -1;
// // //         }
// // //         return top->data;
// // //     }

// // //     void display() {
// // //         Node* temp = top;
// // //         while (temp != NULL) {
// // //             cout << temp->data << " ";
// // //             temp = temp->next;
// // //         }
// // //         cout << endl;
// // //     }
// // // };

// // // int main() {
// // //     Stack s;

// // //     s.push(10);
// // //     s.push(20);
// // //     s.push(30);

// // //     cout << "Top element: " << s.peek() << endl;

// // //     s.pop();
// // //     cout << "Top element: " << s.peek() << endl;

// // //     s.display();

// // //     return 0;
// // // }
