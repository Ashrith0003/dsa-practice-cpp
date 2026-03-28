#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[6] = {1, 12, -5, -6, 50, 3};
    int k = 4;
    int n = 6;

    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int maxsum = sum;

  
    for (int i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];
        maxsum = max(maxsum, sum);
    }

    double average = (double)maxsum / k;

    cout << "Maximum Average: " << average << endl;

    return 0;
}
