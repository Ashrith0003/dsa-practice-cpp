#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
class student{
public:
    string name;
    int age;
    int marks;

    student(string a,int b,int c){
        name = a;
        age = b;
        marks = c;

        if(age<0){
            age = 0;
        }
        if(marks < 0 || marks > 100){
            marks = 0;
        }
    }

    void display(){
        cout<<name<<" "<<age<<" "<<marks<<" ";
    }
};

int main(){
    student s1("Ashrith",19,101);
    s1.display();
    return 0;
}
