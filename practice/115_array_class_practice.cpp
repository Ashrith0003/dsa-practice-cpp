// // #include<iostream>
// // using namespace std;

// // class Array {
// //     int arr[100];
// //     int size;

// // public:
// //     Array() {
// //         size = 0;
// //     }

// //     void insert(int pos, int value) {
// //         if (pos < 0 || pos > size) {
// //             cout << "Invalid position\n";
// //             return;
// //         }
// //         for (int i = size; i > pos; i--) {
// //             arr[i] = arr[i - 1];
// //         }
// //         arr[pos] = value;
// //         size++;
// //     }

// //     void remove(int pos) {
// //         if (pos < 0 || pos >= size) {
// //             cout << "Invalid position\n";
// //             return;
// //         }
// //         for (int i = pos; i < size - 1; i++) {
// //             arr[i] = arr[i + 1];
// //         }
// //         size--;
// //     }

// //     void traverse() {
// //         for (int i = 0; i < size; i++) {
// //             cout << arr[i] << " ";
// //         }
// //         cout << endl;
// //     }
// // };

// // int main() {
// //     Array a;

// //     a.insert(0, 10);
// //     a.insert(1, 20);
// //     a.insert(2, 30);
// //     a.insert(1, 15);

// //     a.traverse();

// //     a.remove(2);

// //     a.traverse();

// //     return 0;
// // }
