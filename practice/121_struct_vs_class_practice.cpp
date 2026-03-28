#include<iostream>
using namespace std;
struct student {  
    string name; //defult public//
};

class student_class {
    string name;    //defult private//
    int rollnumber;
};

int main(){
    student s1;
    s1.name ="Ashrith";

    student_class s2;
    s2.name ="Ashrith";
    s2.rollnumber = 241501;

    return 0;
}
