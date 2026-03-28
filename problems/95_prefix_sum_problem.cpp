#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;              

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];     
    }

    
    int ps[100];
    ps[0] = arr[0];

    for (int i = 1; i < n; i++) {
        ps[i] = ps[i - 1] + arr[i];
    }

    int q;
    cin >> q;              

    while (q--) {
        int i, j;
        cin >> i >> j;    

        if (i == 0)
            cout << ps[j] << endl;
        else
            cout << ps[j] - ps[i - 1] << endl;
    }

    return 0;
}


