#include<iostream>
using namespace std;

class Parent {
public:
    virtual void show() {
        cout << "Parent function" << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "Child function" << endl;
    }
};

int main() {
    Child c;
    c.show(); // calls child function
    c.Parent::show();  //class parent function//ajsdd
}
