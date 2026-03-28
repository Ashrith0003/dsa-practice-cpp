function overloading//
#include<iostream>
using namespace std;

class Demo {
public:
    void add(int a, int b) {
        cout << a + b << endl;
    }

    void add(int a, int b, int c) {
        cout << a + b + c << endl;
    }
};

int main() {
    Demo d;
    d.add(2,3);      
    d.add(2,3,4);
return 0;    
}
