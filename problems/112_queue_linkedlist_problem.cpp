// // // // #include<iostream>
// // // // using namespace std;
// // // // class Node {
// // // // public:
// // // //     int data;
// // // //     Node* next;
// // // //     Node(int value) {
// // // //         data = value;
// // // //         next = NULL;
// // // //     }
// // // // };
// // // // class queue {
// // // //     Node* head;
// // // //     Node* tail;

// // // // public:
// // // //     queue() {
// // // //         head = tail = NULL;
// // // //     }
// // // //     void push(int data) {
// // // //         Node* newnode = new Node(data);
// // // //         if (empty()) {
// // // //             head = tail = newnode;
// // // //         } else {
// // // //             tail->next = newnode;
// // // //             tail = newnode;
// // // //         }
// // // //     }

// // // //     void pop() {
// // // //         if (empty()) {
// // // //             cout << "Queue is empty" << endl;
// // // //         } else {
// // // //             Node* temp = head;
// // // //             head = head->next;
// // // //             delete temp;

// // // //             if (head == NULL) {  
// // // //                 tail = NULL;   
// // // //             }
// // // //         }
// // // //     }
// // // //     int front() {
// // // //         if (empty()) {
// // // //             cout << "Queue is empty" << endl;
// // // //             return -1;   
// // // //         }
// // // //         return head->data;
// // // //     }

// // // //     bool empty() {
// // // //         return (head == NULL);
// // // //     }
// // // // };
// // // // int main() {
// // // //     queue q;
// // // //     q.push(10);
// // // //     q.push(20);
// // // //     q.push(30);
// // // //     while (!q.empty()) {
// // // //         cout << q.front() << " ";
// // // //         q.pop();
// // // //     }
// // // //     cout << endl;
// // // //     return 0;
// // // // }
