#include<iostream>
using namespace std;

int arr[8] ={7,6,5,4,2,10,20,13}; 

int get_max(int arr[], int n) {
    int max_1 = arr[0];   // local max
    for(int i=1; i<n; i++) {
        if(arr[i] > max_1) {
            max_1 = arr[i];
        }
    }
    return max_1;
}

void swap(int &a, int &b) {   // use reference to actually swap
    int temp = a;
    a = b;
    b = temp;
}

void selection_sort(int n) {
    for(int pass=n; pass>1; pass--) {
        // find index of maximum element in arr[0..pass-1]
        int maxIndex = 0;
        for(int i=1; i<pass; i++) {
            if(arr[i] > arr[maxIndex]) {
                maxIndex = i;
            }
        }
        swap(arr[maxIndex], arr[pass-1]);
    }
}

void display(int n ,int arr[]) {
    for(int i=0; i<n; i++) {
       cout << " " << arr[i];
   }
   cout << endl;
}

int main() {
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(n);
    display(n, arr);
}