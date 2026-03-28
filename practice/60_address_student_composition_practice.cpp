#include<iostream>
using namespace std;
class Address{
private:
    string city;
    int pincode;
    string state;
public:
    Address(string c,int b,string k){
        city = c;
        pincode = b;
        state = k;
    }

    void displayAddress() {
        cout << "City: " << city << endl;
        cout << "Pincode: " << pincode << endl;
    };

    int getpincode(){
        cout<< pincode<<endl;
    }
};

class student{
private:
    string name;
    int rollno;
    Address address;
public:
    student(string n,int a,string city,int pin):address(city,pin)
    {
        name=n;
        rollno =a;

    } 
    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        address.displayAddress();
    }
};

int main() {
    student s1("Ashrith", 241501, "Hyderabad", 500001);
    s1.getpincode();
    s1.displayStudent();
    return 0;
}