// #include<iostream>
// using namespace std;

// // Global array and size
// int arr[6] = {50, 30, 10, 40, 20, 60};
// int size = 6;

// void bubbleSort() {
//     for (int i = 0; i < size - 1; i++) {

//         cout << "Pass " << i + 1 << ": ";

//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // swap
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }

//         // print array for each pass
//         for (int k = 0; k < size; k++) {
//             cout << arr[k] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     cout << "Original Array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl << endl;

//     bubbleSort();

//     cout << "\nSorted Array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
