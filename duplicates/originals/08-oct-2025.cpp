
// #include <iostream>
// using namespace std;
// void merge(int arr[], int left, int mid, int right) {
//     int n1 = mid - left + 1;  
//     int n2 = right - mid;      

//     int L[n1], R[n2];          

//     for (int i = 0; i < n1; i++)
//         L[i] = arr[left + i];
//     for (int j = 0; j < n2; j++)
//         R[j] = arr[mid + 1 + j];


//     int i = 0; 
//     int j = 0;  
//     int k = left; 

//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {      
//             arr[k] = L[i];
//             i++;
//         } else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }
//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }
// void mergeSort(int arr[], int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;
//         mergeSort(arr, left, mid);       
//         mergeSort(arr, mid + 1, right); 

//         merge(arr, left, mid, right);     
//     }
// }

// int main() {
//     int arr[] = {38, 27, 43, 3, 9, 82, 10};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original array: ";
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
//      mergeSort(arr, 0, size - 1);

//     cout << "Sorted array: ";
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }

#include<iostream>
using namespace std;
class stack{
    int top;
    int arr[100];
    int max_element;
public:
    stack(int size = 100){
        top = -1;
        max_element = size;
 }

void push(int value){
    if(top >= max_element-1){
        cout << "can't push stack is full"<<endl;
    }else{
        arr[++top] = value;
        cout<<"pushed element "<< value<<endl;
    }
}

void pop(){
    if(top <= 0){
        cout <<"THe stack is empty"<<endl;
    }else{
        cout<<arr[top--]<<"pop THE element"<<endl;
    }
}

bool empty(){
    if(top <= 0){
        return true;
    }
    else{
        return false;
    }
}

void peek(){
    if(top <= 0){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<arr[top]<<endl;
    }
}

};
int main() {
    stack s(5);

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






