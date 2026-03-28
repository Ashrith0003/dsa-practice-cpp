// // // // // // #include<iostream>
// // // // // // using namespace std;
// // // // // // class stack{
// // // // // //     int top;
// // // // // //     int arr[100];
// // // // // //     int max_element;
// // // // // // public:
// // // // // //     stack(int size = 100){
// // // // // //         top = -1;
// // // // // //         max_element = size;
// // // // // //  }
// // // // // // void push(int value){
// // // // // //     if(top >= max_element-1){
// // // // // //         cout << "can't push stack is full"<<endl;
// // // // // //     }else{
// // // // // //         arr[++top] = value;
// // // // // //         cout<<"pushed element "<< value<<endl;
// // // // // //     }
// // // // // // }
// // // // // // void pop(){
// // // // // //     if(top <= 0){
// // // // // //         cout <<"THe stack is empty"<<endl;
// // // // // //     }else{
// // // // // //         cout<<arr[top--]<<"pop THE element"<<endl;
// // // // // //     }
// // // // // // }

// // // // // // bool empty(){
// // // // // //     if(top <= 0){
// // // // // //         return true;
// // // // // //     }
// // // // // //     else{
// // // // // //         return false;
// // // // // //     }
// // // // // // }
// // // // // // void peek(){
// // // // // //     if(top <= 0){
// // // // // //         cout<<"stack is empty"<<endl;
// // // // // //     }else{
// // // // // //         cout<<arr[top]<<endl;
// // // // // //     }
// // // // // // }
// // // // // // };
// // // // // // int main() {
// // // // // //     stack s(5);
// // // // // //     s.push(10);
// // // // // //     s.push(20);
// // // // // //     s.push(30);
// // // // // //     s.peek();
// // // // // //     s.pop();
// // // // // //     s.peek();
// // // // // //     if (s.empty()) {
// // // // // //         cout << "Stack is empty" << endl;
// // // // // //     } else {
// // // // // //   cout << "Stack is not empty" << endl;
// // // // // //     }

// // // // // //     return 0;
// // // // // // }

// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // class Node {
// // // // // public:
// // // // //     int data;
// // // // //     Node* next;
// // // // //     Node(int value) {
// // // // //         data = value;
// // // // //         next = NULL;
// // // // //     }
// // // // // };
// // // // // class queue {
// // // // //     Node* head;
// // // // //     Node* tail;

// // // // // public:
// // // // //     queue() {
// // // // //         head = tail = NULL;
// // // // //     }
// // // // //     void push(int data) {
// // // // //         Node* newnode = new Node(data);
// // // // //         if (empty()) {
// // // // //             head = tail = newnode;
// // // // //         } else {
// // // // //             tail->next = newnode;
// // // // //             tail = newnode;
// // // // //         }
// // // // //     }

// // // // //     void pop() {
// // // // //         if (empty()) {
// // // // //             cout << "Queue is empty" << endl;
// // // // //         } else {
// // // // //             Node* temp = head;
// // // // //             head = head->next;
// // // // //             delete temp;

// // // // //             if (head == NULL) {  
// // // // //                 tail = NULL;   
// // // // //             }
// // // // //         }
// // // // //     }
// // // // //     int front() {
// // // // //         if (empty()) {
// // // // //             cout << "Queue is empty" << endl;
// // // // //             return -1;   
// // // // //         }
// // // // //         return head->data;
// // // // //     }

// // // // //     bool empty() {
// // // // //         return (head == NULL);
// // // // //     }
// // // // // };
// // // // // int main() {
// // // // //     queue q;
// // // // //     q.push(10);
// // // // //     q.push(20);
// // // // //     q.push(30);
// // // // //     while (!q.empty()) {
// // // // //         cout << q.front() << " ";
// // // // //         q.pop();
// // // // //     }
// // // // //     cout << endl;
// // // // //     return 0;
// // // // // }
// // // // #include<iostream>
// // // // using namespace std;
// // // // class QueueUsingStacks {
// // // //     int s1[100], s2[100];
// // // //     int top1, top2;
// // // //     int maxSize;
// // // // public:
// // // //     QueueUsingStacks(int size = 100) {
// // // //         top1 = -1;
// // // //         top2 = -1;
// // // //         maxSize = size;
// // // //     }
// // // //     bool empty() {
// // // //         return (top1 == -1 && top2 == -1);
// // // //     }
// // // //     void push(int value) {
// // // //         if (top1 >= maxSize - 1) {
// // // //             cout << "Queue is full\n";
// // // //             return;
// // // //         }
// // // //         s1[++top1] = value;
// // // //     }
// // // //     void pop() {
// // // //         if (empty()) {
// // // //             cout << "Queue is empty\n";
// // // //             return;
// // // //         }

// // // //         if (top2 == -1) {
// // // //             while (top1 != -1) {
// // // //                 s2[++top2] = s1[top1--];
// // // //             }
// // // //         }
// // // //         cout << s2[top2--] << endl;
// // // //     }
// // // //     int front() {
// // // //         if (empty()) {
// // // //             cout << "Queue is empty\n";
// // // //             return -1;
// // // //         }
// // // //         if (top2 == -1) {
// // // //             while (top1 != -1) {
// // // //                 s2[++top2] = s1[top1--];
// // // //             }
// // // //         }

// // // //         return s2[top2];
// // // //     }
// // // //     void display() {
// // // //         if (empty()) {
// // // //             cout << "Queue is empty\n";
// // // //             return;
// // // //         }

// // // //         for (int i = top2; i >= 0; i--) {
// // // //             cout << s2[i] << " ";
// // // //         }
// // // //         for (int i = 0; i <= top1; i++) {
// // // //             cout << s1[i] << " ";
// // // //         }

// // // //         cout << endl;
// // // //     }
// // // // };

// // // // int main() {
// // // //     QueueUsingStacks q(10);
// // // //     q.push(10);
// // // //     q.push(20);
// // // //     q.push(30);
// // // //     cout << q.front() << endl;
// // // //     q.pop();
// // // //     cout << q.front() << endl;
// // // //     q.display();
// // // //     return 0;
// // // // }


// // // // ///
// // // //10//
// // // // #include<iostream>
// // // // using namespace std;

// // // // struct Node {
// // // //     int data;
// // // //     Node* next;

// // // //     Node(int value) {
// // // //         data = value;
// // // //         next = NULL;
// // // //     }
// // // // };

// // // // class Stack {
// // // //     Node* top;

// // // // public:
// // // //     Stack() {
// // // //         top = NULL;
// // // //     }

// // // //     bool empty() {
// // // //         return top == NULL;
// // // //     }

// // // //     void push(int value) {
// // // //         Node* newnode = new Node(value);
// // // //         newnode->next = top;
// // // //         top = newnode;
// // // //     }

// // // //     void pop() {
// // // //         if (empty()) {
// // // //             cout << "Stack is empty\n";
// // // //             return;
// // // //         }
// // // //         Node* temp = top;
// // // //         cout << "Popped: " << top->data << endl;
// // // //         top = top->next;
// // // //         delete temp;
// // // //     }

// // // //     int peek() {
// // // //         if (empty()) {
// // // //             cout << "Stack is empty\n";
// // // //             return -1;
// // // //         }
// // // //         return top->data;
// // // //     }

// // // //     void display() {
// // // //         Node* temp = top;
// // // //         while (temp != NULL) {
// // // //             cout << temp->data << " ";
// // // //             temp = temp->next;
// // // //         }
// // // //         cout << endl;
// // // //     }
// // // // };

// // // // int main() {
// // // //     Stack s;

// // // //     s.push(10);
// // // //     s.push(20);
// // // //     s.push(30);

// // // //     cout << "Top element: " << s.peek() << endl;

// // // //     s.pop();
// // // //     cout << "Top element: " << s.peek() << endl;

// // // //     s.display();

// // // //     return 0;
// // // // }

// // // #include<iostream>
// // // using namespace std;

// // // class Array {
// // //     int arr[100];
// // //     int size;

// // // public:
// // //     Array() {
// // //         size = 0;
// // //     }

// // //     void insert(int pos, int value) {
// // //         if (pos < 0 || pos > size) {
// // //             cout << "Invalid position\n";
// // //             return;
// // //         }
// // //         for (int i = size; i > pos; i--) {
// // //             arr[i] = arr[i - 1];
// // //         }
// // //         arr[pos] = value;
// // //         size++;
// // //     }

// // //     void remove(int pos) {
// // //         if (pos < 0 || pos >= size) {
// // //             cout << "Invalid position\n";
// // //             return;
// // //         }
// // //         for (int i = pos; i < size - 1; i++) {
// // //             arr[i] = arr[i + 1];
// // //         }
// // //         size--;
// // //     }

// // //     void traverse() {
// // //         for (int i = 0; i < size; i++) {
// // //             cout << arr[i] << " ";
// // //         }
// // //         cout << endl;
// // //     }
// // // };

// // // int main() {
// // //     Array a;

// // //     a.insert(0, 10);
// // //     a.insert(1, 20);
// // //     a.insert(2, 30);
// // //     a.insert(1, 15);

// // //     a.traverse();

// // //     a.remove(2);

// // //     a.traverse();

// // //     return 0;
// // // }

// // // #include<iostream>
// // // using namespace std;

// // // int arr[6] = {10, 20, 30, 40, 50, 60};
// // // int size = 6;

// // // int binarySearch(int key) {
// // //     int start = 0;
// // //     int end = size - 1;

// // //     while (start <= end) {
// // //         int mid = (start + end) / 2;

// // //         if (arr[mid] == key) {
// // //             return mid;
// // //         }
// // //         else if (arr[mid] < key) {
// // //             start = mid + 1;
// // //         }
// // //         else {
// // //             end = mid - 1;
// // //         }
// // //     }
// // //     return -1;
// // // }

// // // int main() {
// // //     int key = 40;

// // //     int result = binarySearch(key);

// // //     if (result != -1) {
// // //         cout << "Element found at index: " << result << endl;
// // //     } else {
// // //         cout << "Element not found" << endl;
// // //     }

// // //     return 0;
// // // }



// // #include<iostream>
// // using namespace std;

// // // Global array and size
// // int arr[6] = {50, 30, 10, 40, 20, 60};
// // int size = 6;

// // void bubbleSort() {
// //     for (int i = 0; i < size - 1; i++) {

// //         cout << "Pass " << i + 1 << ": ";

// //         for (int j = 0; j < size - i - 1; j++) {
// //             if (arr[j] > arr[j + 1]) {
// //                 // swap
// //                 int temp = arr[j];
// //                 arr[j] = arr[j + 1];
// //                 arr[j + 1] = temp;
// //             }
// //         }

// //         // print array for each pass
// //         for (int k = 0; k < size; k++) {
// //             cout << arr[k] << " ";
// //         }
// //         cout << endl;
// //     }
// // }

// // int main() {
// //     cout << "Original Array: ";
// //     for (int i = 0; i < size; i++) {
// //         cout << arr[i] << " ";
// //     }
// //     cout << endl << endl;

// //     bubbleSort();

// //     cout << "\nSorted Array: ";
// //     for (int i = 0; i < size; i++) {
// //         cout << arr[i] << " ";
// //     }

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // int arr[6] = {40, 20, 10, 50, 30, 60};
// // int size = 6;

// // void insertionSort() {
// //     for (int i = 1; i < size; i++) {
// //         int key = arr[i];
// //         int j = i - 1;

// //         while (j >= 0 && arr[j] > key) {
// //             arr[j + 1] = arr[j];
// //             j--;
// //         }

// //         arr[j + 1] = key;
// //     }
// // }

// // int main() {
// //     insertionSort();

// //     for (int i = 0; i < size; i++) {
// //         cout << arr[i] << " ";
// //     }

// //     return 0;
// // }
// #include<iostream>
// using namespace std;

// int arr[8] = {38, 27, 43, 3, 9, 82, 10, 50};
// int size = 8;

// void merge(int l, int m, int r) {
//     int n1 = m - l + 1;
//     int n2 = r - m;

//     int a[n1], b[n2];

//     for (int i = 0; i < n1; i++) a[i] = arr[l + i];
//     for (int i = 0; i < n2; i++) b[i] = arr[m + 1 + i];

//     int i = 0, j = 0, k = l;

//     while (i < n1 && j < n2) {
//         if (a[i] <= b[j]) arr[k++] = a[i++];
//         else arr[k++] = b[j++];
//     }

//     while (i < n1) arr[k++] = a[i++];
//     while (j < n2) arr[k++] = b[j++];
// }

// void mergeSort(int l, int r) {
//     if (l < r) {
//         int m = (l + r) / 2;
//         mergeSort(l, m);
//         mergeSort(m + 1, r);
//         merge(l, m, r);
//     }
// }

// int main() {
//     mergeSort(0, size - 1);

//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

int main() {
    int base = 1000;
    int w = 4;

    int rows = 3, cols = 4;

    int i = 1, j = 2;

    int rowMajor = base + w * (i * cols + j);
    int colMajor = base + w * (j * rows + i);

    cout << "Row Major Address: " << rowMajor << endl;
    cout << "Column Major Address: " << colMajor << endl;

    return 0;
}

