#include<iostream>
using namespace std;
class student{
public:
    string name;
    int rollno;
    int phonenumber;

    student() {}

    student(string n,int m,int k){
        name = n;
        rollno = m;
        phonenumber =k;
    }

     void display() {
        cout << name << " " << rollno << " " << phonenumber << endl;
    }
};

int main(){
    student s[5];
    s[0] = student("Thanush", 241540, 9546823);
    s[1] = student("Ashrith", 241501, 9876543);
    s[2] = student("Rahul", 241520, 9123456);

    for(int i = 0; i < 3; i++) {
        s[i].display();
    }
    return 0;

