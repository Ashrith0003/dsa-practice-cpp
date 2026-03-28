// // // #include<iostream>
// // // using namespace std;
// // // class QueueUsingStacks {
// // //     int s1[100], s2[100];
// // //     int top1, top2;
// // //     int maxSize;
// // // public:
// // //     QueueUsingStacks(int size = 100) {
// // //         top1 = -1;
// // //         top2 = -1;
// // //         maxSize = size;
// // //     }
// // //     bool empty() {
// // //         return (top1 == -1 && top2 == -1);
// // //     }
// // //     void push(int value) {
// // //         if (top1 >= maxSize - 1) {
// // //             cout << "Queue is full\n";
// // //             return;
// // //         }
// // //         s1[++top1] = value;
// // //     }
// // //     void pop() {
// // //         if (empty()) {
// // //             cout << "Queue is empty\n";
// // //             return;
// // //         }

// // //         if (top2 == -1) {
// // //             while (top1 != -1) {
// // //                 s2[++top2] = s1[top1--];
// // //             }
// // //         }
// // //         cout << s2[top2--] << endl;
// // //     }
// // //     int front() {
// // //         if (empty()) {
// // //             cout << "Queue is empty\n";
// // //             return -1;
// // //         }
// // //         if (top2 == -1) {
// // //             while (top1 != -1) {
// // //                 s2[++top2] = s1[top1--];
// // //             }
// // //         }

// // //         return s2[top2];
// // //     }
// // //     void display() {
// // //         if (empty()) {
// // //             cout << "Queue is empty\n";
// // //             return;
// // //         }

// // //         for (int i = top2; i >= 0; i--) {
// // //             cout << s2[i] << " ";
// // //         }
// // //         for (int i = 0; i <= top1; i++) {
// // //             cout << s1[i] << " ";
// // //         }

// // //         cout << endl;
// // //     }
// // // };

// // // int main() {
// // //     QueueUsingStacks q(10);
// // //     q.push(10);
// // //     q.push(20);
// // //     q.push(30);
// // //     cout << q.front() << endl;
// // //     q.pop();
// // //     cout << q.front() << endl;
// // //     q.display();
// // //     return 0;
// // // }
