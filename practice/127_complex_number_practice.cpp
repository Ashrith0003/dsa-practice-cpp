#include<iostream>
using namespace std;
class Complex {
private:
    int real;
    int imaginary;
public:
    void setdetails(int real, int imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }

    void add(Complex c2) {
        int sumReal      = real + c2.real;
        int sumImaginary = imaginary + c2.imaginary;
        cout << sumReal << " + " << sumImaginary << "i" << endl;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1, c2;

    c1.setdetails(3, 2);
    c2.setdetails(1, 4);

    cout << "C1 = "; c1.display();
    cout << "C2 = "; c2.display();

    cout << "Sum = "; c1.add(c2);  // c2 is passed as argument

    return 0;
}
