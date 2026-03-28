#include<iostream>
using namespace std;

int arr[8] = {38, 27, 43, 3, 9, 82, 10, 50};
int size = 8;

void merge(int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int a[n1], b[n2];

    for (int i = 0; i < n1; i++) a[i] = arr[l + i];
    for (int i = 0; i < n2; i++) b[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) arr[k++] = a[i++];
        else arr[k++] = b[j++];
    }

    while (i < n1) arr[k++] = a[i++];
    while (j < n2) arr[k++] = b[j++];
}

void mergeSort(int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(l, m);
        mergeSort(m + 1, r);
        merge(l, m, r);
    }
}

int main() {
    mergeSort(0, size - 1);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
