
#include <iostream>
using namespace std;
int fib(int n) {
    if (n == 0) return 0;  
    if (n == 1) return 1;      
    return fib(n - 1) + fib(n - 2); 
}

int main() {
    int N;
    cout << "Enter number of terms: ";
    cin >> N;

    cout << "Fibonacci Series up to " << N << " terms:  " ;

    for (int i = 0; i < N; i++) {
        cout << fib(i) << " ";
    }

    return 0;
}
