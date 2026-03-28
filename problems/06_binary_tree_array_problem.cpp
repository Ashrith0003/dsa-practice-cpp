#include<iostream>
using namespace std;

class BinaryTree {
    int arr[100];
    int size;

public:
    BinaryTree() {
        size = 0;
    }

    void insert(int value) {
        arr[size] = value;
        size++;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int leftChild(int index) {
        int left = 2 * index + 1;
        if (left < size) return arr[left];
        return -1;
    }

    int rightChild(int index) {
        int right = 2 * index + 2;
        if (right < size) return arr[right];
        return -1;
    }
};

int main() {
    BinaryTree bt;

    bt.insert(10);
    bt.insert(20);
    bt.insert(30);
    bt.insert(40);
    bt.insert(50);
    bt.insert(60);

    bt.display();

    cout << bt.leftChild(0) << endl;
    cout << bt.rightChild(0) << endl;

    return 0;
}
