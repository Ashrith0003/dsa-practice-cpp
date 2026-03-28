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

