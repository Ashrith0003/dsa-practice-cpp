#include<iostream>
using namespace std;

class Counter {
private:
    static int count;  
public:
    Counter() {
        count++;
        cout << "Object created! Count = " << count << endl;
    }

    static void displayCount() {
        cout << "Total objects created : " << count << endl;
    }
};
int Counter::count = 0;

int main() {
    Counter::displayCount();  // count = 0

    Counter c1;               // count = 1
    Counter c2;               // count = 2
    Counter c3;               // count = 3

    Counter::displayCount();  // count = 3

    return 0;
}
